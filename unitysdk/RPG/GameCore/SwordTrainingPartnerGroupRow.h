#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1589D0)
#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E158B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerGroupRow_TypeDefinitionIndex = 12355;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingPartnerGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPartnerGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
