#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_AF570AE2DDBD035B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_31_EVALUATE_OFFSET UNITYSDK_OFFSET(0x152EA7F0)
#define CLASS_3_4F91AE3B00DB7EFF_31__CTOR_OFFSET UNITYSDK_OFFSET(0x152EA7C0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_31_TypeDefinitionIndex = 54103;

class Class_3_4F91AE3B00DB7EFF_31 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_AF570AE2DDBD035B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_AF570AE2DDBD035B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_AF570AE2DDBD035B*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_31_EVALUATE_OFFSET))(this);
	}
};
