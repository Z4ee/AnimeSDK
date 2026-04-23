#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class IOptionContainer; }
namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::Services::Implementation { class OptionsServiceImpl_OptionContainerEventHandler; }
namespace System { class EventHandler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADDCONTAINER_1_OFFSET UNITYSDK_OFFSET(0x19E7A5B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADDCONTAINER_OFFSET UNITYSDK_OFFSET(0x19E7A550)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADD_OPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x19E79DE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19E79EA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ONOPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x19E7A100)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONSCONTAINERONOPTIONADDED_OFFSET UNITYSDK_OFFSET(0x19E79EB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONSCONTAINERONOPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x19E7A150)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVECONTAINER_1_OFFSET UNITYSDK_OFFSET(0x19E7AB00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVECONTAINER_OFFSET UNITYSDK_OFFSET(0x19E7AAB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVE_OPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x19E79E40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_SCAN_OFFSET UNITYSDK_OFFSET(0x19E7A500)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7A3C0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int OptionsServiceImpl_TypeDefinitionIndex = 35447;

	class OptionsServiceImpl : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::SRDebugger::IOptionContainer*, ::SRDebugger::Services::Implementation::OptionsServiceImpl_OptionContainerEventHandler*>* _optionContainerEventHandlerLookup; // 0x10
		::System::EventHandler* OptionsUpdated; // 0x18
		::System::Collections::Generic::Dictionary_2<::SRDebugger::IOptionContainer*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*>* _optionContainerLookup; // 0x20
		::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* _options; // 0x28
		::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>* _optionsReadonly; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Void add_OptionsUpdated(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADD_OPTIONSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OptionsUpdated(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVE_OPTIONSUPDATED_OFFSET))(this, value);
		}

		::System::Collections::Generic::ICollection_1<::SRDebugger::OptionDefinition*>* get_Options()
		{
			return ((::System::Collections::Generic::ICollection_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void OptionsContainerOnOptionAdded(::SRDebugger::IOptionContainer* container, ::SRDebugger::OptionDefinition* optionDefinition)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::IOptionContainer*, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONSCONTAINERONOPTIONADDED_OFFSET))(this, container, optionDefinition);
		}

		::System::Void OptionsContainerOnOptionRemoved(::SRDebugger::IOptionContainer* container, ::SRDebugger::OptionDefinition* optionDefinition)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::IOptionContainer*, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONSCONTAINERONOPTIONREMOVED_OFFSET))(this, container, optionDefinition);
		}

		::System::Void Scan(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_SCAN_OFFSET))(this, obj);
		}

		::System::Void AddContainer(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADDCONTAINER_OFFSET))(this, obj);
		}

		::System::Void AddContainer_1(::SRDebugger::IOptionContainer* optionContainer)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::IOptionContainer*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ADDCONTAINER_1_OFFSET))(this, optionContainer);
		}

		::System::Void RemoveContainer(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVECONTAINER_OFFSET))(this, obj);
		}

		::System::Void RemoveContainer_1(::SRDebugger::IOptionContainer* optionContainer)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::IOptionContainer*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REMOVECONTAINER_1_OFFSET))(this, optionContainer);
		}

		::System::Void OnOptionsUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_ONOPTIONSUPDATED_OFFSET))(this);
		}
	};
}
