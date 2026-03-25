#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B5DAD15F3665F4E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x109F3AF0)
#define CLASS_3_6B5DAD15F3665F4E__CTOR_OFFSET UNITYSDK_OFFSET(0x109F3AC0)

inline static constexpr unsigned int Class_3_6B5DAD15F3665F4E_TypeDefinitionIndex = 43630;

class Class_3_6B5DAD15F3665F4E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMonsterRank*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_3_6B5DAD15F3665F4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B5DAD15F3665F4E_EVALUATE_OFFSET))(this);
	}
};
