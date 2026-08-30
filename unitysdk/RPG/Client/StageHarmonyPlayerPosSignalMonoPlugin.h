#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_PlayerType.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_RegisterMode.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class StageHarmonyPlayerPosSignalBehavior; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE0CE300)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE0CE090)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0xE0CE2B0)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CE8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoPlugin_TypeDefinitionIndex = 70936;

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

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}
	};
}
