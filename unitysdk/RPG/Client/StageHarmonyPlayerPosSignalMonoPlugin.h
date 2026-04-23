#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_PlayerType.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_RegisterMode.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class StageHarmonyPlayerPosSignalBehavior; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xB1B23B0)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xB1B2330)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B2540)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoPlugin_TypeDefinitionIndex = 65416;

	class StageHarmonyPlayerPosSignalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyPlayerPosSignalBehavior*>
	{
	public:
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_RegisterMode RegisterType; // 0x30
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_PlayerType playerType; // 0x34
		::UnityEngine::Vector3 TargetPos; // 0x38
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_SignalType signalType; // 0x44
		::System::Boolean UseLocalSpaceVolume; // 0x48
		::System::Single Range; // 0x4C
		::System::String* Channle; // 0x50
		::UnityEngine::Transform* EditorTestHandle; // 0x58
		::System::Boolean ChannleNameInvalid; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}
	};
}
