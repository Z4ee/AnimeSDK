#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9654EDC4BC82BD07.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_2_A80ABFEF6EF4F1D3_METHOD_2_5666D0481859FDE1_OFFSET UNITYSDK_OFFSET(0x17D76310)
#define CLASS_2_A80ABFEF6EF4F1D3_METHOD_2_BDFFBE02F7AE5068_OFFSET UNITYSDK_OFFSET(0x17D76440)
#define CLASS_2_A80ABFEF6EF4F1D3_ONHOVER_OFFSET UNITYSDK_OFFSET(0x17D76260)
#define CLASS_2_A80ABFEF6EF4F1D3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D764A0)

inline static constexpr unsigned int Class_2_A80ABFEF6EF4F1D3_TypeDefinitionIndex = 76035;

class Class_2_A80ABFEF6EF4F1D3 : public ::Class_1_9654EDC4BC82BD07
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80ABFEF6EF4F1D3__CTOR_OFFSET))(this);
	}

	::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_A80ABFEF6EF4F1D3_ONHOVER_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5666D0481859FDE1(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_A80ABFEF6EF4F1D3_METHOD_2_5666D0481859FDE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BDFFBE02F7AE5068(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_2_A80ABFEF6EF4F1D3_METHOD_2_BDFFBE02F7AE5068_OFFSET))(this, a1);
	}
};
