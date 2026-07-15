#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7AA0663B46C8586F_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16879AA0)
#define CLASS_2_74296BA8AD2A51EE_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16879AE0)
#define CLASS_2_74296BA8AD2A51EE_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16879B70)
#define CLASS_2_74296BA8AD2A51EE_3_TICK_OFFSET UNITYSDK_OFFSET(0x16879BC0)
#define CLASS_2_74296BA8AD2A51EE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16879A70)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_3_TypeDefinitionIndex = 55595;

class Class_2_74296BA8AD2A51EE_3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_4*))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_3_TICK_OFFSET))(this, a1);
	}
};
