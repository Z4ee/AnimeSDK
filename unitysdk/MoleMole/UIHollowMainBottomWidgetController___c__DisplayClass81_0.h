#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBAB40)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__MOVELEFTAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x17DBAB50)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__MOVELEFTAVATAR_B__2_OFFSET UNITYSDK_OFFSET(0x17DBAD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass81_0_TypeDefinitionIndex = 83689;

	class UIHollowMainBottomWidgetController___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x18
		::UnityEngine::Transform* nextTran; // 0x20
		::UnityEngine::Animation* currentAnim; // 0x28
		::System::Int32 nextSlot; // 0x30
		::System::Int32 currentSlot; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoveLeftAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__MOVELEFTAVATAR_B__0_OFFSET))(this);
		}

		::System::Void _MoveLeftAvatar_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_0__MOVELEFTAVATAR_B__2_OFFSET))(this);
		}
	};
}
