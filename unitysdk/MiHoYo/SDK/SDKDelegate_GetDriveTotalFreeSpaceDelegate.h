#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1841FA10)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1841FA40)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1841FA00)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1841F990)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetDriveTotalFreeSpaceDelegate_TypeDefinitionIndex = 7738;

	class SDKDelegate_GetDriveTotalFreeSpaceDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double Invoke(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Double EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
