#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_72A57720FB7AD5B6_ENTER_OFFSET UNITYSDK_OFFSET(0x1996BC60)
#define CLASS_1_72A57720FB7AD5B6_EXIT_OFFSET UNITYSDK_OFFSET(0x1996BD00)
#define CLASS_1_72A57720FB7AD5B6_METHOD_1_C8C47A356EEBDCE0_1_OFFSET UNITYSDK_OFFSET(0x1996BDE0)
#define CLASS_1_72A57720FB7AD5B6_METHOD_1_C8C47A356EEBDCE0_OFFSET UNITYSDK_OFFSET(0x1996BD90)
#define CLASS_1_72A57720FB7AD5B6_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1996BD40)
#define CLASS_1_72A57720FB7AD5B6_TICK_OFFSET UNITYSDK_OFFSET(0x1996BCB0)
#define CLASS_1_72A57720FB7AD5B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1996BE30)

inline static constexpr unsigned int Class_1_72A57720FB7AD5B6_TypeDefinitionIndex = 65894;

class Class_1_72A57720FB7AD5B6 : public ::System::Object
{
public:
	::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_EXIT_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_ONDRAG_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8C47A356EEBDCE0(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_METHOD_1_C8C47A356EEBDCE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8C47A356EEBDCE0_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_72A57720FB7AD5B6_METHOD_1_C8C47A356EEBDCE0_1_OFFSET))(this, a1);
	}
};
