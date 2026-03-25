#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_DB896EF8435160DD;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ADD480)
#define CLASS_2_71206B21D0A90B92_10_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0x10ADD520)
#define CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10ADD330)
#define CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10ADD3D0)
#define CLASS_2_71206B21D0A90B92_10_TICK_OFFSET UNITYSDK_OFFSET(0x10ADD420)
#define CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADD320)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_10_TypeDefinitionIndex = 47574;

class Class_2_71206B21D0A90B92_10 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_DB896EF8435160DD* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_METHOD_2_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}
};
