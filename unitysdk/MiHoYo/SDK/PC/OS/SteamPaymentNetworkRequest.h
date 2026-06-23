#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class SteamPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BF76530)
#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_DEDUCT_OFFSET UNITYSDK_OFFSET(0x1BF78060)
#define MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_GETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BF760E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamPaymentNetworkRequest_TypeDefinitionIndex = 20452;

	class SteamPaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		static ::System::Void GetPriceTier(::System::String* gameKey, ::System::String* steamId, ::System::String* currency, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* onGetPriceTier)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_GETPRICETIER_OFFSET))(gameKey, steamId, currency, onGetPriceTier);
		}

		static ::System::Void CreateOrder(::MiHoYo::SDK::AccountModel* accountModel, ::MiHoYo::SDK::PC::OS::SteamPayInfo* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onCreateOrder)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::SteamPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET))(accountModel, payInfo, onCreateOrder);
		}

		static ::System::Void Deduct(::System::String* orderId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* onDeduct)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYMENTNETWORKREQUEST_DEDUCT_OFFSET))(orderId, onDeduct);
		}
	};
}
