#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E7A9A07DA1734981_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A7DA30)
#define CLASS_2_71206B21D0A90B92_8_METHOD_2_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0x12A7DA80)
#define CLASS_2_71206B21D0A90B92_8_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x12A7DDA0)
#define CLASS_2_71206B21D0A90B92_8_METHOD_2_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0x12A7DF10)
#define CLASS_2_71206B21D0A90B92_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A7DB10)
#define CLASS_2_71206B21D0A90B92_8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A7DE30)
#define CLASS_2_71206B21D0A90B92_8_TICK_OFFSET UNITYSDK_OFFSET(0x12A7DEB0)
#define CLASS_2_71206B21D0A90B92_8__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7DA20)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_8_TypeDefinitionIndex = 48823;

class Class_2_71206B21D0A90B92_8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_E7A9A07DA1734981_1* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E7A9A07DA1734981_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E7A9A07DA1734981_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_METHOD_2_326667BB73F9EA49_OFFSET))(this);
	}

	::System::Void Method_2_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_METHOD_2_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}
};
