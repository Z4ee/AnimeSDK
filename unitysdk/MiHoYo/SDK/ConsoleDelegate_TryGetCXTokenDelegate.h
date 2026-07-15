#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetCXTokenCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46BC0)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46C70)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46B80)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA46B00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetCXTokenDelegate_TypeDefinitionIndex = 7631;

	class ConsoleDelegate_TryGetCXTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::UInt64 a5, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::UInt64, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::UInt64 a5, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback* a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::UInt64, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
