#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_9532C712260DD3D3;
class Class_2_407C0CCB827E7EB7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET UNITYSDK_OFFSET(0x197DE690)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197DE480)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONGETREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x197DEBD0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x197DE8A0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197DE810)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197DE7B0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x197DE9A0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197DF090)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197DF0A0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x197DF130)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197DF1D0)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197DF260)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueRewardRowWidgetController_TypeDefinitionIndex = 42382;

	class UIAntiqueRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_407C0CCB827E7EB7* _view; // 0x2F0
		::Class_1_9532C712260DD3D3* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIItemIconBtnSmallWidgetController* AddItemIconBtnSmallWidget(::Enum_3_DBF2701137F18AA6 ctrl, ::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::UIItemIconBtnSmallWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET))(this, ctrl, arg);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void OnGetRewardButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER_ONGETREWARDBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
