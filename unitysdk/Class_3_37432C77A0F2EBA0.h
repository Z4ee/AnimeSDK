#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class StackWeakness; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_37432C77A0F2EBA0_METHOD_3_F2801B68A5E4992E_OFFSET UNITYSDK_OFFSET(0xA380D20)
#define CLASS_3_37432C77A0F2EBA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3809B0)
#define CLASS_3_37432C77A0F2EBA0__CTOR_OFFSET UNITYSDK_OFFSET(0xA380980)

inline static constexpr unsigned int Class_3_37432C77A0F2EBA0_TypeDefinitionIndex = 51983;

class Class_3_37432C77A0F2EBA0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_37432C77A0F2EBA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37432C77A0F2EBA0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F2801B68A5E4992E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_37432C77A0F2EBA0_METHOD_3_F2801B68A5E4992E_OFFSET))(this, a1, a2);
	}
};
