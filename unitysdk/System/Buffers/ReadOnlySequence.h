#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x1ADC7200)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x1ADC71F0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x1ADC7220)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x1ADC7210)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x1ADC71E0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x1ADC71D0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x1ADC7240)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x1ADC7230)

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_TypeDefinitionIndex = 4977;

	class ReadOnlySequence : public ::System::Object
	{
	public:
		static ::System::Int32 SegmentToSequenceStart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET))(a1);
		}

		static ::System::Int32 SegmentToSequenceEnd(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET))(a1);
		}

		static ::System::Int32 ArrayToSequenceStart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET))(a1);
		}

		static ::System::Int32 ArrayToSequenceEnd(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET))(a1);
		}

		static ::System::Int32 MemoryManagerToSequenceStart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET))(a1);
		}

		static ::System::Int32 MemoryManagerToSequenceEnd(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET))(a1);
		}

		static ::System::Int32 StringToSequenceStart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET))(a1);
		}

		static ::System::Int32 StringToSequenceEnd(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET))(a1);
		}
	};
}
