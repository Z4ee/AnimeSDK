#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS109_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173D8420)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS109_0__SHOWNPCEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x173D8430)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass109_0_TypeDefinitionIndex = 87495;

	class UIActivityRhythmClickPageController___c__DisplayClass109_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* effectEntity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS109_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowNPCEffect_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS109_0__SHOWNPCEFFECT_B__0_OFFSET))(this);
		}
	};
}
