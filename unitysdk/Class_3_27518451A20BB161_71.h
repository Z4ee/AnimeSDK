#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_759DA59D6F6654C0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16203A20)
#define CLASS_3_27518451A20BB161_71__CTOR_OFFSET UNITYSDK_OFFSET(0x162039F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_71_TypeDefinitionIndex = 53158;

class Class_3_27518451A20BB161_71 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_759DA59D6F6654C0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_759DA59D6F6654C0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_759DA59D6F6654C0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET))(this);
	}
};
