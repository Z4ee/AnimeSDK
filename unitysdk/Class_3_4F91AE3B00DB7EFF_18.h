#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_97C5C900501AC698;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAF62C30)
#define CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET UNITYSDK_OFFSET(0xAF62C00)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_18_TypeDefinitionIndex = 50320;

class Class_3_4F91AE3B00DB7EFF_18 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_97C5C900501AC698*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_97C5C900501AC698* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_97C5C900501AC698*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_18_EVALUATE_OFFSET))(this);
	}
};
