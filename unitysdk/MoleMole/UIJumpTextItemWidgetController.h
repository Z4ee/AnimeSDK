#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A862B1AB621733B6;
class Class_2_0096754AC2F6E253;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189B16C0)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189B14C0)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189B1750)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET UNITYSDK_OFFSET(0x189B1610)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189B17D0)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189B17E0)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189B1870)
#define MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189B1910)

namespace MoleMole
{
	inline static constexpr unsigned int UIJumpTextItemWidgetController_TypeDefinitionIndex = 40603;

	class UIJumpTextItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253* _view; // 0x2F0
		::Class_1_A862B1AB621733B6* _jumpAccessData; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetJumpAccessData(::Class_1_A862B1AB621733B6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A862B1AB621733B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET))(this, data);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPTEXTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
