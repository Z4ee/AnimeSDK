#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_29B9CC03BC25A136_OFFSET UNITYSDK_OFFSET(0x1BE3ECA0)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_6366294E9EF60455_OFFSET UNITYSDK_OFFSET(0x1BE3ECE0)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3ECD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFightFestMainRaceUpgradeResultDialog_TypeDefinitionIndex = 20920;

	class ShowFightFestMainRaceUpgradeResultDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainRaceID; // 0x18
		::System::Boolean IsSuccess; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29B9CC03BC25A136(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_29B9CC03BC25A136_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6366294E9EF60455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_METHOD_3_6366294E9EF60455_OFFSET))(a1, a2);
		}
	};
}
