#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_4DA9E17D85B134D8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_41_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19AE9050)
#define CLASS_3_4F91AE3B00DB7EFF_41__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE9020)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_41_TypeDefinitionIndex = 54709;

class Class_3_4F91AE3B00DB7EFF_41 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_4DA9E17D85B134D8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_4DA9E17D85B134D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_4DA9E17D85B134D8*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_41_EVALUATE_OFFSET))(this);
	}
};
