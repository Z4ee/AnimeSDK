#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace SRDebugger::UI::Other { class SRTab; }
namespace SRDebugger::UI::Other { class SRTabController; }
namespace System { class String; }

#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x18436B70)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x18437D80)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_MOVESCROLLCONTENT_OFFSET UNITYSDK_OFFSET(0x184380E0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPENTAB_OFFSET UNITYSDK_OFFSET(0x18437830)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x18438930)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTNEXTTAB_OFFSET UNITYSDK_OFFSET(0x184381C0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECTPRETAB_OFFSET UNITYSDK_OFFSET(0x184386B0)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x18438170)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SHOWABOUTTAB_OFFSET UNITYSDK_OFFSET(0x18437D40)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x18436C40)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18438A50)
#define SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER__GETCURRENTSELECTTABINDEX_OFFSET UNITYSDK_OFFSET(0x18438450)

namespace SRDebugger::Scripts
{
	inline static constexpr unsigned int DebuggerTabController_TypeDefinitionIndex = 29627;

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

		::System::Boolean OpenTab(::SRDebugger::DefaultTabs tab)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPENTAB_OFFSET))(this, tab);
		}

		::System::Void ShowAboutTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_SHOWABOUTTAB_OFFSET))(this);
		}

		::System::Boolean IsTabShow(::System::String* tabName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_ISTABSHOW_OFFSET))(this, tabName);
		}

		::System::Void MoveScrollContent(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_MOVESCROLLCONTENT_OFFSET))(this, offset);
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

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SCRIPTS_DEBUGGERTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, type);
		}
	};
}
