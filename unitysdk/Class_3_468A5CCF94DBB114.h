#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class StackWeakness; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_468A5CCF94DBB114_METHOD_3_5B0AC1FA6A644ADB_OFFSET UNITYSDK_OFFSET(0x99867E0)
#define CLASS_3_468A5CCF94DBB114_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9986490)
#define CLASS_3_468A5CCF94DBB114__CTOR_OFFSET UNITYSDK_OFFSET(0x9986460)

inline static constexpr unsigned int Class_3_468A5CCF94DBB114_TypeDefinitionIndex = 51315;

class Class_3_468A5CCF94DBB114 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_468A5CCF94DBB114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468A5CCF94DBB114_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5B0AC1FA6A644ADB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_468A5CCF94DBB114_METHOD_3_5B0AC1FA6A644ADB_OFFSET))(this, a1, a2);
	}
};
