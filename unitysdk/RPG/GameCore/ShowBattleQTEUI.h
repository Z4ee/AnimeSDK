#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleQTEUIConfig; }

#define RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_BB606F9C53BC8A58_OFFSET UNITYSDK_OFFSET(0x176F5B80)
#define RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_D2E6C1926BC054B1_OFFSET UNITYSDK_OFFSET(0x176F5C00)
#define RPG_GAMECORE_SHOWBATTLEQTEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleQTEUI_TypeDefinitionIndex = 21578;

	class ShowBattleQTEUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleQTEUIConfig* UIConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB606F9C53BC8A58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleQTEUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleQTEUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_BB606F9C53BC8A58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2E6C1926BC054B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_D2E6C1926BC054B1_OFFSET))(a1, a2);
		}
	};
}
