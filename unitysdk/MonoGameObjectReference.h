#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MONOGAMEOBJECTREFERENCE_GETGAMEOBJECTBYKEY_OFFSET UNITYSDK_OFFSET(0x18E88D10)
#define MONOGAMEOBJECTREFERENCE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18E88E20)
#define MONOGAMEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E88F40)

inline static constexpr unsigned int MonoGameObjectReference_TypeDefinitionIndex = 60710;

class MonoGameObjectReference : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _gameObjectReferenceDict; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGAMEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetGameObjectByKey(::System::String* key)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOGAMEOBJECTREFERENCE_GETGAMEOBJECTBYKEY_OFFSET))(this, key);
	}

	::UnityEngine::GameObject* GetGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGAMEOBJECTREFERENCE_GETGAMEOBJECT_OFFSET))(this);
	}
};
