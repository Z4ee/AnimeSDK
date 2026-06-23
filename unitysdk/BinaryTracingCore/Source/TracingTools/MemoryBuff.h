#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class MemoryStream; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1E22C1D0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF_RESET_OFFSET UNITYSDK_OFFSET(0x1E22EB20)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22EB90)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int MemoryBuff_TypeDefinitionIndex = 33943;

	class MemoryBuff : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* stream; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBuffer(::System::Int32 capacity)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF_GETBUFFER_OFFSET))(this, capacity);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_MEMORYBUFF_RESET_OFFSET))(this);
		}
	};
}
