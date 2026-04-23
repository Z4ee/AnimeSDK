#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17588240)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17588280)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17585140)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17583BF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil_ResponseCallback_TypeDefinitionIndex = 7222;

	class NetUtil_ResponseCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_INVOKE_OFFSET))(this, headers, response);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* response, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_BEGININVOKE_OFFSET))(this, headers, response, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
