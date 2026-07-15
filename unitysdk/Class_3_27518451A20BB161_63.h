#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_019A582638BC3D1A_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D8770)
#define CLASS_3_27518451A20BB161_63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D87B0)
#define CLASS_3_27518451A20BB161_63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157D8A60)
#define CLASS_3_27518451A20BB161_63_TICK_OFFSET UNITYSDK_OFFSET(0x157D8AB0)
#define CLASS_3_27518451A20BB161_63__CTOR_OFFSET UNITYSDK_OFFSET(0x157D8740)

inline static constexpr unsigned int Class_3_27518451A20BB161_63_TypeDefinitionIndex = 50478;

class Class_3_27518451A20BB161_63 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_019A582638BC3D1A_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63_TICK_OFFSET))(this, a1);
	}
};
