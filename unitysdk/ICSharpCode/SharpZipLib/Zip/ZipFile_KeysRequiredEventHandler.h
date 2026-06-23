#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Zip { class KeysRequiredEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E865930)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E865970)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E8653B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E865390)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_KeysRequiredEventHandler_TypeDefinitionIndex = 6867;

	class ZipFile_KeysRequiredEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_KEYSREQUIREDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
