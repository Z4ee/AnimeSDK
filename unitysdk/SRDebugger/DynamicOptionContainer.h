#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADDOPTION_OFFSET UNITYSDK_OFFSET(0x1BD98690)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x1BD987B0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x1BD98870)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1BD987A0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1BD985C0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVEOPTION_OFFSET UNITYSDK_OFFSET(0x1BD98740)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET UNITYSDK_OFFSET(0x1BD98810)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET UNITYSDK_OFFSET(0x1BD988D0)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER_SRDEBUGGER_IOPTIONCONTAINER_GETOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BD98790)
#define SRDEBUGGER_DYNAMICOPTIONCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD985D0)

namespace SRDebugger
{
	inline static constexpr unsigned int DynamicOptionContainer_TypeDefinitionIndex = 37257;

	class DynamicOptionContainer : public ::System::Object
	{
	public:
		::System::Action_1<::SRDebugger::OptionDefinition*>* OptionRemoved; // 0x10
		::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>* _optionsReadOnly; // 0x18
		::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* _options; // 0x20
		::System::Action_1<::SRDebugger::OptionDefinition*>* OptionAdded; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>* get_Options()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void AddOption(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADDOPTION_OFFSET))(this, a1);
		}

		::System::Boolean RemoveOption(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVEOPTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>* SRDebugger_IOptionContainer_GetOptions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SRDebugger::OptionDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_SRDEBUGGER_IOPTIONCONTAINER_GETOPTIONS_OFFSET))(this);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void add_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionAdded(::System::Action_1<::SRDebugger::OptionDefinition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONADDED_OFFSET))(this, a1);
		}

		::System::Void add_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_ADD_OPTIONREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionRemoved(::System::Action_1<::SRDebugger::OptionDefinition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DYNAMICOPTIONCONTAINER_REMOVE_OPTIONREMOVED_OFFSET))(this, a1);
		}
	};
}
