#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_200046EFE29838D2___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA020)
#define CLASS_1_200046EFE29838D2___C__DISPLAYCLASS9_0__GETHPRATIOINCLUDESHIELD_B__0_OFFSET UNITYSDK_OFFSET(0x175FA040)

inline static constexpr unsigned int Class_1_200046EFE29838D2___c__DisplayClass9_0_TypeDefinitionIndex = 51879;

class Class_1_200046EFE29838D2___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* ownerActual; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetHPRatioIncludeShield_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2___C__DISPLAYCLASS9_0__GETHPRATIOINCLUDESHIELD_B__0_OFFSET))(this, a1);
	}
};
