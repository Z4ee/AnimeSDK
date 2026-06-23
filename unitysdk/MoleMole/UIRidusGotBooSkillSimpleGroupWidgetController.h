#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_E4EFD54D633BB1EB;
class Class_2_5B9F677DE471C1A7_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRidusGotBooSkillSimpleWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182324A0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x182325B0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18232530)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18232440)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18232C30)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18232C40)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18232CD0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18232D70)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18232E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillSimpleGroupWidgetController_TypeDefinitionIndex = 74873;

	class UIRidusGotBooSkillSimpleGroupWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_5B9F677DE471C1A7_1* _view; // 0x2F0
		::Class_1_E4EFD54D633BB1EB* m_skillInfo; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIRidusGotBooSkillSimpleWidgetController*>* m_skills; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
