#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_653768EACA90C2F2_OFFSET UNITYSDK_OFFSET(0x1B785D10)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_6FBB206563BF146F_OFFSET UNITYSDK_OFFSET(0x1B785DE0)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B785DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_NavigateToAward_TypeDefinitionIndex = 21626;

	class ST_Main_NavigateToAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_653768EACA90C2F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_NavigateToAward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_NavigateToAward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_653768EACA90C2F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FBB206563BF146F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_METHOD_4_6FBB206563BF146F_OFFSET))(a1, a2);
		}
	};
}
