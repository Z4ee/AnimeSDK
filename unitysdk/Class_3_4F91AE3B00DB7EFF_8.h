#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_B845218F1B6B1C41;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1256EE40)
#define CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1256EE10)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_8_TypeDefinitionIndex = 49424;

class Class_3_4F91AE3B00DB7EFF_8 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B845218F1B6B1C41*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B845218F1B6B1C41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B845218F1B6B1C41*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET))(this);
	}
};
