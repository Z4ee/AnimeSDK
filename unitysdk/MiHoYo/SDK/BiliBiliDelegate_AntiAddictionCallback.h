#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15DE79F0)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15DE7A50)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15DE7490)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE7470)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_AntiAddictionCallback_TypeDefinitionIndex = 6620;

	class BiliBiliDelegate_AntiAddictionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_INVOKE_OFFSET))(this, buf, buflen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* buf, ::System::Int32 buflen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_BEGININVOKE_OFFSET))(this, buf, buflen, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
