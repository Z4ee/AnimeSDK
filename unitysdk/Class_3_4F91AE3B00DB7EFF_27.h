#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_70CD0600B28C3054;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_27_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13BA2A20)
#define CLASS_3_4F91AE3B00DB7EFF_27__CTOR_OFFSET UNITYSDK_OFFSET(0x13BA29F0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_27_TypeDefinitionIndex = 50367;

class Class_3_4F91AE3B00DB7EFF_27 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_70CD0600B28C3054*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_70CD0600B28C3054* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_70CD0600B28C3054*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_27_EVALUATE_OFFSET))(this);
	}
};
