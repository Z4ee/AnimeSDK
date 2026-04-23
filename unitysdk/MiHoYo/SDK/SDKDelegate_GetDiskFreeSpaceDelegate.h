#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176443B0)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176443E0)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17644100)
#define MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176440E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetDiskFreeSpaceDelegate_TypeDefinitionIndex = 6833;

	class SDKDelegate_GetDiskFreeSpaceDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDISKFREESPACEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
