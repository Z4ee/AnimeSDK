#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGREFPROPERTY_GETTYPEGUID_OFFSET UNITYSDK_OFFSET(0xAAACB0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGREFPROPERTY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xAAAC60)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogRefProperty_TypeDefinitionIndex = 34589;

	struct alignas(4) LogRefProperty
	{
		::System::Int32 Offset; // 0x10
		::System::Int32 Length; // 0x14

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGREFPROPERTY_SERIALIZE_OFFSET))(this, archive);
		}

		/*
		::System::Guid GetTypeGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGREFPROPERTY_GETTYPEGUID_OFFSET))(this);
		}
		*/
	};
}
