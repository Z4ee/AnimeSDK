#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BEE0315E40CEEB89;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_127_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE533D0)
#define CLASS_3_27518451A20BB161_127__CTOR_OFFSET UNITYSDK_OFFSET(0xDE533A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_127_TypeDefinitionIndex = 51519;

class Class_3_27518451A20BB161_127 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BEE0315E40CEEB89*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BEE0315E40CEEB89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BEE0315E40CEEB89*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_127__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_127_ONTASKBEGIN_OFFSET))(this);
	}
};
