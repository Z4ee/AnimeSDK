#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18420930)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18420960)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18420920)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184208B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGameControlReceiveDelegate_TypeDefinitionIndex = 7747;

	class SDKDelegate_OnGameControlReceiveDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMECONTROLRECEIVEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
