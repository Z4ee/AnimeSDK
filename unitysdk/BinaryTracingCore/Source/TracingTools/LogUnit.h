#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogHeadInfo.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogProperty.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace BinaryTracingFramework::Serialize { class MemoryWriteArchive; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_CREATE_OFFSET UNITYSDK_OFFSET(0x1BF00B80)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_GET_VALIDUNIT_OFFSET UNITYSDK_OFFSET(0x1BF02B00)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_1_OFFSET UNITYSDK_OFFSET(0x1BF013A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_2_OFFSET UNITYSDK_OFFSET(0x1BF014A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_3_OFFSET UNITYSDK_OFFSET(0x1BF01520)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_OFFSET UNITYSDK_OFFSET(0x1BF012A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BF00E50)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RESET_OFFSET UNITYSDK_OFFSET(0x1BF03260)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RESLOVELOGUNIT_OFFSET UNITYSDK_OFFSET(0x1BF000D0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_SETHEADINFO_OFFSET UNITYSDK_OFFSET(0x1BF03100)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_SET_VALIDUNIT_OFFSET UNITYSDK_OFFSET(0x1BF02B10)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF02B20)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogUnit_TypeDefinitionIndex = 32394;

	class LogUnit : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultArchiveCapacity = 0x100; // 0x0
		// static const ::System::Int32 DefaultPropertysCapacity = 0x10; // 0x0
		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogProperty>* Properties; // 0x10
		::BinaryTracingCore::Source::TracingTools::LogHeadInfo HeadInfo; // 0x18
		::BinaryTracingFramework::Serialize::MemoryWriteArchive* Content; // 0x60
		::BinaryTracingFramework::Serialize::MemoryWriteArchive* AttachContent; // 0x68
		::System::Boolean NeedInitArchetype; // 0x70
		::System::Boolean _ValidUnit_k__BackingField; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ValidUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_GET_VALIDUNIT_OFFSET))(this);
		}

		::System::Void set_ValidUnit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_SET_VALIDUNIT_OFFSET))(this, value);
		}

		::System::Void SetHeadInfo(::BinaryTracingCore::Source::TracingTools::LogHeadInfo headInfo)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogHeadInfo))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_SETHEADINFO_OFFSET))(this, headInfo);
		}

		static ::BinaryTracingCore::Source::TracingTools::LogUnit* Create()
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogUnit*(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_CREATE_OFFSET))();
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RELEASE_OFFSET))(this);
		}

		::System::Void ResloveLogUnit(::BinaryTracingCore::Source::TracingTools::TracingSystem* system)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::TracingSystem*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RESLOVELOGUNIT_OFFSET))(this, system);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_RESET_OFFSET))(this);
		}

		::System::Void Log(::System::String* PropertyKey, ::System::Int32 Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_OFFSET))(this, PropertyKey, Value);
		}

		::System::Void Log_1(::System::String* PropertyKey, ::System::Single Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_1_OFFSET))(this, PropertyKey, Value);
		}

		::System::Void Log_2(::System::String* PropertyKey, ::System::Boolean Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_2_OFFSET))(this, PropertyKey, Value);
		}

		::System::Void Log_3(::System::String* PropertyKey, ::System::String* Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGUNIT_LOG_3_OFFSET))(this, PropertyKey, Value);
		}
	};
}
