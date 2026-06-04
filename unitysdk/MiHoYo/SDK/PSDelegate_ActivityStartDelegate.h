#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D2720)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D2750)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183B6450)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D26B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityStartDelegate_TypeDefinitionIndex = 7702;

	class PSDelegate_ActivityStartDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYSTARTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
