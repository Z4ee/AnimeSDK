#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9654EDC4BC82BD07.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_2_06ADCC0119836A04_METHOD_2_0D9FC617797DC19C_OFFSET UNITYSDK_OFFSET(0x17C89110)
#define CLASS_2_06ADCC0119836A04__CTOR_OFFSET UNITYSDK_OFFSET(0x17C892C0)

inline static constexpr unsigned int Class_2_06ADCC0119836A04_TypeDefinitionIndex = 76034;

class Class_2_06ADCC0119836A04 : public ::Class_1_9654EDC4BC82BD07
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06ADCC0119836A04__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_0D9FC617797DC19C(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_06ADCC0119836A04_METHOD_2_0D9FC617797DC19C_OFFSET))(a1, a2);
	}
};
