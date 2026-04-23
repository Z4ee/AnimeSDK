#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_18B9DFD4A1656AD9_OFFSET UNITYSDK_OFFSET(0x12B18090)
#define CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_C8A629FCCA32DC64_OFFSET UNITYSDK_OFFSET(0x12B181A0)
#define CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_DE4733C7BBF3B636_OFFSET UNITYSDK_OFFSET(0x12B18350)
#define CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_F1B667460164B5A2_OFFSET UNITYSDK_OFFSET(0x12B18690)
#define CLASS_3_8BA85CE2C054C3AA_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B179E0)
#define CLASS_3_8BA85CE2C054C3AA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B17970)

inline static constexpr unsigned int Class_3_8BA85CE2C054C3AA_1_TypeDefinitionIndex = 50902;

class Class_3_8BA85CE2C054C3AA_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShield*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_2; // 0x30
	::RPG::GameCore::StringHash Field_3_1; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_18B9DFD4A1656AD9(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_18B9DFD4A1656AD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C8A629FCCA32DC64(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_C8A629FCCA32DC64_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1B667460164B5A2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_F1B667460164B5A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_DE4733C7BBF3B636(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8BA85CE2C054C3AA_1_METHOD_3_DE4733C7BBF3B636_OFFSET))(this, a1, a2);
	}
};
