#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogMetaType.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogProperty.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BaseSerializeableObject_1.h"
#include "unitysdk/System/Guid.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_GET_METATYPE_OFFSET UNITYSDK_OFFSET(0x1F651290)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_GET_PROPERTIESVIEW_OFFSET UNITYSDK_OFFSET(0x1F651230)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_MATCH_OFFSET UNITYSDK_OFFSET(0x1F6513E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F651730)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_SET_METATYPE_OFFSET UNITYSDK_OFFSET(0x1F6512A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6512B0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F651340)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F650F00)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogMeta_TypeDefinitionIndex = 34594;

	class LogMeta : public ::BinaryTracingFramework::Serialize::BaseSerializeableObject_1<::BinaryTracingCore::Source::TracingTools::LogMeta*>
	{
	public:
		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogProperty>* Properties; // 0x10
		::System::String* ArcheTypeName; // 0x18
		::System::Int32 metaType; // 0x20
		::System::Guid ArcheTypeGuid; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* archeTypeName, ::BinaryTracingCore::Source::TracingTools::LogMetaType metaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BinaryTracingCore::Source::TracingTools::LogMetaType))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_1_OFFSET))(this, archeTypeName, metaType);
		}

		::System::Void _ctor_2(::System::String* archeTypeName, ::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogProperty>* logProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogProperty>*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA__CTOR_2_OFFSET))(this, archeTypeName, logProperties);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::BinaryTracingCore::Source::TracingTools::LogProperty>* get_PropertiesView()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::BinaryTracingCore::Source::TracingTools::LogProperty>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_GET_PROPERTIESVIEW_OFFSET))(this);
		}

		::BinaryTracingCore::Source::TracingTools::LogMetaType get_MetaType()
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogMetaType(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_GET_METATYPE_OFFSET))(this);
		}

		::System::Void set_MetaType(::BinaryTracingCore::Source::TracingTools::LogMetaType value)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogMetaType))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_SET_METATYPE_OFFSET))(this, value);
		}

		::System::Boolean Match(::System::Collections::Generic::IList_1<::BinaryTracingCore::Source::TracingTools::LogProperty>* logProperties)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::BinaryTracingCore::Source::TracingTools::LogProperty>*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_MATCH_OFFSET))(this, logProperties);
		}

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGMETA_SERIALIZE_OFFSET))(this, archive);
		}
	};
}
