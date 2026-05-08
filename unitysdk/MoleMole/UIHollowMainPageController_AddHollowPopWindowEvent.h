#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_ADDHOLLOWPOPWINDOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15FAA120)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_AddHollowPopWindowEvent_TypeDefinitionIndex = 44957;

	class UIHollowMainPageController_AddHollowPopWindowEvent : public ::System::Object
	{
	public:
		::System::Boolean OnShowExitBtnNew; // 0x10
		::System::Int32 PopId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_ADDHOLLOWPOPWINDOWEVENT__CTOR_OFFSET))(this);
		}
	};
}
