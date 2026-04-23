#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_52DF42E136544C98___C__DISPLAYCLASS8_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB209FE0)
#define CLASS_1_52DF42E136544C98___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB209E90)

inline static constexpr unsigned int Class_1_52DF42E136544C98___c__DisplayClass8_0_TypeDefinitionIndex = 65742;

class Class_1_52DF42E136544C98___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DF42E136544C98___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _Create_b__0(::RPG::GameCore::DynamicFloat* x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_52DF42E136544C98___C__DISPLAYCLASS8_0__CREATE_B__0_OFFSET))(this, x);
	}
};
