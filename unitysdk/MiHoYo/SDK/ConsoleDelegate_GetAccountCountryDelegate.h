#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18307B20)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18307B50)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x182EB7A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18307AB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetAccountCountryDelegate_TypeDefinitionIndex = 7569;

	class ConsoleDelegate_GetAccountCountryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTCOUNTRYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
