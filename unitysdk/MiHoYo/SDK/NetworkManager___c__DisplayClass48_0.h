#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AFAB0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1B9B2100)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1B9B2150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass48_0_TypeDefinitionIndex = 8128;

	class NetworkManager___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__1_OFFSET))(this);
		}
	};
}
