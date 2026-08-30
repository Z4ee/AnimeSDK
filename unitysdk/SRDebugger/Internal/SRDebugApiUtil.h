#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebException; }
namespace System::Net { class WebResponse; }

#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERROREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E672360)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERRORRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E6704C0)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1E672410)
#define SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E6727B0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebugApiUtil_TypeDefinitionIndex = 37404;

	class SRDebugApiUtil : public ::System::Object
	{
	public:
		static ::System::String* ParseErrorException(::System::Net::WebException* a1)
		{
			return ((::System::String*(*)(::System::Net::WebException*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERROREXCEPTION_OFFSET))(a1);
		}

		static ::System::String* ParseErrorResponse(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_PARSEERRORRESPONSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean ReadResponse(::System::Net::HttpWebRequest* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::Net::HttpWebRequest*, ::System::String*&))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSE_OFFSET))(a1, a2);
		}

		static ::System::String* ReadResponseStream(::System::Net::WebResponse* a1)
		{
			return ((::System::String*(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGAPIUTIL_READRESPONSESTREAM_OFFSET))(a1);
		}
	};
}
