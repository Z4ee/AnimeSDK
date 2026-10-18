#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_12C323E8C448EAFE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_179_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFEA580)
#define CLASS_3_27518451A20BB161_179__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEA550)

inline static constexpr unsigned int Class_3_27518451A20BB161_179_TypeDefinitionIndex = 54996;

class Class_3_27518451A20BB161_179 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_12C323E8C448EAFE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_12C323E8C448EAFE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_12C323E8C448EAFE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_179__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_179_ONTASKBEGIN_OFFSET))(this);
	}
};
