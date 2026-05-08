#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_ONLOGACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A509DF0)
#define MIHOYO_SDK_UPLOADER_ONLOGACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A509E20)
#define MIHOYO_SDK_UPLOADER_ONLOGACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A5098F0)
#define MIHOYO_SDK_UPLOADER_ONLOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5098E0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int OnLogAction_TypeDefinitionIndex = 35432;

	class OnLogAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_ONLOGACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_ONLOGACTION_INVOKE_OFFSET))(this, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_ONLOGACTION_BEGININVOKE_OFFSET))(this, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_ONLOGACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
