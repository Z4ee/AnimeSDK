#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShieldMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_8BA85CE2C054C3AA_METHOD_3_18B9DFD4A1656AD9_OFFSET UNITYSDK_OFFSET(0x9223F90)
#define CLASS_3_8BA85CE2C054C3AA_METHOD_3_BD3BF037640AC08E_OFFSET UNITYSDK_OFFSET(0x92240A0)
#define CLASS_3_8BA85CE2C054C3AA_METHOD_3_F1B667460164B5A2_OFFSET UNITYSDK_OFFSET(0x92241A0)
#define CLASS_3_8BA85CE2C054C3AA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9223AC0)
#define CLASS_3_8BA85CE2C054C3AA__CTOR_OFFSET UNITYSDK_OFFSET(0x9223A70)

inline static constexpr unsigned int Class_3_8BA85CE2C054C3AA_TypeDefinitionIndex = 50901;

class Class_3_8BA85CE2C054C3AA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShieldMax*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_18B9DFD4A1656AD9(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_METHOD_3_18B9DFD4A1656AD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BD3BF037640AC08E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_METHOD_3_BD3BF037640AC08E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1B667460164B5A2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_METHOD_3_F1B667460164B5A2_OFFSET))(this, a1);
	}
};
