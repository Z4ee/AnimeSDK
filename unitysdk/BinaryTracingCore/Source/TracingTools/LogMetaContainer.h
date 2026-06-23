#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogMeta; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_REGISTERLOGMETA_OFFSET UNITYSDK_OFFSET(0x1E22DA80)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_TRYGETMETA_1_OFFSET UNITYSDK_OFFSET(0x1E22DC50)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_TRYGETMETA_OFFSET UNITYSDK_OFFSET(0x1E22DB90)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22DD30)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogMetaContainer_TypeDefinitionIndex = 33960;

	class LogMetaContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*>* LogMetasMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BinaryTracingCore::Source::TracingTools::LogMeta*>* LogArchetypesNameMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterLogMeta(::BinaryTracingCore::Source::TracingTools::LogMeta* meta)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogMeta*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_REGISTERLOGMETA_OFFSET))(this, meta);
		}

		::System::Boolean TryGetMeta(::System::String* metaName, ::BinaryTracingCore::Source::TracingTools::LogMeta*& meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BinaryTracingCore::Source::TracingTools::LogMeta*&))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_TRYGETMETA_OFFSET))(this, metaName, meta);
		}

		::System::Boolean TryGetMeta_1(::System::Guid guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*& meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*&))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETACONTAINER_TRYGETMETA_1_OFFSET))(this, guid, meta);
		}
	};
}
