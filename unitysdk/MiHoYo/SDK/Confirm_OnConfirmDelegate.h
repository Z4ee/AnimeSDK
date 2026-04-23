#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x174094F0)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17409560)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17408E40)
#define MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173CCCE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_OnConfirmDelegate_TypeDefinitionIndex = 7272;

	class Confirm_OnConfirmDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Confirm_ConfirmResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
