#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass17_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8279A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_2__LOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x1B828900)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass17_2_TypeDefinitionIndex = 9353;

	class ComboManager___c__DisplayClass17_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* extInfo; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass17_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_2__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_2__LOGIN_B__4_OFFSET))(this);
		}
	};
}
