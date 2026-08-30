#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class SteamPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BA299D0)
#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_DEDUCT_OFFSET UNITYSDK_OFFSET(0x1BA2BAF0)
#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_GETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BA28940)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamPaymentNetworkRequest_TypeDefinitionIndex = 8646;

	class SteamPaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		static ::System::Void GetPriceTier(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_GETPRICETIER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CreateOrder(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::SteamPayInfo* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::SteamPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Deduct(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_DEDUCT_OFFSET))(a1, a2);
		}
	};
}
