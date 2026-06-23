#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF60200)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1BF60210)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__3_OFFSET UNITYSDK_OFFSET(0x1BF60420)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass18_0_TypeDefinitionIndex = 20844;

	class PayManagerCX___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__3; // 0x10
		::System::String* game; // 0x18
		::System::String* gameToken; // 0x20
		::System::String* uid; // 0x28
		::System::String* region; // 0x30
		::System::String* aid; // 0x38
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x40
		::System::String* collectionsId; // 0x48
		::System::String* device; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__0(::System::String* noRefreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET))(this, noRefreshToken);
		}

		::System::Void _RequestDetectPay_b__3(::System::String* forceRefreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__3_OFFSET))(this, forceRefreshToken);
		}
	};
}
