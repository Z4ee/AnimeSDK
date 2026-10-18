#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8EB752E7100D62B4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_206_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E2C9A0)
#define CLASS_3_27518451A20BB161_206__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2C970)

inline static constexpr unsigned int Class_3_27518451A20BB161_206_TypeDefinitionIndex = 55200;

class Class_3_27518451A20BB161_206 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8EB752E7100D62B4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8EB752E7100D62B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8EB752E7100D62B4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_206__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_206_ONTASKBEGIN_OFFSET))(this);
	}
};
