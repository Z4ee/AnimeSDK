#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA22AE60)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA22AF00)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA22A2B0)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA22ADF0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int UploadCallbackAction_TypeDefinitionIndex = 44024;

	class UploadCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
