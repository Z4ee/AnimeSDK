#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_490D64200E4A72A8_OFFSET UNITYSDK_OFFSET(0x1D858380)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_F26D4D17A4081C51_OFFSET UNITYSDK_OFFSET(0x1D858120)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1D858310)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D858300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDashBasicConfig_TypeDefinitionIndex = 16486;

	class FiveDimDashBasicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		// static const ::System::Single SMALL_NUMBER; // 0x0
		::System::Single DashDist; // 0x10
		::System::Single Duration; // 0x14
		::System::Single EndSpeedMultiplier; // 0x18
		::System::Single DashInitSpeed; // 0x1C
		::System::Single DashAcc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F26D4D17A4081C51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashBasicConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashBasicConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_F26D4D17A4081C51_OFFSET))(a1, a2);
		}

		::System::Void Method_2_F8C7231308CD2C82()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
		}

		static ::System::Void Method_2_490D64200E4A72A8(::RPG::GameCore::FiveDimDashBasicConfig* a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimDashBasicConfig*, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_METHOD_2_490D64200E4A72A8_OFFSET))(a1, a2, a3, a4);
		}
	};
}
