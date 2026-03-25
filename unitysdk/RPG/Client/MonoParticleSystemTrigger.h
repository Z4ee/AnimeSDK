#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET UNITYSDK_OFFSET(0x9D26920)
#define RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_REGISTERPARTICLESYSTEMSTOPCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D267C0)
#define RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_SETSTOPCALLBACKENABLED_OFFSET UNITYSDK_OFFSET(0x9D26810)
#define RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D26970)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoParticleSystemTrigger_TypeDefinitionIndex = 56324;

	class MonoParticleSystemTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* _Callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterParticleSystemStopCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_REGISTERPARTICLESYSTEMSTOPCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetStopCallbackEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_SETSTOPCALLBACKENABLED_OFFSET))(this, value);
		}

		::System::Void OnParticleSystemStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARTICLESYSTEMTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET))(this);
		}
	};
}
