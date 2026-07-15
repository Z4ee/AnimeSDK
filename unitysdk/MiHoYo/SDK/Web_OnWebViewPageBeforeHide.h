#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C23890)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C238C0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C22A20)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C237A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPageBeforeHide_TypeDefinitionIndex = 8170;

	class Web_OnWebViewPageBeforeHide : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
