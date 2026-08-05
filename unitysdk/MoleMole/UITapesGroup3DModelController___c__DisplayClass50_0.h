#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITapesGroup3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS50_0__CIRCLETAPE_B__0_OFFSET UNITYSDK_OFFSET(0x119FC3C0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119FC3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass50_0_TypeDefinitionIndex = 60825;

	class UITapesGroup3DModelController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* onEasingComplete; // 0x10
		::MoleMole::UITapesGroup3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _CircleTape_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS50_0__CIRCLETAPE_B__0_OFFSET))(this);
		}
	};
}
