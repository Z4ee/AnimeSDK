#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7305149E3DC417E;
namespace MoleMole { class UIHollowMainBottomWidgetController___c__DisplayClass49_0; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18842630)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__PLAYGETCOINANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18842640)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_2_TypeDefinitionIndex = 83693;

	class UIHollowMainBottomWidgetController___c__DisplayClass49_2 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainBottomWidgetController___c__DisplayClass49_0* CS___8__locals2; // 0x10
		::Class_1_D7305149E3DC417E* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__1(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__PLAYGETCOINANIM_B__1_OFFSET))(this, doneCb);
		}
	};
}
