#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::UI::Controls { class DataBoundControl; }

#define SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY___C__DISPLAYCLASS4_0__CREATEDATACONTROL_B__0_OFFSET UNITYSDK_OFFSET(0x1ACE53B0)
#define SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE52C0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int OptionControlFactory___c__DisplayClass4_0_TypeDefinitionIndex = 35770;

	class OptionControlFactory___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::SRDebugger::OptionDefinition* from; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateDataControl_b__0(::SRDebugger::UI::Controls::DataBoundControl* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::DataBoundControl*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_OPTIONCONTROLFACTORY___C__DISPLAYCLASS4_0__CREATEDATACONTROL_B__0_OFFSET))(this, a1);
		}
	};
}
