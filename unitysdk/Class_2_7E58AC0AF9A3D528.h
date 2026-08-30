#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9654EDC4BC82BD07.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_2_7E58AC0AF9A3D528_METHOD_2_10E434F80CD4B5EC_OFFSET UNITYSDK_OFFSET(0x1A8B7380)
#define CLASS_2_7E58AC0AF9A3D528__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B7430)

inline static constexpr unsigned int Class_2_7E58AC0AF9A3D528_TypeDefinitionIndex = 79665;

class Class_2_7E58AC0AF9A3D528 : public ::Class_1_9654EDC4BC82BD07
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E58AC0AF9A3D528__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_10E434F80CD4B5EC(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7E58AC0AF9A3D528_METHOD_2_10E434F80CD4B5EC_OFFSET))(this, a1, a2);
	}
};
