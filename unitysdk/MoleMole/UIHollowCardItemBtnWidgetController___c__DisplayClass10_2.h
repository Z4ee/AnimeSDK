#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardItemBtnWidgetController___c__DisplayClass10_0; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14678480)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_2__REFRESHMUTE_B__1_OFFSET UNITYSDK_OFFSET(0x14678490)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemBtnWidgetController___c__DisplayClass10_2_TypeDefinitionIndex = 47162;

	class UIHollowCardItemBtnWidgetController___c__DisplayClass10_2 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* animation; // 0x10
		::MoleMole::UIHollowCardItemBtnWidgetController___c__DisplayClass10_0* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___C__DISPLAYCLASS10_2__REFRESHMUTE_B__1_OFFSET))(this);
		}
	};
}
