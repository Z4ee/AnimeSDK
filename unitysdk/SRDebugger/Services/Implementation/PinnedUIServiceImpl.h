#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::Services { class IPinnedUIService; }
namespace SRDebugger::UI::Controls { class OptionsControlBase; }
namespace SRDebugger::UI::Other { class DockConsoleController; }
namespace SRDebugger::UI::Other { class PinnedUIRoot; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ADD_OPTIONPINSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E680B20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ADD_OPTIONSCANVASCREATED_OFFSET UNITYSDK_OFFSET(0x1E680BE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E6813C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_GET_DOCKCONSOLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1E67C620)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_GET_ISPROFILERPINNED_OFFSET UNITYSDK_OFFSET(0x1E680CA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_HASPINNED_OFFSET UNITYSDK_OFFSET(0x1E681340)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6815F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x1E6804B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONDEBUGPANELVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E682750)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E681500)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONOPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x1E682410)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONPINNEDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E680FA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_PIN_OFFSET UNITYSDK_OFFSET(0x1E680D40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E682300)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REMOVE_OPTIONPINSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E680B80)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REMOVE_OPTIONSCANVASCREATED_OFFSET UNITYSDK_OFFSET(0x1E680C40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_SET_ISPROFILERPINNED_OFFSET UNITYSDK_OFFSET(0x1E680CE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UNPINALL_OFFSET UNITYSDK_OFFSET(0x1E681180)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UNPIN_OFFSET UNITYSDK_OFFSET(0x1E680FC0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UPDATEANCHORS_OFFSET UNITYSDK_OFFSET(0x1E681960)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6822F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E682760)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL__ONRPGAPPRESTART_OFFSET UNITYSDK_OFFSET(0x1E6815E0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int PinnedUIServiceImpl_TypeDefinitionIndex = 37392;

	class PinnedUIServiceImpl : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IPinnedUIService*>
	{
	public:
		::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>* _controlList; // 0x48
		::System::Collections::Generic::Dictionary_2<::SRDebugger::OptionDefinition*, ::SRDebugger::UI::Controls::OptionsControlBase*>* _pinnedObjects; // 0x50
		::System::Boolean _queueRefresh; // 0x58
		::SRDebugger::UI::Other::PinnedUIRoot* _uiRoot; // 0x60
		::System::Action_2<::SRDebugger::OptionDefinition*, ::System::Boolean>* OptionPinStateChanged; // 0x68
		::System::Action_1<::UnityEngine::RectTransform*>* OptionsCanvasCreated; // 0x70
		::System::Boolean _NeedReload; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL__CTOR_OFFSET))(this);
		}

		::SRDebugger::UI::Other::DockConsoleController* get_DockConsoleController()
		{
			return ((::SRDebugger::UI::Other::DockConsoleController*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_GET_DOCKCONSOLECONTROLLER_OFFSET))(this);
		}

		::System::Void add_OptionPinStateChanged(::System::Action_2<::SRDebugger::OptionDefinition*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::OptionDefinition*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ADD_OPTIONPINSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionPinStateChanged(::System::Action_2<::SRDebugger::OptionDefinition*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::SRDebugger::OptionDefinition*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REMOVE_OPTIONPINSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OptionsCanvasCreated(::System::Action_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ADD_OPTIONSCANVASCREATED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionsCanvasCreated(::System::Action_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REMOVE_OPTIONSCANVASCREATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProfilerPinned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_GET_ISPROFILERPINNED_OFFSET))(this);
		}

		::System::Void set_IsProfilerPinned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_SET_ISPROFILERPINNED_OFFSET))(this, a1);
		}

		::System::Void Pin(::SRDebugger::OptionDefinition* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_PIN_OFFSET))(this, a1, a2);
		}

		::System::Void Unpin(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UNPIN_OFFSET))(this, a1);
		}

		::System::Void OnPinnedStateChanged(::SRDebugger::OptionDefinition* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONPINNEDSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void UnpinAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UNPINALL_OFFSET))(this);
		}

		::System::Boolean HasPinned(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_HASPINNED_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnRPGAppRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL__ONRPGAPPRESTART_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void UpdateAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UPDATEANCHORS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_UPDATE_OFFSET))(this);
		}

		::System::Void OnOptionsUpdated(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONOPTIONSUPDATED_OFFSET))(this, a1, a2);
		}

		::System::Void OnDebugPanelVisibilityChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_ONDEBUGPANELVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINNEDUISERVICEIMPL_REFRESH_OFFSET))(this);
		}
	};
}
