#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/ValueType.h"

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x908760)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_Context_TypeDefinitionIndex = 43;

	struct alignas(8) SimpleCollator_Context
	{
		::System::Globalization::CompareOptions Option; // 0x10
		::System::Byte* NeverMatchFlags; // 0x18
		::System::Byte* AlwaysMatchFlags; // 0x20
		::System::Byte* Buffer1; // 0x28
		::System::Byte* Buffer2; // 0x30
		::System::Int32 PrevCode; // 0x38
		::System::Byte* PrevSortKey; // 0x40

		::System::Void _ctor(::System::Globalization::CompareOptions opt, ::System::Byte* alwaysMatchFlags, ::System::Byte* neverMatchFlags, ::System::Byte* buffer1, ::System::Byte* buffer2, ::System::Byte* prev1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CompareOptions, ::System::Byte*, ::System::Byte*, ::System::Byte*, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT__CTOR_OFFSET))(this, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
		}
	};
}
