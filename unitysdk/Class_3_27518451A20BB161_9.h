#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_388FEF520FE50C83;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198E8F50)
#define CLASS_3_27518451A20BB161_9__CTOR_OFFSET UNITYSDK_OFFSET(0x198E8F20)

inline static constexpr unsigned int Class_3_27518451A20BB161_9_TypeDefinitionIndex = 52992;

class Class_3_27518451A20BB161_9 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_388FEF520FE50C83*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_388FEF520FE50C83* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_388FEF520FE50C83*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_9_ONTASKBEGIN_OFFSET))(this);
	}
};
