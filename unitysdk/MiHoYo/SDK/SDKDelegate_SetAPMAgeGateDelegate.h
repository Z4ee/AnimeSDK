#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD17910)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD17980)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD17610)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD175F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_SetAPMAgeGateDelegate_TypeDefinitionIndex = 19918;

	class SDKDelegate_SetAPMAgeGateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_INVOKE_OFFSET))(this, enable);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 enable, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_BEGININVOKE_OFFSET))(this, enable, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
