#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1888EC20)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1888EC90)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1888E7F0)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1888EBB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_OnConfirmDelegate_TypeDefinitionIndex = 8186;

	class Confirm_OnConfirmDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Confirm_ConfirmResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
