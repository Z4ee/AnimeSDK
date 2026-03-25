#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F41E30)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUESTEX_G__ONGETRESPONSE_0_OFFSET UNITYSDK_OFFSET(0x15F44250)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUESTEX_G__ONGETTIMEOUT_1_OFFSET UNITYSDK_OFFSET(0x15F442A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass43_0_TypeDefinitionIndex = 7165;

	class NetworkManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequestEx_g__onGetResponse_0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* responseHeaders, ::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUESTEX_G__ONGETRESPONSE_0_OFFSET))(this, responseHeaders, responseString);
		}

		::System::Void _PostRequestEx_g__onGetTimeOut_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUESTEX_G__ONGETTIMEOUT_1_OFFSET))(this);
		}
	};
}
