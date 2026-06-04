#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_F3347716CE7811F5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC445E70)
#define CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET UNITYSDK_OFFSET(0xC445E40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_11_TypeDefinitionIndex = 50163;

class Class_3_4F91AE3B00DB7EFF_11 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_F3347716CE7811F5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F3347716CE7811F5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F3347716CE7811F5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET))(this);
	}
};
