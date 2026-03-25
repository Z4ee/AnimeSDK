#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_5AE082388CEA6793_OFFSET UNITYSDK_OFFSET(0x176FA7D0)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_6366294E9EF60455_OFFSET UNITYSDK_OFFSET(0x176FA850)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x176FA820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFightFestMainRaceUpgradeResultDialog_TypeDefinitionIndex = 19889;

	class ShowFightFestMainRaceUpgradeResultDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainRaceID; // 0x18
		::System::Boolean IsSuccess; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AE082388CEA6793(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_5AE082388CEA6793_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6366294E9EF60455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_6366294E9EF60455_OFFSET))(a1, a2);
		}
	};
}
