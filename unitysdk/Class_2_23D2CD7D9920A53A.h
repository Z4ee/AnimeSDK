#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_B798001FE639F577;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace System { class Object; }

#define CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97B7960)
#define CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97B79A0)
#define CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x97B7A20)
#define CLASS_2_23D2CD7D9920A53A_TICK_OFFSET UNITYSDK_OFFSET(0x97B7A70)
#define CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET UNITYSDK_OFFSET(0x97B78E0)

inline static constexpr unsigned int Class_2_23D2CD7D9920A53A_TypeDefinitionIndex = 51434;

class Class_2_23D2CD7D9920A53A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::UniversalHotFixBaseTask* Field_2_0; // 0x20
	::System::Object* Field_2_4; // 0x28
	::System::Object* Field_2_5; // 0x30
	::Class_1_B798001FE639F577* Field_2_2; // 0x38
	::System::Object* Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_TICK_OFFSET))(this, a1);
	}
};
