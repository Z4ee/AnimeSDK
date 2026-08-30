#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_B58B57325C1BE951_OFFSET UNITYSDK_OFFSET(0x1D533F30)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_F209B95F3BF3DD84_OFFSET UNITYSDK_OFFSET(0x1D533F70)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWorldShop4ThUpgradeHint_TypeDefinitionIndex = 21694;

	class ShowWorldShop4ThUpgradeHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OfferingTypeID; // 0x18
		::System::UInt32 PhaseID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B58B57325C1BE951(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_B58B57325C1BE951_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F209B95F3BF3DD84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_METHOD_3_F209B95F3BF3DD84_OFFSET))(a1, a2);
		}
	};
}
