#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_4F3C2014A60D7C5B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9056BD0)
#define CLASS_2_71206B21D0A90B92_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9056C10)
#define CLASS_2_71206B21D0A90B92_11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9056EF0)
#define CLASS_2_71206B21D0A90B92_11_TICK_OFFSET UNITYSDK_OFFSET(0x9056F40)
#define CLASS_2_71206B21D0A90B92_11__CTOR_OFFSET UNITYSDK_OFFSET(0x9056BC0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_11_TypeDefinitionIndex = 50990;

class Class_2_71206B21D0A90B92_11 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_4F3C2014A60D7C5B* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4F3C2014A60D7C5B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4F3C2014A60D7C5B*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_11_TICK_OFFSET))(this, a1);
	}
};
