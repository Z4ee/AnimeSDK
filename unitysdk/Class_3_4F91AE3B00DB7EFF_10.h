#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_87568F4B1AE1BC50;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_10_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19124060)
#define CLASS_3_4F91AE3B00DB7EFF_10__CTOR_OFFSET UNITYSDK_OFFSET(0x19124030)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_10_TypeDefinitionIndex = 53206;

class Class_3_4F91AE3B00DB7EFF_10 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_87568F4B1AE1BC50*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_87568F4B1AE1BC50* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_87568F4B1AE1BC50*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_10_EVALUATE_OFFSET))(this);
	}
};
