#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEOBJECTCAPTUREMONO_GETGAMEOBJECTBYALIAS_OFFSET UNITYSDK_OFFSET(0x15E55180)
#define MOLEMOLE_SCENEOBJECTCAPTUREMONO_TRYGETGAMEOBJECTBYALIAS_OFFSET UNITYSDK_OFFSET(0x15E552D0)
#define MOLEMOLE_SCENEOBJECTCAPTUREMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E55440)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectCaptureMono_TypeDefinitionIndex = 66570;

	class SceneObjectCaptureMono : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* AliasGameObjectRefMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTUREMONO__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetGameObjectByAlias(::System::String* alias)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTUREMONO_GETGAMEOBJECTBYALIAS_OFFSET))(this, alias);
		}

		::System::Boolean TryGetGameObjectByAlias(::System::String* alias, ::UnityEngine::GameObject*& go)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTUREMONO_TRYGETGAMEOBJECTBYALIAS_OFFSET))(this, alias, go);
		}
	};
}
