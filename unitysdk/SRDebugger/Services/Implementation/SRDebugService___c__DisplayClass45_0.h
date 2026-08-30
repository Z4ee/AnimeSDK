#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class ActionCompleteCallback; }
namespace System { class String; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E685120)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___C__DISPLAYCLASS45_0__SHOWBUGREPORTSHEET_B__0_OFFSET UNITYSDK_OFFSET(0x1E685610)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int SRDebugService___c__DisplayClass45_0_TypeDefinitionIndex = 37394;

	class SRDebugService___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::SRDebugger::ActionCompleteCallback* onComplete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBugReportSheet_b__0(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___C__DISPLAYCLASS45_0__SHOWBUGREPORTSHEET_B__0_OFFSET))(this, a1, a2);
		}
	};
}
