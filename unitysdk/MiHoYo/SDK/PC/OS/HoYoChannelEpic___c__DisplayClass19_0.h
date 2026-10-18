#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEpic; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF27F20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1BF28EF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__1_OFFSET UNITYSDK_OFFSET(0x1BF299A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__2_OFFSET UNITYSDK_OFFSET(0x1BF29A50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__3_OFFSET UNITYSDK_OFFSET(0x1BF29B00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__4_OFFSET UNITYSDK_OFFSET(0x1BF298F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c__DisplayClass19_0_TypeDefinitionIndex = 8523;

	class HoYoChannelEpic___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__4; // 0x28
		::MiHoYo::SDK::PC::OS::HoYoChannelEpic* __4__this; // 0x30
		::MiHoYo::SDK::PC::OS::EpicPayInfo* payInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteCheckout_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__0_OFFSET))(this, a1);
		}

		::System::Void _ExecuteCheckout_b__4(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__4_OFFSET))(this, a1);
		}

		::System::Void _ExecuteCheckout_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__1_OFFSET))(this);
		}

		::System::Void _ExecuteCheckout_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__2_OFFSET))(this);
		}

		::System::Void _ExecuteCheckout_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS19_0__EXECUTECHECKOUT_B__3_OFFSET))(this);
		}
	};
}
