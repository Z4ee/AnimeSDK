#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162F2440)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController_Context_TypeDefinitionIndex = 87646;

	class UIZenkovTaskDetailWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* AfterTrackTaskRefresh; // 0x28
		::Class_1_1710A4EE34865C78* QuestData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
