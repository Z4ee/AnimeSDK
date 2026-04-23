#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_5C624EAA3CE758E5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_39_EVALUATE_OFFSET UNITYSDK_OFFSET(0x932C540)
#define CLASS_3_4F91AE3B00DB7EFF_39__CTOR_OFFSET UNITYSDK_OFFSET(0x932C510)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_39_TypeDefinitionIndex = 50686;

class Class_3_4F91AE3B00DB7EFF_39 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_5C624EAA3CE758E5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_5C624EAA3CE758E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_5C624EAA3CE758E5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_39_EVALUATE_OFFSET))(this);
	}
};
