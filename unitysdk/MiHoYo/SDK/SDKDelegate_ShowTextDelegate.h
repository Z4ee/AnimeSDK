#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15FEE460)
#define MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15FEE490)
#define MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15FEDF10)
#define MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEDEF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_ShowTextDelegate_TypeDefinitionIndex = 6780;

	class SDKDelegate_ShowTextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SHOWTEXTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
