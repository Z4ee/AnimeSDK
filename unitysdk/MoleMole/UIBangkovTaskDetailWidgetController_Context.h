#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A652D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController_Context_TypeDefinitionIndex = 86150;

	class UIBangkovTaskDetailWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* AfterTrackTaskRefresh; // 0x28
		::Class_1_1710A4EE34865C78* QuestData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
