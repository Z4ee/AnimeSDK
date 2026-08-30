#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AEEA0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1B9B1D00)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1B9B1D50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass43_0_TypeDefinitionIndex = 8123;

	class NetworkManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__1_OFFSET))(this);
		}
	};
}
