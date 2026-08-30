#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_1C3EE1F1A65C0138;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_36_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC305980)
#define CLASS_3_4F91AE3B00DB7EFF_36__CTOR_OFFSET UNITYSDK_OFFSET(0xC305950)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_36_TypeDefinitionIndex = 54375;

class Class_3_4F91AE3B00DB7EFF_36 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_1C3EE1F1A65C0138*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1C3EE1F1A65C0138* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1C3EE1F1A65C0138*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_36_EVALUATE_OFFSET))(this);
	}
};
