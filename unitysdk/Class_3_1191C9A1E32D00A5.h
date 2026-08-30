#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckFightFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1191C9A1E32D00A5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155C4840)
#define CLASS_3_1191C9A1E32D00A5__CTOR_OFFSET UNITYSDK_OFFSET(0x155C4810)

inline static constexpr unsigned int Class_3_1191C9A1E32D00A5_TypeDefinitionIndex = 54710;

class Class_3_1191C9A1E32D00A5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckFightFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + CLASS_3_1191C9A1E32D00A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1191C9A1E32D00A5_EVALUATE_OFFSET))(this);
	}
};
