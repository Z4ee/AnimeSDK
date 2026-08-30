#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass18_0; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D24DF0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__ONMDKORAUTHTICKETLOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x15D25570)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass18_1_TypeDefinitionIndex = 9355;

	class ComboManager___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* extInfo; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass18_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__ONMDKORAUTHTICKETLOGIN_B__2_OFFSET))(this);
		}
	};
}
