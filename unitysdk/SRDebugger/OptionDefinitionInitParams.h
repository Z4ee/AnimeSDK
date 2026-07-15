#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRDEBUGGER_OPTIONDEFINITIONINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F3DF0)

namespace SRDebugger
{
	inline static constexpr unsigned int OptionDefinitionInitParams_TypeDefinitionIndex = 36402;

	class OptionDefinitionInitParams : public ::System::Object
	{
	public:
		::System::String* Category; // 0x10
		::System::String* Name; // 0x18
		::System::String* TargetTab; // 0x20
		::System::Int32 SortPriority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITIONINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
