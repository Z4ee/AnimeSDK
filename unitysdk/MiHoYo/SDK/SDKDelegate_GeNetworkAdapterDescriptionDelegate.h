#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E8D00)
#define MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E8D30)
#define MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E8A60)
#define MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E8A40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GeNetworkAdapterDescriptionDelegate_TypeDefinitionIndex = 19555;

	class SDKDelegate_GeNetworkAdapterDescriptionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GENETWORKADAPTERDESCRIPTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
