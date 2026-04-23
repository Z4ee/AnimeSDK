#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3D764571521C3D40;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96091E0)
#define CLASS_3_27518451A20BB161_31__CTOR_OFFSET UNITYSDK_OFFSET(0x96091B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_31_TypeDefinitionIndex = 48755;

class Class_3_27518451A20BB161_31 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3D764571521C3D40*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3D764571521C3D40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3D764571521C3D40*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET))(this);
	}
};
