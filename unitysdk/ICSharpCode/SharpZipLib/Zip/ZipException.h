#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/SharpZipBaseException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C488000)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C485C50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C4880C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C487FB0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipException_TypeDefinitionIndex = 6721;

	class ZipException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION__CTOR_3_OFFSET))(this, message, exception);
		}
	};
}
