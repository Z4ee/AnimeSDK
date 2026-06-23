#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/SharpZipBaseException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E554E70)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E554F30)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E554FC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E554E20)

namespace ICSharpCode::SharpZipLib::BZip2
{
	inline static constexpr unsigned int BZip2Exception_TypeDefinitionIndex = 6767;

	class BZip2Exception : public ::ICSharpCode::SharpZipLib::SharpZipBaseException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2EXCEPTION__CTOR_3_OFFSET))(this, message, exception);
		}
	};
}
