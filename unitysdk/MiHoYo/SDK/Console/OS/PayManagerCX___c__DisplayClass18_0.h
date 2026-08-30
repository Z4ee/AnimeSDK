#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17377AC0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1737A020)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__3_OFFSET UNITYSDK_OFFSET(0x1737A250)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass18_0_TypeDefinitionIndex = 9039;

	class PayManagerCX___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* collectionsId; // 0x10
		::System::String* uid; // 0x18
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x20
		::System::Action_1<::System::String*>* __9__3; // 0x28
		::System::String* aid; // 0x30
		::System::String* device; // 0x38
		::System::String* game; // 0x40
		::System::String* gameToken; // 0x48
		::System::String* region; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestDetectPay_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__3_OFFSET))(this, a1);
		}
	};
}
