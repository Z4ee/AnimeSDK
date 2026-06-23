#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB527A0)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB527D0)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB52500)
#define MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB524E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetRamRemainDelegate_TypeDefinitionIndex = 19553;

	class SDKDelegate_GetRamRemainDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Double Invoke()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Double EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Double(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETRAMREMAINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
