#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18370950)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18370990)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1836D9C0)
#define MIHOYO_SDK_NETUTIL_RESPONSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18370860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil_ResponseCallback_TypeDefinitionIndex = 8125;

	class NetUtil_ResponseCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_RESPONSECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
