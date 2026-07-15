#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleQTEUIConfig; }

#define RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_8FCEA4907556CB0A_OFFSET UNITYSDK_OFFSET(0x1BE3A950)
#define RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_D2E6C1926BC054B1_OFFSET UNITYSDK_OFFSET(0x1BE3A990)
#define RPG_GAMECORE_SHOWBATTLEQTEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleQTEUI_TypeDefinitionIndex = 22509;

	class ShowBattleQTEUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleQTEUIConfig* UIConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FCEA4907556CB0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleQTEUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleQTEUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_8FCEA4907556CB0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2E6C1926BC054B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_METHOD_3_D2E6C1926BC054B1_OFFSET))(a1, a2);
		}
	};
}
