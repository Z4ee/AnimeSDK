#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_PSEmitControllerBehavior_ParticleEmitData.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_PSEmitControllerBehavior; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9565F80)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PSEmitControllerMonoPlugin_TypeDefinitionIndex = 57745;

	class Effect_PSEmitControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_PSEmitControllerBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_PSEmitControllerBehavior_ParticleEmitData>* EmitList; // 0x30
		::UnityEngine::ParticleSystem* MainEmitter; // 0x38
		::System::Single ScaleMultiplier; // 0x40
		::System::String* ConfigPath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
