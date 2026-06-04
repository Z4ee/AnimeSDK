#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_BUGREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEA2A0)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int BugReport_TypeDefinitionIndex = 35716;

	class BugReport : public ::System::Object
	{
	public:
		::System::String* UserDescription; // 0x10
		::System::Collections::Generic::List_1<::SRDebugger::Services::ConsoleEntry*>* ConsoleLog; // 0x18
		::Il2CppArray<::System::Byte>* ScreenshotData; // 0x20
		::System::String* Email; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* SystemInformation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORT__CTOR_OFFSET))(this);
		}
	};
}
