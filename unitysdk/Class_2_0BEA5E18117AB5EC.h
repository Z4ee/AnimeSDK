#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_D47ED7BCED4913BA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0BEA5E18117AB5EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A1220)
#define CLASS_2_0BEA5E18117AB5EC_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x159A12D0)
#define CLASS_2_0BEA5E18117AB5EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A1260)
#define CLASS_2_0BEA5E18117AB5EC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159A1320)
#define CLASS_2_0BEA5E18117AB5EC_TICK_OFFSET UNITYSDK_OFFSET(0x159A1370)
#define CLASS_2_0BEA5E18117AB5EC__CTOR_OFFSET UNITYSDK_OFFSET(0x159A11F0)

inline static constexpr unsigned int Class_2_0BEA5E18117AB5EC_TypeDefinitionIndex = 58321;

class Class_2_0BEA5E18117AB5EC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Single PHCJBIJEBNI; // 0x18
	::System::Single PGMIOKKLHIE; // 0x1C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D47ED7BCED4913BA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D47ED7BCED4913BA*))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BEA5E18117AB5EC_TICK_OFFSET))(this, a1);
	}
};
