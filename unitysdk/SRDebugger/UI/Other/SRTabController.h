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

#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADDTAB_OFFSET UNITYSDK_OFFSET(0x1ACE8880)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADD_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x1AD08840)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1AD0C7F0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_TABS_OFFSET UNITYSDK_OFFSET(0x1ACE91B0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x1ACE9320)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_MAKEACTIVE_OFFSET UNITYSDK_OFFSET(0x1AD0C800)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1ACEA1A0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_REMOVE_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x1AD08AD0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x1ACE9290)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1ACE9280)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SORTTABS_OFFSET UNITYSDK_OFFSET(0x1AD0CAF0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__ADJUSTTABPOSITION_OFFSET UNITYSDK_OFFSET(0x1AD0C3A0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD0CD60)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0CD00)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTabController_TypeDefinitionIndex = 35678;

	class SRTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SRTabController_TypeDefinitionIndex)->GetStaticField(0x64040);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SRTabController_TypeDefinitionIndex)->GetStaticField(0x64048);
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

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, a1);
		}

		::SRDebugger::UI::Other::SRTab* get_ActiveTab()
		{
			return ((::SRDebugger::UI::Other::SRTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void set_ActiveTab(::SRDebugger::UI::Other::SRTab* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_SET_ACTIVETAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::UI::Other::SRTab*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::UI::Other::SRTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_GET_TABS_OFFSET))(this);
		}

		::System::Void add_ActiveTabChanged(::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADD_ACTIVETABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ActiveTabChanged(::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_REMOVE_ACTIVETABCHANGED_OFFSET))(this, a1);
		}

		::System::Void AddTab(::SRDebugger::UI::Other::SRTab* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ADDTAB_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTabShow(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_ISTABSHOW_OFFSET))(this, a1);
		}

		::System::Void MakeActive(::SRDebugger::UI::Other::SRTab* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER_MAKEACTIVE_OFFSET))(this, a1);
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
