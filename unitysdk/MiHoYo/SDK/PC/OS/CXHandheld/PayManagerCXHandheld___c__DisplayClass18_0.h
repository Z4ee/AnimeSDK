#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerCXHandheld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25DCC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1A2602D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__2_OFFSET UNITYSDK_OFFSET(0x1A260500)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass18_0_TypeDefinitionIndex = 8709;

	class PayManagerCXHandheld___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* uid; // 0x10
		::System::Action_1<::System::String*>* __9__2; // 0x18
		::System::String* region; // 0x20
		::System::String* collectionsId; // 0x28
		::System::String* device; // 0x30
		::System::String* gameToken; // 0x38
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld* __4__this; // 0x40
		::System::String* aid; // 0x48
		::System::String* game; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestDetectPay_b__2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__2_OFFSET))(this, a1);
		}
	};
}
