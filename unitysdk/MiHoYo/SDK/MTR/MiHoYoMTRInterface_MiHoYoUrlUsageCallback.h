#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA18A6B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA18A710)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA18A470)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA18A640)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MiHoYoUrlUsageCallback_TypeDefinitionIndex = 44040;

	class MiHoYoMTRInterface_MiHoYoUrlUsageCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOURLUSAGECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
