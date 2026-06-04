#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShieldMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_6B526041C2440C65_METHOD_3_550594BECB32A1E8_OFFSET UNITYSDK_OFFSET(0xFFBAA30)
#define CLASS_3_6B526041C2440C65_METHOD_3_A4F7C7DA26DD198B_OFFSET UNITYSDK_OFFSET(0xFFBA920)
#define CLASS_3_6B526041C2440C65_METHOD_3_F1B667460164B5A2_OFFSET UNITYSDK_OFFSET(0xFFBABD0)
#define CLASS_3_6B526041C2440C65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFFBA5A0)
#define CLASS_3_6B526041C2440C65__CTOR_OFFSET UNITYSDK_OFFSET(0xFFBA550)

inline static constexpr unsigned int Class_3_6B526041C2440C65_TypeDefinitionIndex = 51570;

class Class_3_6B526041C2440C65 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShieldMax*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + CLASS_3_6B526041C2440C65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B526041C2440C65_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_A4F7C7DA26DD198B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6B526041C2440C65_METHOD_3_A4F7C7DA26DD198B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_550594BECB32A1E8(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_6B526041C2440C65_METHOD_3_550594BECB32A1E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1B667460164B5A2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6B526041C2440C65_METHOD_3_F1B667460164B5A2_OFFSET))(this, a1);
	}
};
