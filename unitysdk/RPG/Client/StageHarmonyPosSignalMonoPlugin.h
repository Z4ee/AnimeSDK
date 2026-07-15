#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/StageHarmonyPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class StageHarmonyPosSignalBehavior; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYPOSSIGNALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B48530)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPosSignalMonoPlugin_TypeDefinitionIndex = 67773;

	class StageHarmonyPosSignalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyPosSignalBehavior*>
	{
	public:
		::RPG::Client::StageHarmonyPosSignalMonoPlugin_SignalType signalType; // 0x30
		::System::Boolean UseLocalSpaceVolume; // 0x34
		::System::Single Range; // 0x38
		::System::String* Channle; // 0x40
		::UnityEngine::Vector3 TargetPos; // 0x48
		::System::Boolean ChannleNameInvalid; // 0x54
		::EnviromentSystem::EnviromentPropertiesID EnvPropertyID; // 0x58
		::UnityEngine::AnimationCurve* SignalMappingCurve; // 0x60
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPOSSIGNALMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
