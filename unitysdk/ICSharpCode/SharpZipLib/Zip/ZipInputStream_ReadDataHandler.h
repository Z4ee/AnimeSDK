#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F943B30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F943BD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F943580)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F943560)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipInputStream_ReadDataHandler_TypeDefinitionIndex = 6892;

	class ZipInputStream_ReadDataHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Byte>* b, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_INVOKE_OFFSET))(this, b, offset, length);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* b, ::System::Int32 offset, ::System::Int32 length, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_BEGININVOKE_OFFSET))(this, b, offset, length, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATAHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
