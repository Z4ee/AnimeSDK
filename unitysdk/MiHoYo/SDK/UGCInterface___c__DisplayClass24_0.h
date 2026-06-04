#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2217B0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0xA225AF0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__1_OFFSET UNITYSDK_OFFSET(0xA225B90)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__2_OFFSET UNITYSDK_OFFSET(0xA225E00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass24_0_TypeDefinitionIndex = 43855;

	class UGCInterface___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* strAuthKey; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18
		::System::Action* checkNeedRetry; // 0x20
		::MiHoYo::SDK::NetworkResponseModel* originResponse; // 0x28
		::System::String* strUrl; // 0x30
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x38
		::System::Int32 nRetryCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RetryExchangeToken_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__0_OFFSET))(this);
		}

		::System::Void _RetryExchangeToken_b__1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _RetryExchangeToken_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS24_0__RETRYEXCHANGETOKEN_B__2_OFFSET))(this);
		}
	};
}
