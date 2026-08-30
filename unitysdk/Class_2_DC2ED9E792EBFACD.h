#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9654EDC4BC82BD07.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_2_DC2ED9E792EBFACD_METHOD_2_062CF31E1D130B69_OFFSET UNITYSDK_OFFSET(0x1A7F9CD0)
#define CLASS_2_DC2ED9E792EBFACD_METHOD_2_6467C0B4A67681DA_OFFSET UNITYSDK_OFFSET(0x1A7F9D70)
#define CLASS_2_DC2ED9E792EBFACD_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1A7F99E0)
#define CLASS_2_DC2ED9E792EBFACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FA2A0)

inline static constexpr unsigned int Class_2_DC2ED9E792EBFACD_TypeDefinitionIndex = 79672;

class Class_2_DC2ED9E792EBFACD : public ::Class_1_9654EDC4BC82BD07
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC2ED9E792EBFACD__CTOR_OFFSET))(this);
	}

	::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_DC2ED9E792EBFACD_ONHOVER_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_062CF31E1D130B69(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DC2ED9E792EBFACD_METHOD_2_062CF31E1D130B69_OFFSET))(this, a1);
	}

	::System::Void Method_2_6467C0B4A67681DA(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_DC2ED9E792EBFACD_METHOD_2_6467C0B4A67681DA_OFFSET))(this, a1, a2);
	}
};
