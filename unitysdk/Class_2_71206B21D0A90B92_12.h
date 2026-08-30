#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E7A9A07DA1734981_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_12_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6E2E60)
#define CLASS_2_71206B21D0A90B92_12_METHOD_2_5FBAD89A54D9F070_1_OFFSET UNITYSDK_OFFSET(0xB6E2EB0)
#define CLASS_2_71206B21D0A90B92_12_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xB6E3230)
#define CLASS_2_71206B21D0A90B92_12_METHOD_2_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xB6E33D0)
#define CLASS_2_71206B21D0A90B92_12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6E2F70)
#define CLASS_2_71206B21D0A90B92_12_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6E32F0)
#define CLASS_2_71206B21D0A90B92_12_TICK_OFFSET UNITYSDK_OFFSET(0xB6E3370)
#define CLASS_2_71206B21D0A90B92_12__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E2E50)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_12_TypeDefinitionIndex = 53209;

class Class_2_71206B21D0A90B92_12 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E7A9A07DA1734981_1* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E7A9A07DA1734981_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E7A9A07DA1734981_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_METHOD_2_5FBAD89A54D9F070_1_OFFSET))(this);
	}

	::System::Void Method_2_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_METHOD_2_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}
};
