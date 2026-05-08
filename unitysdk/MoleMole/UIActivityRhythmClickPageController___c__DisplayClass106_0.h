#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4CB60)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYBANGBOOEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x12B4CB70)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYBANGBOOEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x12B4CC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass106_0_TypeDefinitionIndex = 46816;

	class UIActivityRhythmClickPageController___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::System::String* effectName; // 0x10
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBangbooEffect_b__0(::MoleMole::Battle::Entity* effEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYBANGBOOEFFECT_B__0_OFFSET))(this, effEntity);
		}

		::System::Void _PlayBangbooEffect_b__1(::MoleMole::Battle::Entity* effEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYBANGBOOEFFECT_B__1_OFFSET))(this, effEntity);
		}
	};
}
