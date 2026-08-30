#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C07A0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__EXCHANGETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0xB2C3090)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__EXCHANGETOKEN_B__1_OFFSET UNITYSDK_OFFSET(0xB2C3280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass40_0_TypeDefinitionIndex = 46905;

	class UGCInterface___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::String* strAuthKey; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x20
		::System::String* strUrl; // 0x28
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExchangeToken_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__EXCHANGETOKEN_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ExchangeToken_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS40_0__EXCHANGETOKEN_B__1_OFFSET))(this);
		}
	};
}
