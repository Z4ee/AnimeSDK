#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15FE6C80)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15FE6CB0)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15FE6720)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE6700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetDiskTypeDelegate_TypeDefinitionIndex = 6806;

	class SDKDelegate_GetDiskTypeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_INVOKE_OFFSET))(this, path);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_BEGININVOKE_OFFSET))(this, path, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKTYPEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
