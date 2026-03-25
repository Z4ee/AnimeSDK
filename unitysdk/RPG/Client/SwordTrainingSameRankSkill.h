#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class SwordTrainingSkillData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSAMERANKSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x84510)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSameRankSkill_TypeDefinitionIndex = 50310;

	struct alignas(8) SwordTrainingSameRankSkill
	{
		::System::UInt32 SkillRank; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* SkillDataList; // 0x18

		::System::Void _ctor(::System::UInt32 skillRank, ::RPG::Client::SwordTrainingSkillData* skillData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSAMERANKSKILL__CTOR_OFFSET))(this, skillRank, skillData);
		}
	};
}
