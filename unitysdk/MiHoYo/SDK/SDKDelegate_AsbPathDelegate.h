#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC7A80)
#define MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC7AB0)
#define MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC7A70)
#define MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC7A00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_AsbPathDelegate_TypeDefinitionIndex = 7736;

	class SDKDelegate_AsbPathDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ASBPATHDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
