#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_632B40777C0C6C1D_OFFSET UNITYSDK_OFFSET(0x1DC31540)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_C09E1CA193542060_OFFSET UNITYSDK_OFFSET(0x1DC31610)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerTeamEditUI_TypeDefinitionIndex = 20416;

	class TriggerTeamEditUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_632B40777C0C6C1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTeamEditUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTeamEditUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_632B40777C0C6C1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C09E1CA193542060(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_METHOD_3_C09E1CA193542060_OFFSET))(a1, a2);
		}
	};
}
