#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C2367E597947943B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_289_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB58E20)
#define CLASS_3_27518451A20BB161_289__CTOR_OFFSET UNITYSDK_OFFSET(0xBB58DF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_289_TypeDefinitionIndex = 57857;

class Class_3_27518451A20BB161_289 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C2367E597947943B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C2367E597947943B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C2367E597947943B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_289__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_289_ONTASKBEGIN_OFFSET))(this);
	}
};
