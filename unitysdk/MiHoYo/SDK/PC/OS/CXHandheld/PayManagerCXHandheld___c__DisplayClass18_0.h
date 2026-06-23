#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerCXHandheld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC93830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1BC93840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__2_OFFSET UNITYSDK_OFFSET(0x1BC93A50)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass18_0_TypeDefinitionIndex = 20515;

	class PayManagerCXHandheld___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__2; // 0x10
		::System::String* gameToken; // 0x18
		::System::String* device; // 0x20
		::System::String* collectionsId; // 0x28
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld* __4__this; // 0x30
		::System::String* game; // 0x38
		::System::String* region; // 0x40
		::System::String* uid; // 0x48
		::System::String* aid; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__0(::System::String* noRefreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__0_OFFSET))(this, noRefreshToken);
		}

		::System::Void _RequestDetectPay_b__2(::System::String* forceRefreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS18_0__REQUESTDETECTPAY_B__2_OFFSET))(this, forceRefreshToken);
		}
	};
}
