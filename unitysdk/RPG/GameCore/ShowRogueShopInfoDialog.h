#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_METHOD_3_40581891A0983660_OFFSET UNITYSDK_OFFSET(0x17702560)
#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_METHOD_3_D515C2A92B8F86E9_OFFSET UNITYSDK_OFFSET(0x177025E0)
#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x177025B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueShopInfoDialog_TypeDefinitionIndex = 19136;

	class ShowRogueShopInfoDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID InfoDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40581891A0983660(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueShopInfoDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueShopInfoDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_METHOD_3_40581891A0983660_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D515C2A92B8F86E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueShopInfoDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueShopInfoDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_METHOD_3_D515C2A92B8F86E9_OFFSET))(a1, a2);
		}
	};
}
