#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176493F0)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17649420)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17648EA0)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17648E80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGameControlReceiveDelegate_TypeDefinitionIndex = 6844;

	class SDKDelegate_OnGameControlReceiveDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
