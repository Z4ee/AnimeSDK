#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6724283B9D91D61E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_163_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14530E10)
#define CLASS_3_27518451A20BB161_163__CTOR_OFFSET UNITYSDK_OFFSET(0x14530DE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_163_TypeDefinitionIndex = 51989;

class Class_3_27518451A20BB161_163 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6724283B9D91D61E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6724283B9D91D61E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6724283B9D91D61E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_163__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_163_ONTASKBEGIN_OFFSET))(this);
	}
};
