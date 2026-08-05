#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C80C0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C8140)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C7DB0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7D90)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MiHoYoUrlUsageCallback_TypeDefinitionIndex = 37707;

	class MiHoYoMTRInterface_MiHoYoUrlUsageCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 nTaskID, ::System::String* strUrlCheckResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_INVOKE_OFFSET))(this, nTaskID, strUrlCheckResult);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 nTaskID, ::System::String* strUrlCheckResult, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_BEGININVOKE_OFFSET))(this, nTaskID, strUrlCheckResult, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
