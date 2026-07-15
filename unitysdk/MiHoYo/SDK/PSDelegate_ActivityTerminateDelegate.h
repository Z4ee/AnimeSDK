#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1945DFF0)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1945E020)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1943E8C0)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1945DF80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityTerminateDelegate_TypeDefinitionIndex = 7710;

	class PSDelegate_ActivityTerminateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYTERMINATEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
