#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1813DE50)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS77_0__SHOWROLEAVATARINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1813DE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass77_0_TypeDefinitionIndex = 47524;

	class UIHollowMainBottomWidgetController___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* hpTran; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x18
		::System::Boolean show; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowRoleAvatarInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS77_0__SHOWROLEAVATARINFO_B__0_OFFSET))(this);
		}
	};
}
