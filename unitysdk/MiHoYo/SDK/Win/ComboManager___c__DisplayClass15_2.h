#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass15_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF500B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_2__LOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x1CF500C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass15_2_TypeDefinitionIndex = 21506;

	class ComboManager___c__DisplayClass15_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass15_1* CS___8__locals2; // 0x10
		::MiHoYo::SDK::JSONNode* extInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_2__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_2__LOGIN_B__4_OFFSET))(this);
		}
	};
}
