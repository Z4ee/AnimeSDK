#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_499EDFA3518A0E64;
class Class_2_1A39E1B51756BF41;
class Class_2_94D5884806027679_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19370090)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19370BF0)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19370240)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193701C0)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_SETTRANSGRAY_OFFSET UNITYSDK_OFFSET(0x19370940)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19370CD0)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER__ONCREATEVIEW_B__2_0_OFFSET UNITYSDK_OFFSET(0x19370CE0)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19370CF0)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19370D80)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19370E10)
#define MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19370EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafeItemV2WidgetController_TypeDefinitionIndex = 63908;

	class UICafeItemV2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_94D5884806027679_1* _view; // 0x2F0
		::Il2CppArray<::Class_2_1A39E1B51756BF41*>* _controlImages; // 0x2F8
		::Class_1_499EDFA3518A0E64* cafeData; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetTransGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER_SETTRANSGRAY_OFFSET))(this, isGray);
		}

		::System::Void _OnCreateView_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER__ONCREATEVIEW_B__2_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEITEMV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
