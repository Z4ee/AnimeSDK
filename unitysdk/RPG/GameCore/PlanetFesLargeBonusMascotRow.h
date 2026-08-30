#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RangeConfig; }

#define RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79EE10)
#define RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D79F0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLargeBonusMascotRow_TypeDefinitionIndex = 12180;

	class PlanetFesLargeBonusMascotRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RangeConfig* TapIncome; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::UInt32 ActivityRewardID; // 0x20
		::System::UInt32 BaseIncome; // 0x24
		::System::UInt32 TimePerSecond; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 ComboIncome; // 0x30
		::System::UInt32 Duration; // 0x34
		::System::UInt32 TapCD; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesLargeBonusMascotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesLargeBonusMascotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
