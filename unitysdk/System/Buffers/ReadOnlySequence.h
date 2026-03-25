#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x18517670)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x18517660)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x18517690)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x18517680)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x18517650)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x18517640)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x185176B0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x185176A0)

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_TypeDefinitionIndex = 4995;

	class ReadOnlySequence : public ::System::Object
	{
	public:
		static ::System::Int32 SegmentToSequenceStart(::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET))(startIndex);
		}

		static ::System::Int32 SegmentToSequenceEnd(::System::Int32 endIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET))(endIndex);
		}

		static ::System::Int32 ArrayToSequenceStart(::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET))(startIndex);
		}

		static ::System::Int32 ArrayToSequenceEnd(::System::Int32 endIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET))(endIndex);
		}

		static ::System::Int32 MemoryManagerToSequenceStart(::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET))(startIndex);
		}

		static ::System::Int32 MemoryManagerToSequenceEnd(::System::Int32 endIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET))(endIndex);
		}

		static ::System::Int32 StringToSequenceStart(::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET))(startIndex);
		}

		static ::System::Int32 StringToSequenceEnd(::System::Int32 endIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET))(endIndex);
		}
	};
}
