#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_31D4194306BE7FD4;
class Class_2_D8FA64B343C57184;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182C5A70)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x182C5B00)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182C6390)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182C5A10)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHQUESTDESC_OFFSET UNITYSDK_OFFSET(0x182C6410)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHRELATEDITEMBUTTON_OFFSET UNITYSDK_OFFSET(0x182C68D0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x182C5C20)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182C6C40)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182C6CC0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x182C6D50)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182C6DF0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182C6E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsTaskRowWidgetController_TypeDefinitionIndex = 83667;

	class UIInterKnotNewsTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D8FA64B343C57184* _view; // 0x2F0
		::Class_1_31D4194306BE7FD4* _conditionHandler; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 questId, ::System::Int32 index, ::System::String* replaceQuestDes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questId, index, replaceQuestDes);
		}

		::System::Void RefreshQuestDesc(::System::Int32 questId, ::System::String* replaceQuestDes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHQUESTDESC_OFFSET))(this, questId, replaceQuestDes);
		}

		::System::Void RefreshRelatedItemButton(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHRELATEDITEMBUTTON_OFFSET))(this, questID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
