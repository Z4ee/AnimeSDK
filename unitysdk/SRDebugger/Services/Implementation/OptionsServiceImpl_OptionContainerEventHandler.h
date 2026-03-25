#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class IOptionContainer; }
namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::Services::Implementation { class OptionsServiceImpl; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_CONTAINERONOPTIONADDED_OFFSET UNITYSDK_OFFSET(0x184401F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_CONTAINERONOPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x18440220)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18440050)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1843FB80)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int OptionsServiceImpl_OptionContainerEventHandler_TypeDefinitionIndex = 29729;

	class OptionsServiceImpl_OptionContainerEventHandler : public ::System::Object
	{
	public:
		::SRDebugger::Services::Implementation::OptionsServiceImpl* _service; // 0x10
		::SRDebugger::IOptionContainer* _container; // 0x18

		::System::Void _ctor(::SRDebugger::Services::Implementation::OptionsServiceImpl* service, ::SRDebugger::IOptionContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::Implementation::OptionsServiceImpl*, ::SRDebugger::IOptionContainer*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER__CTOR_OFFSET))(this, service, container);
		}

		::System::Void ContainerOnOptionAdded(::SRDebugger::OptionDefinition* obj)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_CONTAINERONOPTIONADDED_OFFSET))(this, obj);
		}

		::System::Void ContainerOnOptionRemoved(::SRDebugger::OptionDefinition* obj)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_CONTAINERONOPTIONREMOVED_OFFSET))(this, obj);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_OPTIONCONTAINEREVENTHANDLER_DISPOSE_OFFSET))(this);
		}
	};
}
