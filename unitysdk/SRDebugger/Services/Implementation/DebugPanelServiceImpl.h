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

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_ADD_VISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDA3B40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDA4370)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1BDA41C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISINCONTROLMODE_OFFSET UNITYSDK_OFFSET(0x1BDA4540)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1BDA3C10)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDA3C30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDA3C00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x1BDA3DB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_MOVESCROLLCONTENT_OFFSET UNITYSDK_OFFSET(0x1BDA43B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPENTAB_OFFSET UNITYSDK_OFFSET(0x1BDA4200)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1BDA44B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_REMOVE_VISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDA3BA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTNEXTTAB_OFFSET UNITYSDK_OFFSET(0x1BDA4450)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTPRETAB_OFFSET UNITYSDK_OFFSET(0x1BDA4480)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISINCONTROLMODE_OFFSET UNITYSDK_OFFSET(0x1BDA4550)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDA3C50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SRDEBUGGER_SERVICES_IDEBUGPANELSERVICE_ISTABSHOW_OFFSET UNITYSDK_OFFSET(0x1BDA4500)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BDA42C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA4560)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugPanelServiceImpl_TypeDefinitionIndex = 37383;

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

		::System::Void add_VisibilityChanged(::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_ADD_VISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_VisibilityChanged(::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::Services::IDebugPanelService*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_REMOVE_VISIBILITYCHANGED_OFFSET))(this, a1);
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

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::SRDebugger::DefaultTabs> get_ActiveTab()
		{
			return ((::System::Nullable_1<::SRDebugger::DefaultTabs>(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void OpenTab(::SRDebugger::DefaultTabs a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPENTAB_OFFSET))(this, a1);
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

		::System::Void MoveScrollContent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_MOVESCROLLCONTENT_OFFSET))(this, a1);
		}

		::System::Void SelectNextTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTNEXTTAB_OFFSET))(this);
		}

		::System::Void SelectPreTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SELECTPRETAB_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_OPTIONCONTROL_OFFSET))(this, a1);
		}

		::System::Boolean SRDebugger_Services_IDebugPanelService_IsTabShow(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SRDEBUGGER_SERVICES_IDEBUGPANELSERVICE_ISTABSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInControlMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_GET_ISINCONTROLMODE_OFFSET))(this);
		}

		::System::Void set_IsInControlMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGPANELSERVICEIMPL_SET_ISINCONTROLMODE_OFFSET))(this, a1);
		}
	};
}
