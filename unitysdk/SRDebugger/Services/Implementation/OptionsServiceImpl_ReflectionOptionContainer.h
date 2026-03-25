#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x18440250)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x18440270)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18440360)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18440300)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18440420)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GETOPTIONS_OFFSET UNITYSDK_OFFSET(0x184402D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x18440290)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x184402A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x18440260)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x18440280)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1843F810)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int OptionsServiceImpl_ReflectionOptionContainer_TypeDefinitionIndex = 29728;

	class OptionsServiceImpl_ReflectionOptionContainer : public ::System::Object
	{
	public:
		::System::Object* _target; // 0x10
		::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* _options; // 0x18

		::System::Void _ctor(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER__CTOR_OFFSET))(this, target);
		}

		::System::Void add_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET))(this, value);
		}

		::System::Void remove_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET))(this, value);
		}

		::System::Void add_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET))(this, value);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* get_Options()
		{
			return ((::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GET_OPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>* GetOptions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GETOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::SRDebugger::Services::Implementation::OptionsServiceImpl_ReflectionOptionContainer* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::Services::Implementation::OptionsServiceImpl_ReflectionOptionContainer*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_OPTIONSSERVICEIMPL_REFLECTIONOPTIONCONTAINER_GETHASHCODE_OFFSET))(this);
		}
	};
}
