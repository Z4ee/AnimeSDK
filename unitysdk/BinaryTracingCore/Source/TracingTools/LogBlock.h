#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BaseSerializeableObject_1.h"

namespace BinaryTracingCore::Source::TracingTools { class LogUnit; }
namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_ADDUNIT_OFFSET UNITYSDK_OFFSET(0x1E22B530)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GETLOGUNIT_OFFSET UNITYSDK_OFFSET(0x1E22B520)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_FRAMECOUNTVIEW_OFFSET UNITYSDK_OFFSET(0x1E22B4F0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_LOGUNITSVIEW_OFFSET UNITYSDK_OFFSET(0x1E22B4A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_TIMESTAMPVIEW_OFFSET UNITYSDK_OFFSET(0x1E22B500)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_RESET_OFFSET UNITYSDK_OFFSET(0x1E22C290)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_RESLOVELOGUNIT_OFFSET UNITYSDK_OFFSET(0x1E22B590)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E22B8E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_SETUPHEADINFO_OFFSET UNITYSDK_OFFSET(0x1E22B510)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22C490)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogBlock_TypeDefinitionIndex = 33946;

	class LogBlock : public ::BinaryTracingFramework::Serialize::BaseSerializeableObject_1<::BinaryTracingCore::Source::TracingTools::LogBlock*>
	{
	public:
		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogUnit*>* LogUnits; // 0x10
		::System::Int64 TimeStamp; // 0x18
		::System::Int64 FrameCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK__CTOR_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::BinaryTracingCore::Source::TracingTools::LogUnit*>* get_LogUnitsView()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::BinaryTracingCore::Source::TracingTools::LogUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_LOGUNITSVIEW_OFFSET))(this);
		}

		::System::Int64 get_FrameCountView()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_FRAMECOUNTVIEW_OFFSET))(this);
		}

		::System::Int64 get_TimeStampView()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GET_TIMESTAMPVIEW_OFFSET))(this);
		}

		::System::Void SetupHeadInfo(::System::Int64 frameCount, ::System::Int64 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_SETUPHEADINFO_OFFSET))(this, frameCount, timeStamp);
		}

		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogUnit*>* GetLogUnit()
		{
			return ((::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_GETLOGUNIT_OFFSET))(this);
		}

		::System::Void AddUnit(::BinaryTracingCore::Source::TracingTools::LogUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogUnit*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_ADDUNIT_OFFSET))(this, unit);
		}

		::System::Void ResloveLogUnit(::BinaryTracingCore::Source::TracingTools::TracingSystem* system)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::TracingSystem*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_RESLOVELOGUNIT_OFFSET))(this, system);
		}

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_SERIALIZE_OFFSET))(this, archive);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGBLOCK_RESET_OFFSET))(this);
		}
	};
}
