#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebException; }
namespace System::Net { class WebResponse; }

#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERROREXCEPTION_OFFSET UNITYSDK_OFFSET(0x19E6EAB0)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERRORRESPONSE_OFFSET UNITYSDK_OFFSET(0x19E6D370)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x19E6EB60)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSE_OFFSET UNITYSDK_OFFSET(0x19E6EEA0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebugApiUtil_TypeDefinitionIndex = 35463;

	class SRDebugApiUtil : public ::System::Object
	{
	public:
		static ::System::String* ParseErrorException(::System::Net::WebException* ex)
		{
			return ((::System::String*(*)(::System::Net::WebException*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERROREXCEPTION_OFFSET))(ex);
		}

		static ::System::String* ParseErrorResponse(::System::String* response, ::System::String* fallback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERRORRESPONSE_OFFSET))(response, fallback);
		}

		static ::System::Boolean ReadResponse(::System::Net::HttpWebRequest* request, ::System::String*& result)
		{
			return ((::System::Boolean(*)(::System::Net::HttpWebRequest*, ::System::String*&))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSE_OFFSET))(request, result);
		}

		static ::System::String* ReadResponseStream(::System::Net::WebResponse* stream)
		{
			return ((::System::String*(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSESTREAM_OFFSET))(stream);
		}
	};
}
