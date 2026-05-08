#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Core { class DirectoryEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C216910)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C216950)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C216390)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C216380)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ProcessDirectoryHandler_TypeDefinitionIndex = 6648;

	class ProcessDirectoryHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSDIRECTORYHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
