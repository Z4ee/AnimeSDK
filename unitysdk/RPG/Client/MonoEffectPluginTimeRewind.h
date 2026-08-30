#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CB590)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PAUSE_OFFSET UNITYSDK_OFFSET(0xD7CB8E0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD7CB760)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xD7CB5E0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CB3F0)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_RESUMEPAUSE_OFFSET UNITYSDK_OFFSET(0xD7CB970)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND_SETFORWARDANIMANDBACKWARDANIM_OFFSET UNITYSDK_OFFSET(0xD7CBA00)
#define RPG_CLIENT_MONOEFFECTPLUGINTIMEREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0xD7CBA90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTimeRewind_TypeDefinitionIndex = 70091;

	class MonoEffectPluginTimeRewind : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* ForwardAnim; // 0x28
		::System::String* BackwardAnim; // 0x30
		::System::Int32 FACELOJLBDE; // 0x38
		::System::Int32 JLPFJOKDPHI; // 0x3C
		::UnityEngine::Animator* APPGGMLEPLN; // 0x40
		::Il2CppArray<::UnityEngine::ParticleSystem*>* KNIHNIKNFNP; // 0x48
		::System::Boolean NNENJBKMKJL; // 0x50

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
