#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7DF50)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7DFD0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7CF60)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7DE60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPageError_TypeDefinitionIndex = 8174;

	class Web_OnWebViewPageError : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
