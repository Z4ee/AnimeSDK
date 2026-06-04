#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_623E72097950A971_OFFSET UNITYSDK_OFFSET(0x19C761C0)
#define RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F3396D9868AF6EA8_OFFSET UNITYSDK_OFFSET(0x19C76250)
#define RPG_GAMECORE_SHOWBATTLEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C76220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleUI_TypeDefinitionIndex = 21275;

	class ShowBattleUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Single InteractableDelay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_623E72097950A971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_623E72097950A971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3396D9868AF6EA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F3396D9868AF6EA8_OFFSET))(a1, a2);
		}
	};
}
