#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1A8B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS37_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x15D2D6C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass37_0_TypeDefinitionIndex = 9368;

	class ComboManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithGameNotification_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS37_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET))(this, a1);
		}
	};
}
