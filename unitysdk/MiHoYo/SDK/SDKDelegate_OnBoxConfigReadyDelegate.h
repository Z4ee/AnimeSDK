#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD16FB0)
#define MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD16FE0)
#define MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD16A90)
#define MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16A70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnBoxConfigReadyDelegate_TypeDefinitionIndex = 19919;

	class SDKDelegate_OnBoxConfigReadyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* boxConfigJson)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_INVOKE_OFFSET))(this, boxConfigJson);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* boxConfigJson, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_BEGININVOKE_OFFSET))(this, boxConfigJson, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONBOXCONFIGREADYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
