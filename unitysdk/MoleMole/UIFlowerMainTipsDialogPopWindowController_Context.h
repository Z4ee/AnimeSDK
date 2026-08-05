#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_99D9290CFF746047;

#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FLOWERQUESTDETAILDATA_OFFSET UNITYSDK_OFFSET(0x19F9D2F0)
#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_FLOWERQUESTDETAILDATA_OFFSET UNITYSDK_OFFSET(0x19F9D300)
#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9D310)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTipsDialogPopWindowController_Context_TypeDefinitionIndex = 70070;

	class UIFlowerMainTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_99D9290CFF746047* _FlowerQuestDetailData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_2_99D9290CFF746047* get_FlowerQuestDetailData()
		{
			return ((::Class_2_99D9290CFF746047*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FLOWERQUESTDETAILDATA_OFFSET))(this);
		}

		::System::Void set_FlowerQuestDetailData(::Class_2_99D9290CFF746047* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_99D9290CFF746047*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_FLOWERQUESTDETAILDATA_OFFSET))(this, value);
		}
	};
}
