#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5E28429F43656634;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175485B0)
#define CLASS_2_74296BA8AD2A51EE_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x175487D0)
#define CLASS_2_74296BA8AD2A51EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17548600)
#define CLASS_2_74296BA8AD2A51EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17548670)
#define CLASS_2_74296BA8AD2A51EE_TICK_OFFSET UNITYSDK_OFFSET(0x175486C0)
#define CLASS_2_74296BA8AD2A51EE__CTOR_OFFSET UNITYSDK_OFFSET(0x17548580)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_TypeDefinitionIndex = 55485;

class Class_2_74296BA8AD2A51EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x20

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
