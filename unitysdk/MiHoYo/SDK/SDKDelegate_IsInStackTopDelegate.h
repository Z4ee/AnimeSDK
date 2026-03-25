#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15FEA500)
#define MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15FEA530)
#define MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15FE9FA0)
#define MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE9F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_IsInStackTopDelegate_TypeDefinitionIndex = 6811;

	class SDKDelegate_IsInStackTopDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_INVOKE_OFFSET))(this, strUIName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strUIName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_BEGININVOKE_OFFSET))(this, strUIName, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ISINSTACKTOPDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
