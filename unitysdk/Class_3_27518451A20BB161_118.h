#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F9ABBD84985EB172;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_118_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A1AD0)
#define CLASS_3_27518451A20BB161_118__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A1AA0)

inline static constexpr unsigned int Class_3_27518451A20BB161_118_TypeDefinitionIndex = 54038;

class Class_3_27518451A20BB161_118 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F9ABBD84985EB172*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F9ABBD84985EB172* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F9ABBD84985EB172*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_118__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_118_ONTASKBEGIN_OFFSET))(this);
	}
};
