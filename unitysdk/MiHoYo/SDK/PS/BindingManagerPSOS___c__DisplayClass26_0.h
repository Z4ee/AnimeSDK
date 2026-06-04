#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183A3540)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__0_OFFSET UNITYSDK_OFFSET(0x183A6700)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__1_OFFSET UNITYSDK_OFFSET(0x183A6AC0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__2_OFFSET UNITYSDK_OFFSET(0x183A6DD0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS___c__DisplayClass26_0_TypeDefinitionIndex = 8562;

	class BindingManagerPSOS___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnUserServerList; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnServerByRegionCode; // 0x18
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetUserGameServerList_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetUserGameServerList_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__1_OFFSET))(this, a1);
		}

		::System::Void _GetUserGameServerList_b__2(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS26_0__GETUSERGAMESERVERLIST_B__2_OFFSET))(this, a1);
		}
	};
}
