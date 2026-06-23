#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardItemBtnWidgetController___c__DisplayClass10_0; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1468A660)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_1__REFRESHMUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1468A670)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemBtnWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 55900;

	class UIHollowCardItemBtnWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardItemBtnWidgetController___c__DisplayClass10_0* CS___8__locals1; // 0x10
		::UnityEngine::Animation* animation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_1__REFRESHMUTE_B__0_OFFSET))(this);
		}
	};
}
