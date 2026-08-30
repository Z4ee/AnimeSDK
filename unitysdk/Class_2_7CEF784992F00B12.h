#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9654EDC4BC82BD07.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_2_7CEF784992F00B12_METHOD_2_C57420585FC44D28_OFFSET UNITYSDK_OFFSET(0x16412AC0)
#define CLASS_2_7CEF784992F00B12_METHOD_2_DADFCBE379303723_OFFSET UNITYSDK_OFFSET(0x164129B0)
#define CLASS_2_7CEF784992F00B12_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16412810)
#define CLASS_2_7CEF784992F00B12__CTOR_OFFSET UNITYSDK_OFFSET(0x16412B20)

inline static constexpr unsigned int Class_2_7CEF784992F00B12_TypeDefinitionIndex = 79671;

class Class_2_7CEF784992F00B12 : public ::Class_1_9654EDC4BC82BD07
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CEF784992F00B12__CTOR_OFFSET))(this);
	}

	::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7CEF784992F00B12_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DADFCBE379303723(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7CEF784992F00B12_METHOD_2_DADFCBE379303723_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C57420585FC44D28(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_2_7CEF784992F00B12_METHOD_2_C57420585FC44D28_OFFSET))(this, a1);
	}
};
