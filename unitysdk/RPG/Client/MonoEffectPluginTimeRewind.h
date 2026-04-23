#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A2FF0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PAUSE_OFFSET UNITYSDK_OFFSET(0xA9A3340)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA9A31C0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xA9A3040)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A2E50)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESUMEPAUSE_OFFSET UNITYSDK_OFFSET(0xA9A33D0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_SETFORWARDANIMANDBACKWARDANIM_OFFSET UNITYSDK_OFFSET(0xA9A3460)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A34F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTimeRewind_TypeDefinitionIndex = 64648;

	class MonoEffectPluginTimeRewind : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* ForwardAnim; // 0x28
		::System::String* BackwardAnim; // 0x30
		::System::Int32 Field_6_2; // 0x38
		::System::Int32 Field_6_3; // 0x3C
		::UnityEngine::Animator* Field_6_4; // 0x40
		::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_6_5; // 0x48
		::System::Boolean Field_6_6; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PAUSE_OFFSET))(this);
		}

		::System::Void ResumePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESUMEPAUSE_OFFSET))(this);
		}

		::System::Void SetForwardAnimAndBackwardAnim(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_SETFORWARDANIMANDBACKWARDANIM_OFFSET))(this, a1, a2);
		}
	};
}
