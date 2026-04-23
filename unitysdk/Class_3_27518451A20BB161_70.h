#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C7DB3B5E4FEDCAE7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128592F0)
#define CLASS_3_27518451A20BB161_70__CTOR_OFFSET UNITYSDK_OFFSET(0x128592C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_70_TypeDefinitionIndex = 49607;

class Class_3_27518451A20BB161_70 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C7DB3B5E4FEDCAE7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C7DB3B5E4FEDCAE7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C7DB3B5E4FEDCAE7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET))(this);
	}
};
