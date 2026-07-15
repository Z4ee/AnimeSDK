#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"

class Class_0_16E4307DCC419505_1099;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define RPG_CLIENT_CAMERAVOLUMEPROXY_INITUI3DCAMERAVOLUMEPROXY_OFFSET UNITYSDK_OFFSET(0x1AC5BB90)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC5C290)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AC5BEE0)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_SETCUSTOMRELEASEACTION_OFFSET UNITYSDK_OFFSET(0x1AC5BE90)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC5C0A0)
#define RPG_CLIENT_CAMERAVOLUMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5BB80)
#define RPG_CLIENT_CAMERAVOLUMEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1AC5BC20)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraVolumeProxy_TypeDefinitionIndex = 69678;

	class CameraVolumeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Volume* _Volume; // 0x18
		::UnityEngine::Rendering::VolumeProxy_Priority _Priority; // 0x20
		::System::Action* _CustomReleaseAction; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1099*>* _ComponentProxies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void InitUI3DCameraVolumeProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_INITUI3DCAMERAVOLUMEPROXY_OFFSET))(this);
		}

		::System::Void SetCustomReleaseAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_SETCUSTOMRELEASEACTION_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY__ONINIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
