#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F3396D9868AF6EA8_OFFSET UNITYSDK_OFFSET(0x1E0A43A0)
#define RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F5E2FC103D9BB35D_OFFSET UNITYSDK_OFFSET(0x1E0A4350)
#define RPG_GAMECORE_SHOWBATTLEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleUI_TypeDefinitionIndex = 22253;

	class ShowBattleUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Single InteractableDelay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5E2FC103D9BB35D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F5E2FC103D9BB35D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3396D9868AF6EA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_METHOD_3_F3396D9868AF6EA8_OFFSET))(a1, a2);
		}
	};
}
