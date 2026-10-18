#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_13_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA7E0F0)
#define CLASS_2_71206B21D0A90B92_13_METHOD_2_0035AECBFF4FCC17_OFFSET UNITYSDK_OFFSET(0xBA7E980)
#define CLASS_2_71206B21D0A90B92_13_METHOD_2_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0xBA7E570)
#define CLASS_2_71206B21D0A90B92_13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA7E1C0)
#define CLASS_2_71206B21D0A90B92_13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA7E170)
#define CLASS_2_71206B21D0A90B92_13_TICK_OFFSET UNITYSDK_OFFSET(0xBA7E510)
#define CLASS_2_71206B21D0A90B92_13__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7E0E0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_13_TypeDefinitionIndex = 53077;

class Class_2_71206B21D0A90B92_13 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_06CA57680E115A32* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_METHOD_2_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0035AECBFF4FCC17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_METHOD_2_0035AECBFF4FCC17_OFFSET))(this, a1);
	}
};
