#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_METHOD_3_66492B7F94819920_OFFSET UNITYSDK_OFFSET(0x193FC3B0)
#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_METHOD_3_ED7FF784F30CEE33_OFFSET UNITYSDK_OFFSET(0x193FC430)
#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x193FC400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidAlleyPlacingShowUI_TypeDefinitionIndex = 20018;

	class ActivityRaidAlleyPlacingShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OrderID; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66492B7F94819920(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_METHOD_3_66492B7F94819920_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED7FF784F30CEE33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_METHOD_3_ED7FF784F30CEE33_OFFSET))(a1, a2);
		}
	};
}
