#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_FINISHPREPAREHANDCARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC3C250)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_PREPAREHANDCARDMINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC3C3A0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC3C200)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_WAVEID_OFFSET UNITYSDK_OFFSET(0x1CC3C1B0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3C1A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int StageWave_TypeDefinitionIndex = 75867;

	class StageWave : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingStageWaveRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::ChenLingStageWaveRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingStageWaveRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_WAVEID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingStageWaveType get_Type()
		{
			return ((::RPG::GameCore::ChenLingStageWaveType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_FinishPrepareHandCardMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_FINISHPREPAREHANDCARDMAXCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_PrepareHandCardMinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_PREPAREHANDCARDMINCOUNT_OFFSET))(this);
		}
	};
}
