#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Core { class ScanEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4ECCB0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4ECCF0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4EC730)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EC720)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ProcessFileHandler_TypeDefinitionIndex = 6649;

	class ProcessFileHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROCESSFILEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
