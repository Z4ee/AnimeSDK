#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace SRDebugger::UI::Other { class SRTab; }
namespace SRDebugger::UI::Other { class SRTabController; }
namespace System { class String; }

#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1ACE7E40)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x1ACE9300)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_MOVESCROLLCONTENT_OFFSET UNITYSDK_OFFSET(0x1ACE9660)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPENTAB_OFFSET UNITYSDK_OFFSET(0x1ACE8C80)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1ACEA180)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTNEXTTAB_OFFSET UNITYSDK_OFFSET(0x1ACE9740)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTPRETAB_OFFSET UNITYSDK_OFFSET(0x1ACE9DD0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x1ACE96F0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SHOWABOUTTAB_OFFSET UNITYSDK_OFFSET(0x1ACE92C0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1ACE7F10)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEA290)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__GETCURRENTSELECTTABINDEX_OFFSET UNITYSDK_OFFSET(0x1ACE9AF0)

namespace SRDebugger::Scripts
{
	inline static constexpr unsigned int DebuggerTabController_TypeDefinitionIndex = 35647;

	class DebuggerTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::SRDebugger::UI::Other::SRTab* _aboutTabInstance; // 0x48
		::System::Nullable_1<::SRDebugger::DefaultTabs> _activeTab; // 0x50
		::System::Boolean _hasStarted; // 0x58
		::SRDebugger::UI::Other::SRTab* AboutTab; // 0x60
		::SRDebugger::UI::Other::SRTabController* TabController; // 0x68
		::System::Boolean _ShouldSelect; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::SRDebugger::DefaultTabs> get_ActiveTab()
		{
			return ((::System::Nullable_1<::SRDebugger::DefaultTabs>(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_START_OFFSET))(this);
		}

		::System::Boolean OpenTab(::SRDebugger::DefaultTabs a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPENTAB_OFFSET))(this, a1);
		}

		::System::Void ShowAboutTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SHOWABOUTTAB_OFFSET))(this);
		}

		::System::Boolean IsTabShow(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_ISTABSHOW_OFFSET))(this, a1);
		}

		::System::Void MoveScrollContent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_MOVESCROLLCONTENT_OFFSET))(this, a1);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECT_OFFSET))(this);
		}

		::System::Void SelectNextTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTNEXTTAB_OFFSET))(this);
		}

		::System::Void SelectPreTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTPRETAB_OFFSET))(this);
		}

		::System::Int32 _GetCurrentSelectTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__GETCURRENTSELECTTABINDEX_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, a1);
		}
	};
}
