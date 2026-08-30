#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7E0D0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7E110)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7CE50)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7DFE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPageFinish_TypeDefinitionIndex = 8173;

	class Web_OnWebViewPageFinish : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEFINISH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
