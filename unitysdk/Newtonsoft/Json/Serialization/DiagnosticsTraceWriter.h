#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15B992E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x15B992D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x15B99350)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99BE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DiagnosticsTraceWriter_TypeDefinitionIndex = 9351;

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

		::System::Diagnostics::TraceEventType GetTraceEventType(::System::Diagnostics::TraceLevel a1)
		{
			return ((::System::Diagnostics::TraceEventType(*)(::PVOID, ::System::Diagnostics::TraceLevel))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET))(this, a1);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceLevel, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET))(this, a1, a2, a3);
		}
	};
}
