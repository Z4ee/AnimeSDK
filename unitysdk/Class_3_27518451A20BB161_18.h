#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_22E48388A2F351DF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AFF660)
#define CLASS_3_27518451A20BB161_18__CTOR_OFFSET UNITYSDK_OFFSET(0x15AFF630)
#define CLASS_3_27518451A20BB161_18__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15AFF840)
#define CLASS_3_27518451A20BB161_18__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x15AFF850)

inline static constexpr unsigned int Class_3_27518451A20BB161_18_TypeDefinitionIndex = 53067;

class Class_3_27518451A20BB161_18 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_22E48388A2F351DF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_22E48388A2F351DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_22E48388A2F351DF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_18__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_18__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
