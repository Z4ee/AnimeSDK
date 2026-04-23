#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC55B0)
#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC5730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerGroupRow_TypeDefinitionIndex = 11769;

	class SwordTrainingPartnerGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PartnerAbilityDrop; // 0x10
		::System::UInt32 PartnerAbilityWeight; // 0x18
		::System::UInt32 PartnerAbilityGroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingPartnerGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPartnerGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
