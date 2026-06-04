#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D2330)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D2360)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183B65D0)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D22C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityChangeAvailabilityListDelegate_TypeDefinitionIndex = 7706;

	class PSDelegate_ActivityChangeAvailabilityListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYLISTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
