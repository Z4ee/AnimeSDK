#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3990)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS34_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x1C7E39A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass34_0_TypeDefinitionIndex = 21520;

	class ComboManager___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithGameNotification_b__0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS34_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET))(this, message);
		}
	};
}
