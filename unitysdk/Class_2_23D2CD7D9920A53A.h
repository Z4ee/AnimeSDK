#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_10B699A7F42E042B;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace System { class Object; }

#define CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C13370)
#define CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C133B0)
#define CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C13430)
#define CLASS_2_23D2CD7D9920A53A_TICK_OFFSET UNITYSDK_OFFSET(0x15C13480)
#define CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET UNITYSDK_OFFSET(0x15C132F0)

inline static constexpr unsigned int Class_2_23D2CD7D9920A53A_TypeDefinitionIndex = 55785;

class Class_2_23D2CD7D9920A53A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Object* FFMHIBPLNDN; // 0x20
	::RPG::GameCore::UniversalHotFixBaseTask* OPCCJDHNKEC; // 0x28
	::System::Object* IIOFACHKJGP; // 0x30
	::Class_1_10B699A7F42E042B* CDMOKNNGKCC; // 0x38
	::System::Object* PGLHDMEECHP; // 0x40

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
