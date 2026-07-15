#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_06ADCC0119836A04.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_3_44F5448E586D56A3_METHOD_3_57670FFB4DCA5F52_OFFSET UNITYSDK_OFFSET(0x169CBC20)
#define CLASS_3_44F5448E586D56A3_METHOD_3_BDFFBE02F7AE5068_OFFSET UNITYSDK_OFFSET(0x169CBCD0)
#define CLASS_3_44F5448E586D56A3_ONDRAG_OFFSET UNITYSDK_OFFSET(0x169CBBC0)
#define CLASS_3_44F5448E586D56A3__CTOR_OFFSET UNITYSDK_OFFSET(0x169CBD30)

inline static constexpr unsigned int Class_3_44F5448E586D56A3_TypeDefinitionIndex = 76033;

class Class_3_44F5448E586D56A3 : public ::Class_2_06ADCC0119836A04
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44F5448E586D56A3__CTOR_OFFSET))(this);
	}

	::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_44F5448E586D56A3_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57670FFB4DCA5F52(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_44F5448E586D56A3_METHOD_3_57670FFB4DCA5F52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BDFFBE02F7AE5068(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_3_44F5448E586D56A3_METHOD_3_BDFFBE02F7AE5068_OFFSET))(this, a1);
	}
};
