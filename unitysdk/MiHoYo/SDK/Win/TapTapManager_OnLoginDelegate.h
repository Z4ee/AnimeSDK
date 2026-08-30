#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::Win { class TapTapToken; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B8FA820)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B8FA890)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8FA730)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FA7B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapManager_OnLoginDelegate_TypeDefinitionIndex = 9313;

	class TapTapManager_OnLoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::Win::TapTapToken* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::Win::TapTapToken*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::Win::TapTapToken* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::Win::TapTapToken*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_ONLOGINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
