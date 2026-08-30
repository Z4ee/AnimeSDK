#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CDE976C9BD175E30;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CC4630)
#define CLASS_3_27518451A20BB161_19__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC4600)
#define CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18CC47D0)
#define CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x18CC47E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_19_TypeDefinitionIndex = 53068;

class Class_3_27518451A20BB161_19 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CDE976C9BD175E30*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CDE976C9BD175E30* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CDE976C9BD175E30*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
