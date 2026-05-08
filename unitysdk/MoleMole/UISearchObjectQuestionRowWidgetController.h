#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_410E84DCFF746137_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISearchObjectQuestionRowWidgetControllerContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x14008240)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14008400)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14008510)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14008490)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14008090)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x14008570)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHSELECT_OFFSET UNITYSDK_OFFSET(0x140082A0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x14008870)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140088E0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x14008950)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14008960)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x140089F0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14008A90)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14008B20)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionRowWidgetController_TypeDefinitionIndex = 43904;

	class UISearchObjectQuestionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_410E84DCFF746137_1* _view; // 0x2E8
		::System::String* m_animNameSingleFadein; // 0x2F0
		::System::String* m_animNameSingleFadeout; // 0x2F8
		::System::String* m_animNameMultiFadein; // 0x300
		::System::String* m_animNameMultiFadeout; // 0x308
		::System::Boolean m_useSingleOrMultiple; // 0x310
		::System::Boolean m_isSelected; // 0x311
		::System::Action_2<::System::Int32, ::System::Boolean>* m_selectedChangeCallback; // 0x318
		::System::Int32 m_index; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void RefreshSelect(::System::Boolean selected, ::System::Boolean isInitOrChange, ::System::Boolean triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHSELECT_OFFSET))(this, selected, isInitOrChange, triggerCallback);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext(::MoleMole::UISearchObjectQuestionRowWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISearchObjectQuestionRowWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, ctx);
		}

		::System::Void SetInteractable(::System::Boolean isInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, isInteractable);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
