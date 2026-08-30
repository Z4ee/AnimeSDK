#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_866FEB8E1747AA26;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD239150)
#define CLASS_3_27518451A20BB161_24__CTOR_OFFSET UNITYSDK_OFFSET(0xD239120)
#define CLASS_3_27518451A20BB161_24__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xD2392F0)
#define CLASS_3_27518451A20BB161_24__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xD239300)

inline static constexpr unsigned int Class_3_27518451A20BB161_24_TypeDefinitionIndex = 53073;

class Class_3_27518451A20BB161_24 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_866FEB8E1747AA26*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_866FEB8E1747AA26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_866FEB8E1747AA26*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
