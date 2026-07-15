#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HarmonySyncMode.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StageHarmonyCurve; }
namespace RPG::Client { class StageHarmonySignalControllerBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_PLAY_OFFSET UNITYSDK_OFFSET(0x17B4B170)
#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_STOP_OFFSET UNITYSDK_OFFSET(0x17B4B240)
#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4B310)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalControllerMonoPlugin_TypeDefinitionIndex = 67785;

	class StageHarmonySignalControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonySignalControllerBehavior*>
	{
	public:
		::System::Boolean EnableMusicSync; // 0x30
		::RPG::Client::HarmonySyncMode SyncMode; // 0x34
		::System::Int32 SyncCount; // 0x38
		::RPG::Client::MusicVisualizeDataSourceType SourceType; // 0x3C
		::System::Single Progress; // 0x40
		::System::Single Speed; // 0x44
		::System::Single EditorPreviewBeatTime; // 0x48
		::System::Single Signal; // 0x4C
		::System::String* Channle; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonyCurve*>* ControlCurves; // 0x58
		::System::Boolean ChannleNameInvalid; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_STOP_OFFSET))(this);
		}
	};
}
