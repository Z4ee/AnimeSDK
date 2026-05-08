#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x199AADE0)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x199AAE10)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x199AA8E0)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199AA8D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_DeviceFPRefreshDelegate_TypeDefinitionIndex = 18640;

	class SDKDelegate_DeviceFPRefreshDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
