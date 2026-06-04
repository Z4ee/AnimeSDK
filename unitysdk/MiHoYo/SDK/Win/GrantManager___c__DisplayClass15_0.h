#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/GrantType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GRANTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184CCC70)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__DISPLAYCLASS15_0__NEWDEVICEGRANTMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x184D0360)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager___c__DisplayClass15_0_TypeDefinitionIndex = 9021;

	class GrantManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* ticket; // 0x10
		::System::String* url; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x20
		::MiHoYo::SDK::GrantType type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _NewDeviceGrantMessage_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__DISPLAYCLASS15_0__NEWDEVICEGRANTMESSAGE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
