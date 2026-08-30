#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_291F7DA21A504FC4;
class Class_3_B81E70C669D9EDB9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_137_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1608B460)
#define CLASS_3_27518451A20BB161_137_METHOD_3_C44A10DEE408C3E7_OFFSET UNITYSDK_OFFSET(0x1608B8B0)
#define CLASS_3_27518451A20BB161_137_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1608B4A0)
#define CLASS_3_27518451A20BB161_137__CTOR_OFFSET UNITYSDK_OFFSET(0x1608B430)

inline static constexpr unsigned int Class_3_27518451A20BB161_137_TypeDefinitionIndex = 54110;

class Class_3_27518451A20BB161_137 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B81E70C669D9EDB9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B81E70C669D9EDB9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B81E70C669D9EDB9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_C44A10DEE408C3E7(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137_METHOD_3_C44A10DEE408C3E7_OFFSET))(a1);
	}
};
