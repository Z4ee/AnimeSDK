#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CCEC00145FD0827B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7CBDF0)
#define CLASS_3_27518451A20BB161_228__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CBDC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_228_TypeDefinitionIndex = 55356;

class Class_3_27518451A20BB161_228 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CCEC00145FD0827B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CCEC00145FD0827B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CCEC00145FD0827B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET))(this);
	}
};
