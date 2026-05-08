#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF02860)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogMetaHandle_TypeDefinitionIndex = 32408;

	class LogMetaHandle : public ::System::Object
	{
	public:
		::System::Guid MetaGuid; // 0x10

		::System::Void _ctor(::System::Guid metaGuid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETAHANDLE__CTOR_OFFSET))(this, metaGuid);
		}
	};
}
