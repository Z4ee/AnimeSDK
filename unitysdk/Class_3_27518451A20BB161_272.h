#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_627C41AFD64353E1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_272_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1835C0E0)
#define CLASS_3_27518451A20BB161_272__CTOR_OFFSET UNITYSDK_OFFSET(0x1835C0B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_272_TypeDefinitionIndex = 56621;

class Class_3_27518451A20BB161_272 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_627C41AFD64353E1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_627C41AFD64353E1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_627C41AFD64353E1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_272__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_272_ONTASKBEGIN_OFFSET))(this);
	}
};
