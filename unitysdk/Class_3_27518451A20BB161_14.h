#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_55644F5B3679EDD0;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EC6F20)
#define CLASS_3_27518451A20BB161_14__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC6EF0)
#define CLASS_3_27518451A20BB161_14__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18EC7100)
#define CLASS_3_27518451A20BB161_14__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x18EC7110)

inline static constexpr unsigned int Class_3_27518451A20BB161_14_TypeDefinitionIndex = 50400;

class Class_3_27518451A20BB161_14 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_55644F5B3679EDD0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_55644F5B3679EDD0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_55644F5B3679EDD0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_14__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_14__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
