#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_B798001FE639F577;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace System { class Object; }

#define CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110CB300)
#define CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110CB340)
#define CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x110CB3C0)
#define CLASS_2_23D2CD7D9920A53A_TICK_OFFSET UNITYSDK_OFFSET(0x110CB410)
#define CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET UNITYSDK_OFFSET(0x110CB280)

inline static constexpr unsigned int Class_2_23D2CD7D9920A53A_TypeDefinitionIndex = 44690;

class Class_2_23D2CD7D9920A53A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Object* Field_2_4; // 0x18
	::System::Object* Field_2_5; // 0x20
	::Class_1_B798001FE639F577* Field_2_2; // 0x28
	::System::Object* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::RPG::GameCore::UniversalHotFixBaseTask* Field_2_0; // 0x40

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
