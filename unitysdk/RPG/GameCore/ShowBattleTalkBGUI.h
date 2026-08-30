#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLETALKBGUI_METHOD_3_51C05D79A72FBB96_OFFSET UNITYSDK_OFFSET(0x1E0A4150)
#define RPG_GAMECORE_SHOWBATTLETALKBGUI_METHOD_3_8538857E525BECDB_OFFSET UNITYSDK_OFFSET(0x1E0A4100)
#define RPG_GAMECORE_SHOWBATTLETALKBGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleTalkBGUI_TypeDefinitionIndex = 23084;

	class ShowBattleTalkBGUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleTalkBGType BGType; // 0x18
		::System::Boolean IsShow; // 0x1C
		::System::Single CustomTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8538857E525BECDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleTalkBGUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleTalkBGUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI_METHOD_3_8538857E525BECDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_51C05D79A72FBB96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleTalkBGUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleTalkBGUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI_METHOD_3_51C05D79A72FBB96_OFFSET))(a1, a2);
		}
	};
}
