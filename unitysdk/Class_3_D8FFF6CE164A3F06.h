#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureAbortAttack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D8FFF6CE164A3F06_METHOD_3_88AC3355284444AB_OFFSET UNITYSDK_OFFSET(0xA447970)
#define CLASS_3_D8FFF6CE164A3F06_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA447920)
#define CLASS_3_D8FFF6CE164A3F06__CTOR_OFFSET UNITYSDK_OFFSET(0xA4478F0)

inline static constexpr unsigned int Class_3_D8FFF6CE164A3F06_TypeDefinitionIndex = 46686;

class Class_3_D8FFF6CE164A3F06 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureAbortAttack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureAbortAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureAbortAttack*))((::PBYTE)hIl2Cpp + CLASS_3_D8FFF6CE164A3F06__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FFF6CE164A3F06_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_88AC3355284444AB(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_D8FFF6CE164A3F06_METHOD_3_88AC3355284444AB_OFFSET))(a1);
	}
};
