#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_5C624EAA3CE758E5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1060F230)
#define CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1060F200)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_8_TypeDefinitionIndex = 43984;

class Class_3_4F91AE3B00DB7EFF_8 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_5C624EAA3CE758E5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_5C624EAA3CE758E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_5C624EAA3CE758E5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET))(this);
	}
};
