#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D988420)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D988450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D987EE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D987EC0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int FastZip_ConfirmOverwriteDelegate_TypeDefinitionIndex = 6839;

	class FastZip_ConfirmOverwriteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_INVOKE_OFFSET))(this, fileName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* fileName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_BEGININVOKE_OFFSET))(this, fileName, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CONFIRMOVERWRITEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
