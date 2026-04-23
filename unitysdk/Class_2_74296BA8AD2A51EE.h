#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_F5DF6DE08299E9ED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74296BA8AD2A51EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117CCAF0)
#define CLASS_2_74296BA8AD2A51EE_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x117CCD10)
#define CLASS_2_74296BA8AD2A51EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117CCB40)
#define CLASS_2_74296BA8AD2A51EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117CCBB0)
#define CLASS_2_74296BA8AD2A51EE_TICK_OFFSET UNITYSDK_OFFSET(0x117CCC00)
#define CLASS_2_74296BA8AD2A51EE__CTOR_OFFSET UNITYSDK_OFFSET(0x117CCAC0)

inline static constexpr unsigned int Class_2_74296BA8AD2A51EE_TypeDefinitionIndex = 53549;

class Class_2_74296BA8AD2A51EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F5DF6DE08299E9ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F5DF6DE08299E9ED*))((::PBYTE)hIl2Cpp + CLASS_2_74296BA8AD2A51EE__CTOR_OFFSET))(this, a1, a2);
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
