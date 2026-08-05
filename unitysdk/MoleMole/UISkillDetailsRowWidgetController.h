#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_1_3E87D0E270DB206F_1;
class Class_2_79F6D62CE30E3F8E_85;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18471D20)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18471E30)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18471DB0)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18471C10)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_REFRESHSKILLVIEW_OFFSET UNITYSDK_OFFSET(0x18471EF0)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18472630)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184726C0)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18472750)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184727F0)
#define MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18472880)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillDetailsRowWidgetController_TypeDefinitionIndex = 87736;

	class UISkillDetailsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_85* _view; // 0x2F0
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* showList; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshSkillView(::Class_1_3E87D0E270DB206F_1* detailData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E87D0E270DB206F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER_REFRESHSKILLVIEW_OFFSET))(this, detailData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLDETAILSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
