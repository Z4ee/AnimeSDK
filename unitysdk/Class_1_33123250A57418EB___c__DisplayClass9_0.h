#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_33123250A57418EB;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }

#define CLASS_1_33123250A57418EB___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10678BE0)
#define CLASS_1_33123250A57418EB___C__DISPLAYCLASS9_0__SWITCHTO_B__0_OFFSET UNITYSDK_OFFSET(0x10678F00)

inline static constexpr unsigned int Class_1_33123250A57418EB___c__DisplayClass9_0_TypeDefinitionIndex = 63922;

class Class_1_33123250A57418EB___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_33123250A57418EB* __4__this; // 0x10
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* lastStateController; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SwitchTo_b__0(::RPG::Client::Prop::ChimeraPreparationState state)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB___C__DISPLAYCLASS9_0__SWITCHTO_B__0_OFFSET))(this, state);
	}
};
