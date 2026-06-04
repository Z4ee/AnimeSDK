#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA18EE00)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA18EE70)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_INVOKE_OFFSET UNITYSDK_OFFSET(0xA18EDF0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1__CTOR_OFFSET UNITYSDK_OFFSET(0xA18ED80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBiliBiliInterface_Class_3_3D7EAAB04B8D1FC1_TypeDefinitionIndex = 43710;

	class MiHoYoSDKBiliBiliInterface_Class_3_3D7EAAB04B8D1FC1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_CLASS_3_3D7EAAB04B8D1FC1_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
