#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_12C323E8C448EAFE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_173_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19275180)
#define CLASS_3_27518451A20BB161_173__CTOR_OFFSET UNITYSDK_OFFSET(0x19275150)

inline static constexpr unsigned int Class_3_27518451A20BB161_173_TypeDefinitionIndex = 55203;

class Class_3_27518451A20BB161_173 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_12C323E8C448EAFE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_12C323E8C448EAFE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_12C323E8C448EAFE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_173__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_173_ONTASKBEGIN_OFFSET))(this);
	}
};
