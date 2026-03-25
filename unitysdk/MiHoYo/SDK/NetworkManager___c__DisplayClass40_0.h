#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F418A0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x15F44010)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x15F44060)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass40_0_TypeDefinitionIndex = 7162;

	class NetworkManager___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__POSTREQUEST_B__0_OFFSET))(this, responseString);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS40_0__POSTREQUEST_B__1_OFFSET))(this);
		}
	};
}
