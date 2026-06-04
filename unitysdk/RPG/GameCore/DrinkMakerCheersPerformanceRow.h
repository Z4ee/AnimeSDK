#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196C1C10)
#define RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196C1D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersPerformanceRow_TypeDefinitionIndex = 12577;

	class DrinkMakerCheersPerformanceRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
