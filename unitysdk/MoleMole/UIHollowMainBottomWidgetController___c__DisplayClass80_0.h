#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168B0B80)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x168B0B90)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS80_0__MOVERIGHTAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x168B0CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass80_0_TypeDefinitionIndex = 57755;

	class UIHollowMainBottomWidgetController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::UnityEngine::Animation* currentAnim; // 0x20
		::UnityEngine::Transform* currentTran; // 0x28
		::System::Int32 addSlot; // 0x30
		::System::Int32 currentSlot; // 0x34

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
