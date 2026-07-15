#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerEventKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CLASS_1_9654EDC4BC82BD07_METHOD_1_8AA834DFEC6343F0_OFFSET UNITYSDK_OFFSET(0x14E68260)
#define CLASS_1_9654EDC4BC82BD07_METHOD_1_BA6B193833321F4A_1_OFFSET UNITYSDK_OFFSET(0x14E68650)
#define CLASS_1_9654EDC4BC82BD07_METHOD_1_BA6B193833321F4A_OFFSET UNITYSDK_OFFSET(0x14E685B0)
#define CLASS_1_9654EDC4BC82BD07_METHOD_1_C9FBDD097CE17106_1_OFFSET UNITYSDK_OFFSET(0x14E686A0)
#define CLASS_1_9654EDC4BC82BD07_METHOD_1_C9FBDD097CE17106_OFFSET UNITYSDK_OFFSET(0x14E68560)
#define CLASS_1_9654EDC4BC82BD07_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14E68600)
#define CLASS_1_9654EDC4BC82BD07_ONHOVER_OFFSET UNITYSDK_OFFSET(0x14E68510)
#define CLASS_1_9654EDC4BC82BD07__CTOR_OFFSET UNITYSDK_OFFSET(0x14E686F0)

inline static constexpr unsigned int Class_1_9654EDC4BC82BD07_TypeDefinitionIndex = 76042;

class Class_1_9654EDC4BC82BD07 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8AA834DFEC6343F0(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_METHOD_1_8AA834DFEC6343F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_ONHOVER_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9FBDD097CE17106(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_METHOD_1_C9FBDD097CE17106_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA6B193833321F4A(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_METHOD_1_BA6B193833321F4A_OFFSET))(this, a1, a2);
	}

	::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA6B193833321F4A_1(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_METHOD_1_BA6B193833321F4A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9FBDD097CE17106_1(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CLASS_1_9654EDC4BC82BD07_METHOD_1_C9FBDD097CE17106_1_OFFSET))(this, a1);
	}
};
