#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD9C750)
#define SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9C6C0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebugStrings_TypeDefinitionIndex = 37414;

	class SRDebugStrings : public ::System::Object
	{
	public:
		static ::SRDebugger::Internal::SRDebugStrings** StaticGet_Current()
		{
			return (::SRDebugger::Internal::SRDebugStrings**)Il2CppClass::FromTypeDefinitionIndex(SRDebugStrings_TypeDefinitionIndex)->GetStaticField(0x3EA80);
		}
		::System::String* Profiler_DisableProfilerInfo; // 0x10
		::System::String* Console_NoStackTrace; // 0x18
		::System::String* Console_MessageTruncated; // 0x20
		::System::String* PinEntryPrompt; // 0x28
		::System::String* Profiler_NoProInfo; // 0x30
		::System::String* Profiler_EnableProfilerInfo; // 0x38
		::System::String* Profiler_NotSupported; // 0x40
		::System::String* ProfilerCameraListenerHelp; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS__CCTOR_OFFSET))();
		}
	};
}
