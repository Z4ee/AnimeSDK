#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F92430)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F92460)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F91ED0)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F91EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityStartDelegate_TypeDefinitionIndex = 6757;

	class PSDelegate_ActivityStartDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* activityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_INVOKE_OFFSET))(this, activityId);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* activityId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_BEGININVOKE_OFFSET))(this, activityId, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
