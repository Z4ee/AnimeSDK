#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A07A420)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A07A450)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A07A180)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07A170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityTerminateDelegate_TypeDefinitionIndex = 18623;

	class PSDelegate_ActivityTerminateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
