#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15DE8900)
#define MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15DE8960)
#define MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15DE83A0)
#define MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE8380)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_LoginCallback_TypeDefinitionIndex = 6618;

	class BiliBiliDelegate_LoginCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_INVOKE_OFFSET))(this, buf, buflen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* buf, ::System::Int32 buflen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_BEGININVOKE_OFFSET))(this, buf, buflen, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_LOGINCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
