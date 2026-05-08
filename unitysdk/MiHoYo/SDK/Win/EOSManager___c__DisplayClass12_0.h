#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class EOSManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5090)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x19FF50A0)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x19FF5440)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__2_OFFSET UNITYSDK_OFFSET(0x19FF5DD0)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__3_OFFSET UNITYSDK_OFFSET(0x19FF5E00)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__4_OFFSET UNITYSDK_OFFSET(0x19FF5E30)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__5_OFFSET UNITYSDK_OFFSET(0x19FF5D30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager___c__DisplayClass12_0_TypeDefinitionIndex = 19900;

	class EOSManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* payTrace; // 0x10
		::System::Action* __9__3; // 0x18
		::System::String* goodsId; // 0x20
		::MiHoYo::SDK::AccountModel* accountModel; // 0x28
		::System::Action* __9__4; // 0x30
		::MiHoYo::SDK::JSONNode* payInfo; // 0x38
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__5; // 0x40
		::System::Action* __9__2; // 0x48
		::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* __9__1; // 0x50
		::MiHoYo::SDK::Win::EOSManager* __4__this; // 0x58
		::System::Action_1<::System::String*>* callback; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__0_OFFSET))(this, canPay);
		}

		::System::Void _Pay_b__1(::System::Int32 ret, ::System::String* accountId, ::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__1_OFFSET))(this, ret, accountId, accessToken);
		}

		::System::Void _Pay_b__5(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__5_OFFSET))(this, response);
		}

		::System::Void _Pay_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__2_OFFSET))(this);
		}

		::System::Void _Pay_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__3_OFFSET))(this);
		}

		::System::Void _Pay_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__4_OFFSET))(this);
		}
	};
}
