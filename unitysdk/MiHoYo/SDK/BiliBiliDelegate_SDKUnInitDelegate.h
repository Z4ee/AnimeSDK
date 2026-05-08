#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C94D20)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C94D50)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C94A80)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C94A70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKUnInitDelegate_TypeDefinitionIndex = 18478;

	class BiliBiliDelegate_SDKUnInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKUNINITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
