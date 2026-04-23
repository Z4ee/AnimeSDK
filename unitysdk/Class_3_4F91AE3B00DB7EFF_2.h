#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3A31B1679E500164;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9330320)
#define CLASS_3_4F91AE3B00DB7EFF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x93302F0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_2_TypeDefinitionIndex = 48522;

class Class_3_4F91AE3B00DB7EFF_2 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3A31B1679E500164*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3A31B1679E500164* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3A31B1679E500164*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_2_EVALUATE_OFFSET))(this);
	}
};
