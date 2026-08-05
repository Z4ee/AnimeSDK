#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD54C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1CFD54D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__1_OFFSET UNITYSDK_OFFSET(0x1CFD55E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__2_OFFSET UNITYSDK_OFFSET(0x1CFD5670)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__3_OFFSET UNITYSDK_OFFSET(0x1CFD5720)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass56_0_TypeDefinitionIndex = 20748;

	class HoYoChannelXbox___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* accountModel; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x18
		::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo; // 0x20
		::System::Action_1<::System::String*>* __9__2; // 0x28
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__3; // 0x30
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__0(::System::String* noRefreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__0_OFFSET))(this, noRefreshToken);
		}

		::System::Void _RequestDetectPay_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__1_OFFSET))(this, response);
		}

		::System::Void _RequestDetectPay_b__2(::System::String* tokenForceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__2_OFFSET))(this, tokenForceRefresh);
		}

		::System::Void _RequestDetectPay_b__3(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS56_0__REQUESTDETECTPAY_B__3_OFFSET))(this, response);
		}
	};
}
