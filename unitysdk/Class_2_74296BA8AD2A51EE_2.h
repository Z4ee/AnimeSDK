#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_2D512E916C716041_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13548FD0)
#define CLASS_2_74296BA8AD2A51EE_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13549010)
#define CLASS_2_74296BA8AD2A51EE_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x135490A0)
#define CLASS_2_74296BA8AD2A51EE_2_TICK_OFFSET UNITYSDK_OFFSET(0x135490F0)
#define CLASS_2_74296BA8AD2A51EE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13548FA0)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_2_TypeDefinitionIndex = 54371;

class Class_2_74296BA8AD2A51EE_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_3*))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2_TICK_OFFSET))(this, a1);
	}
};
