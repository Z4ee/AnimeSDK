#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Globalization/Unicode/CodePointIndexer_TableRange.h"
#include "unitysdk/System/Object.h"

#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET UNITYSDK_OFFSET(0x1BB4BDE0)
#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4BBB0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int CodePointIndexer_TypeDefinitionIndex = 29;

	class CodePointIndexer : public ::System::Object
	{
	public:
		::Il2CppArray<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>* ranges; // 0x10
		::System::Int32 defaultCP; // 0x18
		::System::Int32 defaultIndex; // 0x1C
		::System::Int32 TotalCount; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ToIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET))(this, a1);
		}
	};
}
