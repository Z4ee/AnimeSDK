#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FD5CF626EB7D21F.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Enum_3_DB663931210BBC27_7.h"
#include "unitysdk/Struct_2_545C436C5B39D527.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVRBossBattleInfoPageController; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x126A9AF0)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_B__1_OFFSET UNITYSDK_OFFSET(0x126A9B00)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET UNITYSDK_OFFSET(0x126A9B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass50_0_TypeDefinitionIndex = 77303;

	class UIVRBossBattleInfoPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Struct_2_545C436C5B39D527 battleTypeData; // 0x10
		::MoleMole::UIVRBossBattleInfoPageController* __4__this; // 0x28
		::Enum_3_0FD5CF626EB7D21F type; // 0x30
		::Enum_3_A3F38457E644339A rewardBuffGameTag; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_B__1_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_g__Continue_0(::Enum_3_DB663931210BBC27_7 noReward)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET))(this, noReward);
		}
	};
}
