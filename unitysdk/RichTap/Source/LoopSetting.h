#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RICHTAP_SOURCE_LOOPSETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A2F40)

namespace RichTap::Source
{
	inline static constexpr unsigned int LoopSetting_TypeDefinitionIndex = 36479;

	struct alignas(4) LoopSetting
	{
		::System::Boolean LoopEnabled; // 0x10
		::System::Boolean InfinityLoop; // 0x11
		::System::Int32 LoopCount; // 0x14
		::System::Int32 LoopInterval; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_LOOPSETTING_TOSTRING_OFFSET))(this);
		}
	};
}
