#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970.h"
#include "unitysdk/MoleMole/UIActivityBattleYCLPageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174243C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController_Context_TypeDefinitionIndex = 68275;

	class UIActivityBattleYCLPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 activityBattleType; // 0x28
		::System::Int32 activityID; // 0x2C
		::System::Int32 questID; // 0x30
		::MoleMole::UIActivityBattleYCLPageController_PageState pageState; // 0x34
		::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970 activityBattleSubType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
