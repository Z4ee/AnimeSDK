#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_METHOD_3_EEED25F58BB81B21_OFFSET UNITYSDK_OFFSET(0x1BE446B0)
#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_METHOD_3_FC36E18F5E0E2154_OFFSET UNITYSDK_OFFSET(0x1BE446F0)
#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE446E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowOfferingClockieUpgradeHint_TypeDefinitionIndex = 21134;

	class ShowOfferingClockieUpgradeHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OfferingTypeID; // 0x18
		::System::UInt32 PhaseID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EEED25F58BB81B21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_METHOD_3_EEED25F58BB81B21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC36E18F5E0E2154(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_METHOD_3_FC36E18F5E0E2154_OFFSET))(a1, a2);
		}
	};
}
