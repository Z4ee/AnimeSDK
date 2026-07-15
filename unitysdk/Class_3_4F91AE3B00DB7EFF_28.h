#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_890BC79DA352586D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E430C0)
#define CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET UNITYSDK_OFFSET(0x15E43090)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_28_TypeDefinitionIndex = 51418;

class Class_3_4F91AE3B00DB7EFF_28 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_890BC79DA352586D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_890BC79DA352586D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_890BC79DA352586D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET))(this);
	}
};
