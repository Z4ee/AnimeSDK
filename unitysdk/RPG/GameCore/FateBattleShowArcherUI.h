#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI_METHOD_3_7EC8C68B6E459212_OFFSET UNITYSDK_OFFSET(0x188D1660)
#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI_METHOD_3_B65505FF70817A43_OFFSET UNITYSDK_OFFSET(0x188D16E0)
#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x188D16B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleShowArcherUI_TypeDefinitionIndex = 22266;

	class FateBattleShowArcherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Boolean IsUltimate; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EC8C68B6E459212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleShowArcherUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleShowArcherUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI_METHOD_3_7EC8C68B6E459212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B65505FF70817A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleShowArcherUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI_METHOD_3_B65505FF70817A43_OFFSET))(a1, a2);
		}
	};
}
