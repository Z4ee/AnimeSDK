#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGHEADINFO_GETTYPEGUID_OFFSET UNITYSDK_OFFSET(0xAAAAE0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGHEADINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xAAAAD0)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogHeadInfo_TypeDefinitionIndex = 34580;

	struct alignas(8) LogHeadInfo
	{
		::System::String* ArcheTypeName; // 0x10
		::System::Guid ArchetypeMeta; // 0x18
		::System::Guid ChannelMeta; // 0x28
		::System::Int64 TimeStamp; // 0x38
		::System::Int64 FrameCount; // 0x40
		::System::Int32 Tag; // 0x48
		::System::Int32 OffsetInBlock; // 0x4C
		::System::Int32 ContextLength; // 0x50

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGHEADINFO_SERIALIZE_OFFSET))(this, archive);
		}

		::System::Guid GetTypeGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGHEADINFO_GETTYPEGUID_OFFSET))(this);
		}
	};
}
