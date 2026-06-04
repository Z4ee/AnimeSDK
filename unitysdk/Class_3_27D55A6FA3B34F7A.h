#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareLastKillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27D55A6FA3B34F7A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x136842A0)
#define CLASS_3_27D55A6FA3B34F7A__CTOR_OFFSET UNITYSDK_OFFSET(0x13684270)

inline static constexpr unsigned int Class_3_27D55A6FA3B34F7A_TypeDefinitionIndex = 50982;

class Class_3_27D55A6FA3B34F7A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareLastKillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + CLASS_3_27D55A6FA3B34F7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27D55A6FA3B34F7A_EVALUATE_OFFSET))(this);
	}
};
