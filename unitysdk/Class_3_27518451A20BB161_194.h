#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BEE0315E40CEEB89;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_194_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFA64680)
#define CLASS_3_27518451A20BB161_194__CTOR_OFFSET UNITYSDK_OFFSET(0xFA64650)

inline static constexpr unsigned int Class_3_27518451A20BB161_194_TypeDefinitionIndex = 55360;

class Class_3_27518451A20BB161_194 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BEE0315E40CEEB89*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BEE0315E40CEEB89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BEE0315E40CEEB89*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_194__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_194_ONTASKBEGIN_OFFSET))(this);
	}
};
