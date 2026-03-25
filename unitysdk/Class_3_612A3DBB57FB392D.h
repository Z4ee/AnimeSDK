#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_612A3DBB57FB392D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x105F7FB0)
#define CLASS_3_612A3DBB57FB392D__CTOR_OFFSET UNITYSDK_OFFSET(0x105F7F80)

inline static constexpr unsigned int Class_3_612A3DBB57FB392D_TypeDefinitionIndex = 42655;

class Class_3_612A3DBB57FB392D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ConvinceByCompareHp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + CLASS_3_612A3DBB57FB392D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_612A3DBB57FB392D_EVALUATE_OFFSET))(this);
	}
};
