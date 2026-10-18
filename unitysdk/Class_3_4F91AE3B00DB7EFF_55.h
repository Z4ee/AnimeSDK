#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_B6CB548C28900B6D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_55_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A514D0)
#define CLASS_3_4F91AE3B00DB7EFF_55__CTOR_OFFSET UNITYSDK_OFFSET(0x15A514A0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_55_TypeDefinitionIndex = 55032;

class Class_3_4F91AE3B00DB7EFF_55 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B6CB548C28900B6D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B6CB548C28900B6D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B6CB548C28900B6D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_55_EVALUATE_OFFSET))(this);
	}
};
