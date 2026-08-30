#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D19B050)
#define RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19B2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILCombatAdvantageGroupConfigRow_TypeDefinitionIndex = 13696;

	class ILCombatAdvantageGroupConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint DamageTakenRatio; // 0x10
		::System::Int64 CombatAdvantage; // 0x18
		::RPG::GameCore::FixPoint DamageRatio; // 0x20
		::System::UInt32 CombatAdvantageGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
