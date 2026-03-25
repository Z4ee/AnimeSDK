#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16478200)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x164781F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x16478270)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16478740)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DiagnosticsTraceWriter_TypeDefinitionIndex = 8290;

	class DiagnosticsTraceWriter : public ::System::Object
	{
	public:
		::System::Diagnostics::TraceLevel _LevelFilter_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::TraceLevel get_LevelFilter()
		{
			return ((::System::Diagnostics::TraceLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GET_LEVELFILTER_OFFSET))(this);
		}

		::System::Diagnostics::TraceEventType GetTraceEventType(::System::Diagnostics::TraceLevel level)
		{
			return ((::System::Diagnostics::TraceEventType(*)(::PVOID, ::System::Diagnostics::TraceLevel))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET))(this, level);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel level, ::System::String* message, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceLevel, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET))(this, level, message, ex);
		}
	};
}
