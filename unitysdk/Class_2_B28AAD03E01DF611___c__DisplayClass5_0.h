#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_B28AAD03E01DF611___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC380110)
#define CLASS_2_B28AAD03E01DF611___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xC3801C0)

inline static constexpr unsigned int Class_2_B28AAD03E01DF611___c__DisplayClass5_0_TypeDefinitionIndex = 71294;

class Class_2_B28AAD03E01DF611___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _SetupView_b__0(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET))(this, a1);
	}
};
