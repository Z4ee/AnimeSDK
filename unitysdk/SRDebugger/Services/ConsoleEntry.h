#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_MESSAGEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1ACEA5A0)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_STACKTRACEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1ACEA660)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1ACEA590)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY_MATCHES_OFFSET UNITYSDK_OFFSET(0x1ACEA8F0)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY_SET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1ACEA540)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACEA980)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACEA490)
#define SRDEBUGGER_SERVICES_CONSOLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEA480)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int ConsoleEntry_TypeDefinitionIndex = 35722;

	class ConsoleEntry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__stackTracePreviewMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleEntry_TypeDefinitionIndex)->GetStaticField(0x63930);
		}
		// static const ::System::Int32 MessagePreviewLength = 0xB4; // 0x0
		// static const ::System::Int32 StackTracePreviewLength = 0x78; // 0x0
		::System::String* _stackTracePreview; // 0x10
		::System::String* Message; // 0x18
		::System::String* _stackTrace; // 0x20
		::System::String* _messagePreview; // 0x28
		::UnityEngine::LogType LogType; // 0x30
		::System::Int32 Count; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY__CCTOR_OFFSET))();
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_STACKTRACE_OFFSET))(this);
		}

		::System::Void set_StackTrace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY_SET_STACKTRACE_OFFSET))(this, a1);
		}

		::System::String* get_MessagePreview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_MESSAGEPREVIEW_OFFSET))(this);
		}

		::System::String* get_StackTracePreview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY_GET_STACKTRACEPREVIEW_OFFSET))(this);
		}

		::System::Boolean Matches(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEENTRY_MATCHES_OFFSET))(this, a1);
		}
	};
}
