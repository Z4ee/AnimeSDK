#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::UI::Controls { class DataBoundControl; }
namespace SRDebugger::UI::Controls { class OptionsControlBase; }
namespace SRDebugger::UI::Controls::Data { class ActionControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATEACTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x18433BE0)
#define SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATECONTROL_OFFSET UNITYSDK_OFFSET(0x18433260)
#define SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATEDATACONTROL_OFFSET UNITYSDK_OFFSET(0x184337F0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int OptionControlFactory_TypeDefinitionIndex = 29749;

	class OptionControlFactory : public ::System::Object
	{
	public:
		static ::SRDebugger::UI::Controls::Data::ActionControl** StaticGet__actionControlPrefab()
		{
			return (::SRDebugger::UI::Controls::Data::ActionControl**)Il2CppClass::FromTypeDefinitionIndex(OptionControlFactory_TypeDefinitionIndex)->GetStaticField(0x32150);
		}
		static ::System::Collections::Generic::IList_1<::SRDebugger::UI::Controls::DataBoundControl*>** StaticGet__dataControlPrefabs()
		{
			return (::System::Collections::Generic::IList_1<::SRDebugger::UI::Controls::DataBoundControl*>**)Il2CppClass::FromTypeDefinitionIndex(OptionControlFactory_TypeDefinitionIndex)->GetStaticField(0x32158);
		}

		static ::SRDebugger::UI::Controls::OptionsControlBase* CreateControl(::SRDebugger::OptionDefinition* from, ::System::String* categoryPrefix)
		{
			return ((::SRDebugger::UI::Controls::OptionsControlBase*(*)(::SRDebugger::OptionDefinition*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATECONTROL_OFFSET))(from, categoryPrefix);
		}

		static ::SRDebugger::UI::Controls::Data::ActionControl* CreateActionControl(::SRDebugger::OptionDefinition* from, ::System::String* categoryPrefix)
		{
			return ((::SRDebugger::UI::Controls::Data::ActionControl*(*)(::SRDebugger::OptionDefinition*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATEACTIONCONTROL_OFFSET))(from, categoryPrefix);
		}

		static ::SRDebugger::UI::Controls::DataBoundControl* CreateDataControl(::SRDebugger::OptionDefinition* from, ::System::String* categoryPrefix)
		{
			return ((::SRDebugger::UI::Controls::DataBoundControl*(*)(::SRDebugger::OptionDefinition*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY_CREATEDATACONTROL_OFFSET))(from, categoryPrefix);
		}
	};
}
