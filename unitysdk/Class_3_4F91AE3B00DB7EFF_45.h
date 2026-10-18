#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_BEE193CF3FB5E227;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_45_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159FB9D0)
#define CLASS_3_4F91AE3B00DB7EFF_45__CTOR_OFFSET UNITYSDK_OFFSET(0x159FB9A0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_45_TypeDefinitionIndex = 54572;

class Class_3_4F91AE3B00DB7EFF_45 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_BEE193CF3FB5E227*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BEE193CF3FB5E227* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BEE193CF3FB5E227*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_45_EVALUATE_OFFSET))(this);
	}
};
