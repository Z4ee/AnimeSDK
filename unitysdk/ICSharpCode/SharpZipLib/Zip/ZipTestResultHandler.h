#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Zip { class TestStatus; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5A4100)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5A4140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5A3B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3B60)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipTestResultHandler_TypeDefinitionIndex = 6864;

	class ZipTestResultHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ICSharpCode::SharpZipLib::Zip::TestStatus* status, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::TestStatus*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_INVOKE_OFFSET))(this, status, message);
		}

		::System::IAsyncResult* BeginInvoke(::ICSharpCode::SharpZipLib::Zip::TestStatus* status, ::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::TestStatus*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_BEGININVOKE_OFFSET))(this, status, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPTESTRESULTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
