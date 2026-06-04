#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_9DEC3C29CD3B3CFE_METHOD_3_ADB2171AF9BBB5C3_OFFSET UNITYSDK_OFFSET(0xB04AE40)
#define CLASS_3_9DEC3C29CD3B3CFE_METHOD_3_F0479BC8A45C30F8_OFFSET UNITYSDK_OFFSET(0xB04AF70)
#define CLASS_3_9DEC3C29CD3B3CFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB04A810)
#define CLASS_3_9DEC3C29CD3B3CFE__CTOR_OFFSET UNITYSDK_OFFSET(0xB04A7E0)

inline static constexpr unsigned int Class_3_9DEC3C29CD3B3CFE_TypeDefinitionIndex = 51977;

class Class_3_9DEC3C29CD3B3CFE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackShield*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackShield*))((::PBYTE)hIl2Cpp + CLASS_3_9DEC3C29CD3B3CFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DEC3C29CD3B3CFE_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_ADB2171AF9BBB5C3(::RPG::GameCore::ShieldModifyFormulaType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ShieldModifyFormulaType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_9DEC3C29CD3B3CFE_METHOD_3_ADB2171AF9BBB5C3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F0479BC8A45C30F8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_9DEC3C29CD3B3CFE_METHOD_3_F0479BC8A45C30F8_OFFSET))(this, a1, a2);
	}
};
