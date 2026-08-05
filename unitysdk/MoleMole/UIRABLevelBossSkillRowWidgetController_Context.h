#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6E781DF9B76E407C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT_GET_MONSTERBASEID_OFFSET UNITYSDK_OFFSET(0x1799C4B0)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1799C5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossSkillRowWidgetController_Context_TypeDefinitionIndex = 80249;

	class UIRABLevelBossSkillRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossCharacterId; // 0x28
		::Enum_3_6E781DF9B76E407C skillIndex; // 0x2C
		::System::Int32 skillDescId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_monsterBaseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT_GET_MONSTERBASEID_OFFSET))(this);
		}
	};
}
