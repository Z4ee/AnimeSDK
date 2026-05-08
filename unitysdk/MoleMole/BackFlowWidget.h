#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1005B9479049BC5A;
class Class_2_6DE5FBED45BCAC88;
class Class_2_79AE422BA06F6D26_133;
namespace MoleMole { class UIActivityReturnPageController; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x175162C0)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175162E0)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17516420)
#define MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x175162D0)
#define MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17516560)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175165C0)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17516650)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowWidget_TypeDefinitionIndex = 57798;

	class BackFlowWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityReturnPageController* parentController; // 0x2B8
		::Class_2_79AE422BA06F6D26_133* _parentView_k__BackingField; // 0x2C0
		::Class_2_6DE5FBED45BCAC88* uiBackFlowModel; // 0x2C8
		::Class_1_1005B9479049BC5A* backFlowActivityData; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET))(this);
		}

		::Class_2_79AE422BA06F6D26_133* get_parentView()
		{
			return ((::Class_2_79AE422BA06F6D26_133*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET))(this);
		}

		::System::Void set_parentView(::Class_2_79AE422BA06F6D26_133* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET))(this, value);
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
