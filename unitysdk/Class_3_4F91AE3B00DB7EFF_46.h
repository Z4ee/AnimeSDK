#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_5354087FF9599135;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_46_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16C99720)
#define CLASS_3_4F91AE3B00DB7EFF_46__CTOR_OFFSET UNITYSDK_OFFSET(0x16C996F0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_46_TypeDefinitionIndex = 52464;

class Class_3_4F91AE3B00DB7EFF_46 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_5354087FF9599135*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_5354087FF9599135* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_5354087FF9599135*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_46_EVALUATE_OFFSET))(this);
	}
};
