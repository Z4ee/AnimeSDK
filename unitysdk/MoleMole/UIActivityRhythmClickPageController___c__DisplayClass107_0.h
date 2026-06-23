#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1865EBB0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__PLAYREACHRANKEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1865EBC0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__PLAYREACHRANKEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1865EC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass107_0_TypeDefinitionIndex = 81300;

	class UIActivityRhythmClickPageController___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::System::String* effectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayReachRankEffect_b__0(::MoleMole::Battle::Entity* effEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__PLAYREACHRANKEFFECT_B__0_OFFSET))(this, effEntity);
		}

		::System::Void _PlayReachRankEffect_b__1(::MoleMole::Battle::Entity* effEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS107_0__PLAYREACHRANKEFFECT_B__1_OFFSET))(this, effEntity);
		}
	};
}
