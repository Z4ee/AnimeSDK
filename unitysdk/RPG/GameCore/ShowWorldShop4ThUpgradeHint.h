#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_80017438CFD7776B_OFFSET UNITYSDK_OFFSET(0x17708200)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_F209B95F3BF3DD84_OFFSET UNITYSDK_OFFSET(0x17708280)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17708250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWorldShop4ThUpgradeHint_TypeDefinitionIndex = 20114;

	class ShowWorldShop4ThUpgradeHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OfferingTypeID; // 0x18
		::System::UInt32 PhaseID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80017438CFD7776B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_80017438CFD7776B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F209B95F3BF3DD84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_F209B95F3BF3DD84_OFFSET))(a1, a2);
		}
	};
}
