#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CF97B0EA9108B481;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C4F30)
#define CLASS_3_27518451A20BB161_22__CTOR_OFFSET UNITYSDK_OFFSET(0x134C4F00)
#define CLASS_3_27518451A20BB161_22__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x134C50D0)
#define CLASS_3_27518451A20BB161_22__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x134C50E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_22_TypeDefinitionIndex = 53071;

class Class_3_27518451A20BB161_22 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CF97B0EA9108B481*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CF97B0EA9108B481* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CF97B0EA9108B481*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
