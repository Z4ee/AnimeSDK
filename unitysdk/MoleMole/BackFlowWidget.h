#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1005B9479049BC5A;
class Class_2_6DE5FBED45BCAC88;
class Class_2_79AE422BA06F6D26_27;
namespace MoleMole { class UIActivityReturnPageController; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x12CA0B90)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12CA0BB0)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12CA0CF0)
#define MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x12CA0BA0)
#define MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA0E30)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12CA0E90)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12CA0F20)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowWidget_TypeDefinitionIndex = 77672;

	class BackFlowWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityReturnPageController* parentController; // 0x2C0
		::Class_2_79AE422BA06F6D26_27* _parentView_k__BackingField; // 0x2C8
		::Class_2_6DE5FBED45BCAC88* uiBackFlowModel; // 0x2D0
		::Class_1_1005B9479049BC5A* backFlowActivityData; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET))(this);
		}

		::Class_2_79AE422BA06F6D26_27* get_parentView()
		{
			return ((::Class_2_79AE422BA06F6D26_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET))(this);
		}

		::System::Void set_parentView(::Class_2_79AE422BA06F6D26_27* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
