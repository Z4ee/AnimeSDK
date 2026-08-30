#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/System/Object.h"

class Class_3_329876128237FA4D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_329876128237FA4D___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAEBB00)
#define CLASS_3_329876128237FA4D___C__DISPLAYCLASS1_0___ONAFTERFIREEFFECTCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xBAEBB10)

inline static constexpr unsigned int Class_3_329876128237FA4D___c__DisplayClass1_0_TypeDefinitionIndex = 55917;

class Class_3_329876128237FA4D___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_3_329876128237FA4D* __4__this; // 0x10
	::RPG::GameCore::AliveStateMask aliveMask; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* __OnAfterFireEffectCompleted_b__0(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D___C__DISPLAYCLASS1_0___ONAFTERFIREEFFECTCOMPLETED_B__0_OFFSET))(this, a1);
	}
};
