#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18462EB0)
#define MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18462EF0)
#define MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184625B0)
#define MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18462DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewBeforeNavigationMessage_TypeDefinitionIndex = 8162;

	class Web_OnWebViewBeforeNavigationMessage : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWBEFORENAVIGATIONMESSAGE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
