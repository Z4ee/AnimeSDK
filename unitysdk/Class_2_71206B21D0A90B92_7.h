#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_2D512E916C716041_7;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9070940)
#define CLASS_2_71206B21D0A90B92_7_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x9070B80)
#define CLASS_2_71206B21D0A90B92_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9070A20)
#define CLASS_2_71206B21D0A90B92_7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9070990)
#define CLASS_2_71206B21D0A90B92_7_TICK_OFFSET UNITYSDK_OFFSET(0x9070C10)
#define CLASS_2_71206B21D0A90B92_7__CTOR_OFFSET UNITYSDK_OFFSET(0x9070930)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_7_TypeDefinitionIndex = 48819;

class Class_2_71206B21D0A90B92_7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_2D512E916C716041_7* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_7*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_TICK_OFFSET))(this, a1);
	}
};
