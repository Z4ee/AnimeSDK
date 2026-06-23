#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass19_3; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE79F90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_4__LOGIN_B__14_OFFSET UNITYSDK_OFFSET(0x1BE79FA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass19_4_TypeDefinitionIndex = 21168;

	class ComboManager___c__DisplayClass19_4 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* extInfo; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass19_3* CS___8__locals4; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_4__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_4__LOGIN_B__14_OFFSET))(this);
		}
	};
}
