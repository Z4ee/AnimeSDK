#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_F0E2079A5547C5F3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_33_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A75EC10)
#define CLASS_3_4F91AE3B00DB7EFF_33__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75EBE0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_33_TypeDefinitionIndex = 54106;

class Class_3_4F91AE3B00DB7EFF_33 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_F0E2079A5547C5F3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F0E2079A5547C5F3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F0E2079A5547C5F3*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_33_EVALUATE_OFFSET))(this);
	}
};
