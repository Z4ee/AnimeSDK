#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_06ADCC0119836A04.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_3_69F3255E1016B64E_METHOD_3_A4B4FCCA06181FDF_OFFSET UNITYSDK_OFFSET(0x1561D800)
#define CLASS_3_69F3255E1016B64E_METHOD_3_BDFFBE02F7AE5068_OFFSET UNITYSDK_OFFSET(0x1561D8D0)
#define CLASS_3_69F3255E1016B64E_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1561D7A0)
#define CLASS_3_69F3255E1016B64E__CTOR_OFFSET UNITYSDK_OFFSET(0x1561D930)

inline static constexpr unsigned int Class_3_69F3255E1016B64E_TypeDefinitionIndex = 76036;

class Class_3_69F3255E1016B64E : public ::Class_2_06ADCC0119836A04
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69F3255E1016B64E__CTOR_OFFSET))(this);
	}

	::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_69F3255E1016B64E_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A4B4FCCA06181FDF(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_69F3255E1016B64E_METHOD_3_A4B4FCCA06181FDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BDFFBE02F7AE5068(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_3_69F3255E1016B64E_METHOD_3_BDFFBE02F7AE5068_OFFSET))(this, a1);
	}
};
