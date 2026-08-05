#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BB500)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BB580)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BB1F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB1D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_OnConnectDelegate_TypeDefinitionIndex = 37363;

	class MiHoYoSDKServer_OnConnectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_INVOKE_OFFSET))(this, retCode, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retCode, ::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_BEGININVOKE_OFFSET))(this, retCode, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
