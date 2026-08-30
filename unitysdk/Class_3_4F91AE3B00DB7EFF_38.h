#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_52F0D25B8A5C0616;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_38_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12E71B60)
#define CLASS_3_4F91AE3B00DB7EFF_38__CTOR_OFFSET UNITYSDK_OFFSET(0x12E71B30)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_38_TypeDefinitionIndex = 54377;

class Class_3_4F91AE3B00DB7EFF_38 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_52F0D25B8A5C0616*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_52F0D25B8A5C0616* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_52F0D25B8A5C0616*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_38_EVALUATE_OFFSET))(this);
	}
};
