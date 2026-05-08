#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Globalization/Unicode/CodePointIndexer_TableRange.h"
#include "unitysdk/System/Object.h"

#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET UNITYSDK_OFFSET(0x1A58F610)
#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58F380)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int CodePointIndexer_TypeDefinitionIndex = 32;

	class CodePointIndexer : public ::System::Object
	{
	public:
		::Il2CppArray<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>* ranges; // 0x10
		::System::Int32 defaultIndex; // 0x18
		::System::Int32 TotalCount; // 0x1C
		::System::Int32 defaultCP; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Int32>* starts, ::Il2CppArray<::System::Int32>* ends, ::System::Int32 defaultIndex, ::System::Int32 defaultCP)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER__CTOR_OFFSET))(this, starts, ends, defaultIndex, defaultCP);
		}

		::System::Int32 ToIndex(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET))(this, cp);
		}
	};
}
