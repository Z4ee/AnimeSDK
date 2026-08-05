#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A03C9A14CD8D41B5;
class Class_2_E94342497D57B7EB;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONCLICKGOTO_OFFSET UNITYSDK_OFFSET(0x1709E800)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1709DE80)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1709E040)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1709DFB0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x1709E0F0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1709E9D0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1709E9E0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1709EA70)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1709EB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventRowWidgetController_TypeDefinitionIndex = 45924;

	class UIBangbooMicroWebEventRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_E94342497D57B7EB* _view; // 0x2F0
		::Class_1_A03C9A14CD8D41B5* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void OnClickGoTo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER_ONCLICKGOTO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
