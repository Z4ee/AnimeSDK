#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CumulativeConsumptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C8F4A0)
#define RPG_GAMECORE_RECHARGEBENEFITCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8F650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeBenefitConfigRow_TypeDefinitionIndex = 13819;

	class RechargeBenefitConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BenefitIDList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::RPG::GameCore::CumulativeConsumptionType Type; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RechargeBenefitConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeBenefitConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
