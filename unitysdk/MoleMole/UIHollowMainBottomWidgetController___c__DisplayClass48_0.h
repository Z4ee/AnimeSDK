#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7305149E3DC417E;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8AD90)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__PLAYGETITEMANIM_B__0_OFFSET UNITYSDK_OFFSET(0x16F8ADA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass48_0_TypeDefinitionIndex = 47531;

	class UIHollowMainBottomWidgetController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::Class_1_D7305149E3DC417E* entry; // 0x10
		::System::Boolean add; // 0x18
		::System::Int32 count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetItemAnim_b__0(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__PLAYGETITEMANIM_B__0_OFFSET))(this, doneCb);
		}
	};
}
