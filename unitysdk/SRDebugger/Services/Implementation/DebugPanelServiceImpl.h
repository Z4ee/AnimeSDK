#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/CursorLockMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::UI { class DebugPanelRoot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_ADD_VISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1843B480)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1843BBE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1843BA30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISINCONTROLMODE_OFFSET UNITYSDK_OFFSET(0x1843BDA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1843B550)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1843B570)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x1843B540)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x1843B6F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_MOVESCROLLCONTENT_OFFSET UNITYSDK_OFFSET(0x1843BC20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPENTAB_OFFSET UNITYSDK_OFFSET(0x1843BA70)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1843BD20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_REMOVE_VISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1843B4E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTNEXTTAB_OFFSET UNITYSDK_OFFSET(0x1843BCC0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTPRETAB_OFFSET UNITYSDK_OFFSET(0x1843BCF0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISINCONTROLMODE_OFFSET UNITYSDK_OFFSET(0x1843BDB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1843B590)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SRDEBUGGER_SERVICES_IDEBUGPANELSERVICE_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x1843BD60)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1843BB30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1843BDC0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugPanelServiceImpl_TypeDefinitionIndex = 29722;

	class DebugPanelServiceImpl : public ::UnityEngine::ScriptableObject
	{
	public:
		::SRDebugger::UI::DebugPanelRoot* _debugPanelRootObject; // 0x18
		::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>* VisibilityChanged; // 0x20
		::System::Boolean _isVisible; // 0x28
		::System::Nullable_1<::System::Boolean> _cursorWasVisible; // 0x29
		::System::Nullable_1<::UnityEngine::CursorLockMode> _cursorLockMode; // 0x2C
		::System::Boolean _IsInControlMode_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Void add_VisibilityChanged(::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_ADD_VISIBILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_VisibilityChanged(::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_REMOVE_VISIBILITYCHANGED_OFFSET))(this, value);
		}

		::SRDebugger::UI::DebugPanelRoot* get_RootObject()
		{
			return ((::SRDebugger::UI::DebugPanelRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ROOTOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Nullable_1<::SRDebugger::DefaultTabs> get_ActiveTab()
		{
			return ((::System::Nullable_1<::SRDebugger::DefaultTabs>(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void OpenTab(::SRDebugger::DefaultTabs tab)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPENTAB_OFFSET))(this, tab);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_UNLOAD_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_DISPOSE_OFFSET))(this);
		}

		::System::Void MoveScrollContent(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_MOVESCROLLCONTENT_OFFSET))(this, offset);
		}

		::System::Void SelectNextTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTNEXTTAB_OFFSET))(this);
		}

		::System::Void SelectPreTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTPRETAB_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPTIONCONTROL_OFFSET))(this, type);
		}

		::System::Boolean SRDebugger_Services_IDebugPanelService_IsTabShow(::System::String* tabName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SRDEBUGGER_SERVICES_IDEBUGPANELSERVICE_ISTABSHOW_OFFSET))(this, tabName);
		}

		::System::Boolean get_IsInControlMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISINCONTROLMODE_OFFSET))(this);
		}

		::System::Void set_IsInControlMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISINCONTROLMODE_OFFSET))(this, value);
		}
	};
}
