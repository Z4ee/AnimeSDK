#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D76F740)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D76F770)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D76F220)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76F200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityChangeAvailabilityDelegate_TypeDefinitionIndex = 19866;

	class PSDelegate_ActivityChangeAvailabilityDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* jsonString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_INVOKE_OFFSET))(this, jsonString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_BEGININVOKE_OFFSET))(this, jsonString, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYCHANGEAVAILABILITYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
