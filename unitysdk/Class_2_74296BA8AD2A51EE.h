#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5E28429F43656634;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F36B60)
#define CLASS_2_74296BA8AD2A51EE_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18F36D80)
#define CLASS_2_74296BA8AD2A51EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F36BB0)
#define CLASS_2_74296BA8AD2A51EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F36C20)
#define CLASS_2_74296BA8AD2A51EE_TICK_OFFSET UNITYSDK_OFFSET(0x18F36C70)
#define CLASS_2_74296BA8AD2A51EE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F36B30)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_TypeDefinitionIndex = 58216;

class Class_2_74296BA8AD2A51EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::UInt32 LEDGIJDBGIA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5E28429F43656634* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5E28429F43656634*))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
