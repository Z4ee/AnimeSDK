#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185171A0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18517200)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x185111A0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18517130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_OnConnectDelegate_TypeDefinitionIndex = 44589;

	class MiHoYoSDKServer_OnConnectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCONNECTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
