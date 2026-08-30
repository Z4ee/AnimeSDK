#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AAA40)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AAA70)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AAA30)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AA9C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetRamRemainDelegate_TypeDefinitionIndex = 7745;

	class SDKDelegate_GetRamRemainDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double Invoke()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Double EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
