#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE72500)
#define RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE72890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPenaltyRuleConfigRow_TypeDefinitionIndex = 13510;

	class GridFightPenaltyRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressValueList; // 0x10
		::Il2CppArray<::System::UInt32>* HPProgressValueList; // 0x18
		::System::UInt32 ThresholdPosition; // 0x20
		::System::UInt32 ThresholdPassBasicPlayerHPPenalty; // 0x24
		::System::UInt32 ThresholdFailPlayerHPPenalty; // 0x28
		::System::UInt32 ProgressPenaltyCoefficient; // 0x2C
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::FixPoint AvatarReviveDelayLose; // 0x38
		::RPG::GameCore::FixPoint TotalTurn; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
