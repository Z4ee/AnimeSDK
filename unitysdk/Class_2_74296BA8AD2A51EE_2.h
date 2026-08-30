#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7AA0663B46C8586F_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6A87F0)
#define CLASS_2_74296BA8AD2A51EE_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A6A8830)
#define CLASS_2_74296BA8AD2A51EE_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A6A88C0)
#define CLASS_2_74296BA8AD2A51EE_2_TICK_OFFSET UNITYSDK_OFFSET(0x1A6A8910)
#define CLASS_2_74296BA8AD2A51EE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A87C0)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_2_TypeDefinitionIndex = 58325;

class Class_2_74296BA8AD2A51EE_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::UInt32 CPLKJGNJCCC; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_3*))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE_2__CTOR_OFFSET))(this, a1, a2);
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
