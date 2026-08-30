#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class SignalAnimationStateMachine; }
namespace RPG::Client { class SignalTransformProcessor; }
namespace RPG::Client { class StageHarmonySignalAnimationBehavior; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_STAGEHARMONYSIGNALANIMATIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A4E48D0)
#define RPG_CLIENT_STAGEHARMONYSIGNALANIMATIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E4920)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalAnimationMonoPlugin_TypeDefinitionIndex = 70949;

	class StageHarmonySignalAnimationMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonySignalAnimationBehavior*>
	{
	public:
		::System::String* Channel; // 0x30
		::UnityEngine::Animation* animationComponent; // 0x38
		::RPG::Client::SignalTransformProcessor* SignalProcessor; // 0x40
		::System::Single Signal; // 0x48
		::System::String* CurrentStateName; // 0x50
		::RPG::Client::SignalAnimationStateMachine* StateMachineController; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALANIMATIONMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALANIMATIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
