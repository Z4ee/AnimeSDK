#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SRDebugger::UI::Controls { class SRTabButton; }
namespace SRDebugger::UI::Other { class SRTab; }
namespace SRF { template <typename T> class SRList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADDTAB_OFFSET UNITYSDK_OFFSET(0x19E72250)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADD_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x19E92BE0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x19E96B00)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_TABS_OFFSET UNITYSDK_OFFSET(0x19E72A40)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x19E72B30)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_MAKEACTIVE_OFFSET UNITYSDK_OFFSET(0x19E96B10)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x19E736E0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_REMOVE_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x19E92E60)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x19E72AA0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x19E72A90)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SORTTABS_OFFSET UNITYSDK_OFFSET(0x19E96E00)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__ADJUSTTABPOSITION_OFFSET UNITYSDK_OFFSET(0x19E96650)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E97040)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E96FE0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTabController_TypeDefinitionIndex = 35378;

	class SRTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SRTabController_TypeDefinitionIndex)->GetStaticField(0x694F0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SRTabController_TypeDefinitionIndex)->GetStaticField(0x694F8);
		}
		::SRF::SRList_1<::SRDebugger::UI::Other::SRTab*>* _tabs; // 0x48
		::SRDebugger::UI::Other::SRTab* _activeTab; // 0x50
		::UnityEngine::RectTransform* TabButtonContainer; // 0x58
		::SRDebugger::UI::Controls::SRTabButton* TabButtonPrefab; // 0x60
		::UnityEngine::RectTransform* TabContentsContainer; // 0x68
		::UnityEngine::RectTransform* TabHeaderContentContainer; // 0x70
		::UnityEngine::UI::Text* TabHeaderText; // 0x78
		::UnityEngine::RectTransform* TabViewPortRectTransform; // 0x80
		::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>* ActiveTabChanged; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SELECT_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, type);
		}

		::SRDebugger::UI::Other::SRTab* get_ActiveTab()
		{
			return ((::SRDebugger::UI::Other::SRTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void set_ActiveTab(::SRDebugger::UI::Other::SRTab* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SET_ACTIVETAB_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::UI::Other::SRTab*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::UI::Other::SRTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_TABS_OFFSET))(this);
		}

		::System::Void add_ActiveTabChanged(::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADD_ACTIVETABCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ActiveTabChanged(::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_REMOVE_ACTIVETABCHANGED_OFFSET))(this, value);
		}

		::System::Void AddTab(::SRDebugger::UI::Other::SRTab* tab, ::System::Boolean visibleInSidebar)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADDTAB_OFFSET))(this, tab, visibleInSidebar);
		}

		::System::Boolean IsTabShow(::System::String* tabName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ISTABSHOW_OFFSET))(this, tabName);
		}

		::System::Void MakeActive(::SRDebugger::UI::Other::SRTab* tab)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_MAKEACTIVE_OFFSET))(this, tab);
		}

		::System::Void SortTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SORTTABS_OFFSET))(this);
		}

		::System::Void _AdjustTabPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__ADJUSTTABPOSITION_OFFSET))(this);
		}
	};
}
