#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class InfoEntry; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE___C__DISPLAYCLASS4_0__ADD_B__0_OFFSET UNITYSDK_OFFSET(0x1844B570)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1844A780)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int StandardSystemInformationService___c__DisplayClass4_0_TypeDefinitionIndex = 29737;

	class StandardSystemInformationService___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::SRDebugger::InfoEntry* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Add_b__0(::SRDebugger::InfoEntry* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::InfoEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE___C__DISPLAYCLASS4_0__ADD_B__0_OFFSET))(this, p);
		}
	};
}
