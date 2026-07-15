#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7B4568DFACDC8DFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17C71310)
#define CLASS_3_7B4568DFACDC8DFA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C712E0)

inline static constexpr unsigned int Class_3_7B4568DFACDC8DFA_TypeDefinitionIndex = 49760;

class Class_3_7B4568DFACDC8DFA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ST_Parkour_ByCompareRank*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + CLASS_3_7B4568DFACDC8DFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B4568DFACDC8DFA_EVALUATE_OFFSET))(this);
	}
};
