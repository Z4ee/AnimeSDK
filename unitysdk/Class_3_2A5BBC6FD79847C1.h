#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHeartDialScriptStep; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A5BBC6FD79847C1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13F1D0D0)
#define CLASS_3_2A5BBC6FD79847C1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1D0A0)

inline static constexpr unsigned int Class_3_2A5BBC6FD79847C1_TypeDefinitionIndex = 52844;

class Class_3_2A5BBC6FD79847C1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHeartDialScriptStep*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + CLASS_3_2A5BBC6FD79847C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A5BBC6FD79847C1_EVALUATE_OFFSET))(this);
	}
};
