#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePreShowStanceBreakMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_99ED0087DE7D3A51_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A6BBF70)
#define CLASS_3_99ED0087DE7D3A51__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BBF40)

inline static constexpr unsigned int Class_3_99ED0087DE7D3A51_TypeDefinitionIndex = 54919;

class Class_3_99ED0087DE7D3A51 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_3_99ED0087DE7D3A51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99ED0087DE7D3A51_EVALUATE_OFFSET))(this);
	}
};
