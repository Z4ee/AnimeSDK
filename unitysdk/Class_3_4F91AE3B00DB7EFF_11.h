#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_87568F4B1AE1BC50;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1592B980)
#define CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1592B950)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_11_TypeDefinitionIndex = 52932;

class Class_3_4F91AE3B00DB7EFF_11 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_87568F4B1AE1BC50*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_87568F4B1AE1BC50* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_87568F4B1AE1BC50*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET))(this);
	}
};
