#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetKidTokenCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FBA20)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FBA50)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FBA10)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB9A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetKidTokenDelegate_TypeDefinitionIndex = 7631;

	class ConsoleDelegate_TryGetKidTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
