#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96BB40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1C96BB50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1C96BC00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__2_OFFSET UNITYSDK_OFFSET(0x1C96BCC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass40_0_TypeDefinitionIndex = 20396;

	class HoYoChannelXbox___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__2; // 0x10
		::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo; // 0x18
		::System::Action_1<::System::String*>* __9__1; // 0x20
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartPaymentFlow_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__0_OFFSET))(this, canPay);
		}

		::System::Void _StartPaymentFlow_b__1(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__1_OFFSET))(this, token);
		}

		::System::Void _StartPaymentFlow_b__2(::System::String* collectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS40_0__STARTPAYMENTFLOW_B__2_OFFSET))(this, collectionsId);
		}
	};
}
