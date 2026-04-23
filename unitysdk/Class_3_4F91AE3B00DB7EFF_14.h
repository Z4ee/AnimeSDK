#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_1DA131B5B4B4CFC5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x907B190)
#define CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET UNITYSDK_OFFSET(0x907B160)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_14_TypeDefinitionIndex = 49622;

class Class_3_4F91AE3B00DB7EFF_14 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_1DA131B5B4B4CFC5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1DA131B5B4B4CFC5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1DA131B5B4B4CFC5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET))(this);
	}
};
