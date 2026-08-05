#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Tar/TarException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB596D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FB59790)
#define ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FB59820)
#define ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB59680)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int InvalidHeaderException_TypeDefinitionIndex = 6816;

	class InvalidHeaderException : public ::ICSharpCode::SharpZipLib::Tar::TarException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_OFFSET))(this, information, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_INVALIDHEADEREXCEPTION__CTOR_3_OFFSET))(this, message, exception);
		}
	};
}
