#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingRead { class LogPropertyView; }
namespace BinaryTracingCore::Source::TracingTools { class LogMeta; }
namespace BinaryTracingCore::Source::TracingTools { class LogUnit; }
namespace ReadTools::Core { class IMetaContainers; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGUNITVIEW_READ_OFFSET UNITYSDK_OFFSET(0x1BEFF330)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGUNITVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFFE40)

namespace BinaryTracingCore::Source::TracingRead
{
	inline static constexpr unsigned int LogUnitView_TypeDefinitionIndex = 32418;

	class LogUnitView : public ::System::Object
	{
	public:
		::BinaryTracingCore::Source::TracingTools::LogMeta* meta; // 0x10
		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingRead::LogPropertyView*>* views; // 0x18
		::BinaryTracingCore::Source::TracingTools::LogUnit* unit; // 0x20
		::System::Boolean IsInComplete; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGUNITVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Read(::ReadTools::Core::IMetaContainers* logLoader, ::BinaryTracingCore::Source::TracingTools::LogUnit* inUnit)
		{
			return ((::System::Void(*)(::PVOID, ::ReadTools::Core::IMetaContainers*, ::BinaryTracingCore::Source::TracingTools::LogUnit*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGUNITVIEW_READ_OFFSET))(this, logLoader, inUnit);
		}
	};
}
