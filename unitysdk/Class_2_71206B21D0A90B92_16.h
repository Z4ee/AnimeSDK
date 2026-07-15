#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_38;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18664710)
#define CLASS_2_71206B21D0A90B92_16_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18664970)
#define CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18664750)
#define CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186648C0)
#define CLASS_2_71206B21D0A90B92_16_TICK_OFFSET UNITYSDK_OFFSET(0x18664910)
#define CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET UNITYSDK_OFFSET(0x18664700)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_16_TypeDefinitionIndex = 53848;

class Class_2_71206B21D0A90B92_16 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_FA3DB7B30E78C0CA_38* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_38*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
