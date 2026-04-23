#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CD188B415B803749;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_127_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF940880)
#define CLASS_3_27518451A20BB161_127__CTOR_OFFSET UNITYSDK_OFFSET(0xF940850)

inline static constexpr unsigned int Class_3_27518451A20BB161_127_TypeDefinitionIndex = 50927;

class Class_3_27518451A20BB161_127 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CD188B415B803749*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CD188B415B803749* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CD188B415B803749*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_127__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_127_ONTASKBEGIN_OFFSET))(this);
	}
};
