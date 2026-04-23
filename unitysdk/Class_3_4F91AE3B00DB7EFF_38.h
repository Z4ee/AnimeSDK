#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_DA219FA494F35D19;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_38_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9554C30)
#define CLASS_3_4F91AE3B00DB7EFF_38__CTOR_OFFSET UNITYSDK_OFFSET(0x9554C00)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_38_TypeDefinitionIndex = 50624;

class Class_3_4F91AE3B00DB7EFF_38 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_DA219FA494F35D19*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DA219FA494F35D19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DA219FA494F35D19*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_38_EVALUATE_OFFSET))(this);
	}
};
