#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_0EB17C6B86E340AC_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_19_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18F1D970)
#define CLASS_3_4F91AE3B00DB7EFF_19__CTOR_OFFSET UNITYSDK_OFFSET(0x18F1D940)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_19_TypeDefinitionIndex = 51370;

class Class_3_4F91AE3B00DB7EFF_19 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_0EB17C6B86E340AC_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_0EB17C6B86E340AC_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_0EB17C6B86E340AC_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_19_EVALUATE_OFFSET))(this);
	}
};
