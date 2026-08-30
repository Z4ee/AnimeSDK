#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B73CF20)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B73CF80)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B73CF10)
#define MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73CE90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_AntiAddictionCallback_TypeDefinitionIndex = 7551;

	class BiliBiliDelegate_AntiAddictionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_ANTIADDICTIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
