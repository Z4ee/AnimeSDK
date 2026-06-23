#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18499EE0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x18499EF0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x1849A050)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass80_0_TypeDefinitionIndex = 47520;

	class UIHollowMainBottomWidgetController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* currentTran; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x18
		::UnityEngine::Animation* currentAnim; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Int32 currentSlot; // 0x30
		::System::Int32 addSlot; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoveRightAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__0_OFFSET))(this);
		}

		::System::Void _MoveRightAvatar_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__1_OFFSET))(this);
		}
	};
}
