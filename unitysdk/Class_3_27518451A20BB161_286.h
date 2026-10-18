#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AEB473993EF0DACB_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_286_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB457190)
#define CLASS_3_27518451A20BB161_286__CTOR_OFFSET UNITYSDK_OFFSET(0xB457160)

inline static constexpr unsigned int Class_3_27518451A20BB161_286_TypeDefinitionIndex = 56426;

class Class_3_27518451A20BB161_286 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AEB473993EF0DACB_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AEB473993EF0DACB_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AEB473993EF0DACB_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_286__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_286_ONTASKBEGIN_OFFSET))(this);
	}
};
