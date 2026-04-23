#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PredicateTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A3D1913B1053B833_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D785E0)
#define CLASS_2_A3D1913B1053B833_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x11D786A0)
#define CLASS_2_A3D1913B1053B833_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x11D78760)
#define CLASS_2_A3D1913B1053B833_ONSKIP_OFFSET UNITYSDK_OFFSET(0x11D786B0)
#define CLASS_2_A3D1913B1053B833_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11D787F0)
#define CLASS_2_A3D1913B1053B833_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11D78950)
#define CLASS_2_A3D1913B1053B833_TICK_OFFSET UNITYSDK_OFFSET(0x11D789E0)
#define CLASS_2_A3D1913B1053B833__CTOR_OFFSET UNITYSDK_OFFSET(0x11D78440)

inline static constexpr unsigned int Class_2_A3D1913B1053B833_TypeDefinitionIndex = 50949;

class Class_2_A3D1913B1053B833 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x28
	::RPG::GameCore::PredicateTaskList* Field_2_0; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x38
	::RPG::GameCore::TaskContext* Field_2_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateTaskList*))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D1913B1053B833_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
