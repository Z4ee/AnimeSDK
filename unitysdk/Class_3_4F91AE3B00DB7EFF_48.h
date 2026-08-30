#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_CCCC7AB2EA54CF7B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_48_EVALUATE_OFFSET UNITYSDK_OFFSET(0x167AF650)
#define CLASS_3_4F91AE3B00DB7EFF_48__CTOR_OFFSET UNITYSDK_OFFSET(0x167AF620)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_48_TypeDefinitionIndex = 55093;

class Class_3_4F91AE3B00DB7EFF_48 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_CCCC7AB2EA54CF7B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_CCCC7AB2EA54CF7B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_CCCC7AB2EA54CF7B*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_48_EVALUATE_OFFSET))(this);
	}
};
