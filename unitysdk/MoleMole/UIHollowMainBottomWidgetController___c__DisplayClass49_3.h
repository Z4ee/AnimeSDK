#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7305149E3DC417E;
namespace MoleMole { class UIHollowMainBottomWidgetController___c__DisplayClass49_0; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18499E10)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__PLAYGETCOINANIM_B__2_OFFSET UNITYSDK_OFFSET(0x18499E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_3_TypeDefinitionIndex = 47522;

	class UIHollowMainBottomWidgetController___c__DisplayClass49_3 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainBottomWidgetController___c__DisplayClass49_0* CS___8__locals3; // 0x10
		::Class_1_D7305149E3DC417E* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__2(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__PLAYGETCOINANIM_B__2_OFFSET))(this, doneCb);
		}
	};
}
