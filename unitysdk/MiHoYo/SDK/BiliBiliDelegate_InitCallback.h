#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B32E50)
#define MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B32ED0)
#define MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B328F0)
#define MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19B328E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_InitCallback_TypeDefinitionIndex = 18473;

	class BiliBiliDelegate_InitCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_INVOKE_OFFSET))(this, buf, buflen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* buf, ::System::Int32 buflen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_BEGININVOKE_OFFSET))(this, buf, buflen, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_INITCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
