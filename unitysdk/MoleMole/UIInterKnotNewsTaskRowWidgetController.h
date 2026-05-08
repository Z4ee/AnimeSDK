#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_095D4AB304C961E9;
class Class_2_D8FA64B343C57184;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B7A960)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14B7A9F0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B7B270)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B7A900)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHQUESTDESC_OFFSET UNITYSDK_OFFSET(0x14B7B2F0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHRELATEDITEMBUTTON_OFFSET UNITYSDK_OFFSET(0x14B7B7B0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14B7AB10)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7BB20)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B7BBA0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14B7BC30)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B7BCD0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B7BD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsTaskRowWidgetController_TypeDefinitionIndex = 68172;

	class UIInterKnotNewsTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D8FA64B343C57184* _view; // 0x2E8
		::Class_1_095D4AB304C961E9* _conditionHandler; // 0x2F0

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
