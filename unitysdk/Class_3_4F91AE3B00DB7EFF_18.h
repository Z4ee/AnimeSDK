#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_7EEC785B6C258616;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4A6B10)
#define CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A6AE0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_18_TypeDefinitionIndex = 49665;

class Class_3_4F91AE3B00DB7EFF_18 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_7EEC785B6C258616*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_7EEC785B6C258616* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_7EEC785B6C258616*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET))(this);
	}
};
