#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoPlayerAttachmentController; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AD01580)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x1AD01120)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1AD014F0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1AD01500)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1AD00DD0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1AD00F80)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONTICK_OFFSET UNITYSDK_OFFSET(0x1AD01130)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD015F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentPlugin_LightFade_TypeDefinitionIndex = 60282;

	class MonoPlayerAttachmentPlugin_LightFade : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Light* Light; // 0x18
		::System::Single FadeInTime; // 0x20
		::System::Single FadeOutTime; // 0x24
		::System::Single BEOKAJGHBII; // 0x28
		::System::Single IFHGALODPJJ; // 0x2C
		::RPG::Client::MonoPlayerAttachmentController* CPIIOIPAAKK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Void OnAlloc(::RPG::Client::MonoPlayerAttachmentController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoPlayerAttachmentController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONALLOC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_ONTICK_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_AWAKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}
	};
}
