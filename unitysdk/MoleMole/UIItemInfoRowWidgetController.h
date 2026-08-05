#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_4ADB5C7E2C0580A8_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x17ADF410)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x17ADF530)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17ADF5F0)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17ADF700)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17ADF680)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17ADF3A0)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x17ADF800)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17ADFFB0)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE03F0)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AE0400)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17AE0490)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AE0530)
#define MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AE05C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemInfoRowWidgetController_TypeDefinitionIndex = 50510;

	class UIItemInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4ADB5C7E2C0580A8_1* _view; // 0x2F0
		::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 _rowInfo; // 0x2F8
		::System::Action_1<::System::Int32>* _onClick; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Int32 itemid, ::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid, title);
		}

		::System::Void RefreshView_1(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 rowInfo, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, rowInfo, onClick);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
