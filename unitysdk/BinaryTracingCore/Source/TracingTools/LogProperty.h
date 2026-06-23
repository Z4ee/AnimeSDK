#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogPropertyTypeEnum.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGPROPERTY_GETTYPEGUID_OFFSET UNITYSDK_OFFSET(0xA5C3B0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGPROPERTY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5C350)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogProperty_TypeDefinitionIndex = 33957;

	struct alignas(8) LogProperty
	{
		::System::String* Name; // 0x10
		::BinaryTracingCore::Source::TracingTools::LogPropertyTypeEnum Type; // 0x18

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGPROPERTY_SERIALIZE_OFFSET))(this, archive);
		}

		/*
		::System::Guid GetTypeGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGPROPERTY_GETTYPEGUID_OFFSET))(this);
		}
		*/
	};
}
