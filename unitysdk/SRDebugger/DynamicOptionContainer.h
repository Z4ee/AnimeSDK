#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADDOPTION_OFFSET UNITYSDK_OFFSET(0x19E6BE80)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x19E6BF70)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x19E6C030)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x19E6BF60)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19E6BE20)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVEOPTION_OFFSET UNITYSDK_OFFSET(0x19E6BED0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x19E6BFD0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x19E6C090)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_SRDEBUGGER_IOPTIONCONTAINER_GETOPTIONS_OFFSET UNITYSDK_OFFSET(0x19E6BF50)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6BE30)

namespace SRDebugger
{
	inline static constexpr unsigned int DynamicOptionContainer_TypeDefinitionIndex = 35316;

	class DynamicOptionContainer : public ::System::Object
	{
	public:
		::System::Action_1<::SRDebugger::OptionDefinition*>* OptionRemoved; // 0x10
		::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* _options; // 0x18
		::System::Action_1<::SRDebugger::OptionDefinition*>* OptionAdded; // 0x20
		::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>* _optionsReadOnly; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>* get_Options()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void AddOption(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADDOPTION_OFFSET))(this, option);
		}

		::System::Boolean RemoveOption(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVEOPTION_OFFSET))(this, option);
		}

		::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>* SRDebugger_IOptionContainer_GetOptions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_SRDEBUGGER_IOPTIONCONTAINER_GETOPTIONS_OFFSET))(this);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void add_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET))(this, value);
		}

		::System::Void remove_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET))(this, value);
		}

		::System::Void add_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET))(this, value);
		}
	};
}
