#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x1886D830)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_SET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x1886D840)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1886DB30)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x1886D8D0)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D850)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int MemoryTraceWriter_TypeDefinitionIndex = 9343;

	class MemoryTraceWriter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::String*>* _traceMessages; // 0x10
		::System::Diagnostics::TraceLevel _LevelFilter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::TraceLevel get_LevelFilter()
		{
			return ((::System::Diagnostics::TraceLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GET_LEVELFILTER_OFFSET))(this);
		}

		::System::Void set_LevelFilter(::System::Diagnostics::TraceLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceLevel))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_SET_LEVELFILTER_OFFSET))(this, a1);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceLevel, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TRACE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TOSTRING_OFFSET))(this);
		}
	};
}
