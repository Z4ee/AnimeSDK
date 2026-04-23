#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_601484553AD71CED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_104_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118E2AB0)
#define CLASS_3_27518451A20BB161_104__CTOR_OFFSET UNITYSDK_OFFSET(0x118E2A80)

inline static constexpr unsigned int Class_3_27518451A20BB161_104_TypeDefinitionIndex = 50070;

class Class_3_27518451A20BB161_104 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_601484553AD71CED*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_601484553AD71CED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_601484553AD71CED*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_104__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_104_ONTASKBEGIN_OFFSET))(this);
	}
};
