#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_6FBB206563BF146F_OFFSET UNITYSDK_OFFSET(0x18DF37E0)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_B019DA1D362CFE20_OFFSET UNITYSDK_OFFSET(0x18DF3670)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF3790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_NavigateToAward_TypeDefinitionIndex = 21315;

	class ST_Main_NavigateToAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B019DA1D362CFE20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_NavigateToAward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_NavigateToAward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_B019DA1D362CFE20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FBB206563BF146F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_6FBB206563BF146F_OFFSET))(a1, a2);
		}
	};
}
