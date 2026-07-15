#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4AD406E369F985FF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16268D40)
#define CLASS_3_27518451A20BB161_111__CTOR_OFFSET UNITYSDK_OFFSET(0x16268D10)

inline static constexpr unsigned int Class_3_27518451A20BB161_111_TypeDefinitionIndex = 51356;

class Class_3_27518451A20BB161_111 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4AD406E369F985FF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4AD406E369F985FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4AD406E369F985FF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET))(this);
	}
};
