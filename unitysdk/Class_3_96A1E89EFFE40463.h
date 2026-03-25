#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsMatchTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_96A1E89EFFE40463_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8971910)
#define CLASS_3_96A1E89EFFE40463__CTOR_OFFSET UNITYSDK_OFFSET(0x89718E0)

inline static constexpr unsigned int Class_3_96A1E89EFFE40463_TypeDefinitionIndex = 43747;

class Class_3_96A1E89EFFE40463 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsMatchTeammateCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_3_96A1E89EFFE40463__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A1E89EFFE40463_EVALUATE_OFFSET))(this);
	}
};
