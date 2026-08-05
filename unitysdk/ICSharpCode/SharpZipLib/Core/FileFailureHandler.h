#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Core { class ScanFailureEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FC0E1D0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FC0E210)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FC0DC40)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0DC20)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int FileFailureHandler_TypeDefinitionIndex = 6788;

	class FileFailureHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILEFAILUREHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
