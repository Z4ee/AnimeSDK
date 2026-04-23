#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A636570)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6365A0)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A634590)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A634570)

inline static constexpr unsigned int AkSoundEngine_GameObjectHashFunction_TypeDefinitionIndex = 40356;

class AkSoundEngine_GameObjectHashFunction : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION__CTOR_OFFSET))(this, object, method);
	}

	::System::UInt64 Invoke(::UnityEngine::GameObject* gameObject)
	{
		return ((::System::UInt64(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_INVOKE_OFFSET))(this, gameObject);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* gameObject, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_BEGININVOKE_OFFSET))(this, gameObject, callback, object);
	}

	::System::UInt64 EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_ENDINVOKE_OFFSET))(this, result);
	}
};
