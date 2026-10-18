#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PredicateTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A3D1913B1053B833_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA02BF0)
#define CLASS_2_A3D1913B1053B833_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBA02DF0)
#define CLASS_2_A3D1913B1053B833_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xBA02EB0)
#define CLASS_2_A3D1913B1053B833_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBA02E00)
#define CLASS_2_A3D1913B1053B833_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA02F40)
#define CLASS_2_A3D1913B1053B833_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA030A0)
#define CLASS_2_A3D1913B1053B833_TICK_OFFSET UNITYSDK_OFFSET(0xBA03130)
#define CLASS_2_A3D1913B1053B833__CTOR_OFFSET UNITYSDK_OFFSET(0xBA02A50)

inline static constexpr unsigned int Class_2_A3D1913B1053B833_TypeDefinitionIndex = 55263;

class Class_2_A3D1913B1053B833 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* APFMMFLLIIM; // 0x20
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28
	::Class_3_07C3C4D2990C49EE* LKDIMCCENOI; // 0x30
	::RPG::GameCore::PredicateTaskList* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* IMLDGCEMCCM; // 0x40

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
