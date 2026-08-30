#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_77F0E8B5F821AE63;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDAAF840)
#define CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET UNITYSDK_OFFSET(0xDAAF810)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_18_TypeDefinitionIndex = 53929;

class Class_3_4F91AE3B00DB7EFF_18 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_77F0E8B5F821AE63*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_77F0E8B5F821AE63* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_77F0E8B5F821AE63*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET))(this);
	}
};
