#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ICSharpCode::SharpZipLib::Core { class ProgressEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E79A830)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E79A870)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E79A2B0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79A290)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ProgressHandler_TypeDefinitionIndex = 6781;

	class ProgressHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
