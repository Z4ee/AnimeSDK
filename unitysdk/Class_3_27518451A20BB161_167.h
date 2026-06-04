#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D20C39A612656926;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3D9A50)
#define CLASS_3_27518451A20BB161_167__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D9A20)

inline static constexpr unsigned int Class_3_27518451A20BB161_167_TypeDefinitionIndex = 52010;

class Class_3_27518451A20BB161_167 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D20C39A612656926*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D20C39A612656926* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D20C39A612656926*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_167_ONTASKBEGIN_OFFSET))(this);
	}
};
