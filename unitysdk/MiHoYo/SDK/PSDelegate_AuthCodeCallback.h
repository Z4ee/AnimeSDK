#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A352750)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A3527F0)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A3523D0)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A344030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_AuthCodeCallback_TypeDefinitionIndex = 18591;

	class PSDelegate_AuthCodeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET))(this, code, authCode, issuerId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET))(this, code, authCode, issuerId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
