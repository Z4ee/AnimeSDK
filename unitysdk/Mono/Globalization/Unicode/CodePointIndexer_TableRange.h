#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TABLERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x38F0400)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int CodePointIndexer_TableRange_TypeDefinitionIndex = 30;

	struct alignas(4) CodePointIndexer_TableRange
	{
		::System::Int32 Start; // 0x10
		::System::Int32 End; // 0x14
		::System::Int32 Count; // 0x18
		::System::Int32 IndexStart; // 0x1C
		::System::Int32 IndexEnd; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TABLERANGE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
