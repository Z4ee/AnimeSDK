#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x85A9AA0)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x85A9B40)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x85A86B0)
#define MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x85A83D0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int UploadCallbackAction_TypeDefinitionIndex = 37344;

	class UploadCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 nTaskID, ::System::Boolean success, ::System::String* fileID, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_INVOKE_OFFSET))(this, nTaskID, success, fileID, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 nTaskID, ::System::Boolean success, ::System::String* fileID, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_BEGININVOKE_OFFSET))(this, nTaskID, success, fileID, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADCALLBACKACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
