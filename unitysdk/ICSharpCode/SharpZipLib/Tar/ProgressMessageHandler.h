#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Tar { class TarArchive; }
namespace ICSharpCode::SharpZipLib::Tar { class TarEntry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F93F600)
#define ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F93F640)
#define ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F93F040)
#define ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F93F020)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int ProgressMessageHandler_TypeDefinitionIndex = 6817;

	class ProgressMessageHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ICSharpCode::SharpZipLib::Tar::TarArchive* archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry* entry, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarArchive*, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_INVOKE_OFFSET))(this, archive, entry, message);
		}

		::System::IAsyncResult* BeginInvoke(::ICSharpCode::SharpZipLib::Tar::TarArchive* archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry* entry, ::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarArchive*, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_BEGININVOKE_OFFSET))(this, archive, entry, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_PROGRESSMESSAGEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
