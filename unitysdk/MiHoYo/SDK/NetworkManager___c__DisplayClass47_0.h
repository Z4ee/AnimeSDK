#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D8A90)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__GETREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1B9D8AA0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__GETREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1B9D8B20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass47_0_TypeDefinitionIndex = 19933;

	class NetworkManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetRequest_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__GETREQUEST_B__0_OFFSET))(this, responseString);
		}

		::System::Void _GetRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS47_0__GETREQUEST_B__1_OFFSET))(this);
		}
	};
}
