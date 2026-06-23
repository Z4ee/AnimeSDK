#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7305149E3DC417E;
namespace MoleMole { class UIHollowMainBottomWidgetController___c__DisplayClass49_0; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x169F1350)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_1__PLAYGETCOINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x169F1360)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_1_TypeDefinitionIndex = 47527;

	class UIHollowMainBottomWidgetController___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::Class_1_D7305149E3DC417E* item; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController___c__DisplayClass49_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__0(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_1__PLAYGETCOINANIM_B__0_OFFSET))(this, doneCb);
		}
	};
}
