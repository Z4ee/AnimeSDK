#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/SharpZipBaseException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2169B0)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C216A70)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C216B00)
#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C216960)

namespace ICSharpCode::SharpZipLib::GZip
{
	inline static constexpr unsigned int GZipException_TypeDefinitionIndex = 6671;

	class GZipException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}
	};
}
