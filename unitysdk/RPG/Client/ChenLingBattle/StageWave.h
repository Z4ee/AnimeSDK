#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_FINISHPREPAREHANDCARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x9FB8ED0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_PREPAREHANDCARDMINCOUNT_OFFSET UNITYSDK_OFFSET(0x9FB8FF0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F9E010)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE_GET_WAVEID_OFFSET UNITYSDK_OFFSET(0x9FA15F0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9AC80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int StageWave_TypeDefinitionIndex = 70106;

	class StageWave : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingStageWaveRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::ChenLingStageWaveRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingStageWaveRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGEWAVE__CTOR_OFFSET))(this, row);
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
