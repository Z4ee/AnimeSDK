#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetKidTokenCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C95D380)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C95D3B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C95CE80)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95CE60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetKidTokenDelegate_TypeDefinitionIndex = 19439;

	class ConsoleDelegate_TryGetKidTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_GetKidTokenCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETKIDTOKENDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
