#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_8EBD310A5D007514_OFFSET UNITYSDK_OFFSET(0x178CF3B0)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_C09E1CA193542060_OFFSET UNITYSDK_OFFSET(0x178CF4C0)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI__CTOR_OFFSET UNITYSDK_OFFSET(0x178CF490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerTeamEditUI_TypeDefinitionIndex = 18711;

	class TriggerTeamEditUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EBD310A5D007514(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTeamEditUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTeamEditUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_8EBD310A5D007514_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C09E1CA193542060(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_C09E1CA193542060_OFFSET))(a1, a2);
		}
	};
}
