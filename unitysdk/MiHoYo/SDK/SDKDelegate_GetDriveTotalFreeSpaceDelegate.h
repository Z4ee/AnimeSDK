#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19CABCE0)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19CABD10)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19CAB7A0)
#define MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAB790)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetDriveTotalFreeSpaceDelegate_TypeDefinitionIndex = 18657;

	class SDKDelegate_GetDriveTotalFreeSpaceDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Double Invoke(::System::String* strDriveName)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_INVOKE_OFFSET))(this, strDriveName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strDriveName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_BEGININVOKE_OFFSET))(this, strDriveName, callback, object);
		}

		::System::Double EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Double(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETDRIVETOTALFREESPACEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
