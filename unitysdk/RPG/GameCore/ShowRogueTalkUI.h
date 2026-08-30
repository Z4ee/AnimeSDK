#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUETALKUI_METHOD_3_04C7DAE10001F6D8_OFFSET UNITYSDK_OFFSET(0x1D52F1A0)
#define RPG_GAMECORE_SHOWROGUETALKUI_METHOD_3_E25A704C5663A56B_OFFSET UNITYSDK_OFFSET(0x1D52F1E0)
#define RPG_GAMECORE_SHOWROGUETALKUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueTalkUI_TypeDefinitionIndex = 20864;

	class ShowRogueTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04C7DAE10001F6D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueTalkUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueTalkUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI_METHOD_3_04C7DAE10001F6D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E25A704C5663A56B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueTalkUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI_METHOD_3_E25A704C5663A56B_OFFSET))(a1, a2);
		}
	};
}
