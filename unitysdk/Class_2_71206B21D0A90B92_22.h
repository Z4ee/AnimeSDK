#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_37;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_22_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159845D0)
#define CLASS_2_71206B21D0A90B92_22_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x15984760)
#define CLASS_2_71206B21D0A90B92_22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15984650)
#define CLASS_2_71206B21D0A90B92_22_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15984580)
#define CLASS_2_71206B21D0A90B92_22_TICK_OFFSET UNITYSDK_OFFSET(0x15984520)
#define CLASS_2_71206B21D0A90B92_22__CTOR_OFFSET UNITYSDK_OFFSET(0x15984510)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_22_TypeDefinitionIndex = 58495;

class Class_2_71206B21D0A90B92_22 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_FA3DB7B30E78C0CA_37* JKJPFJALGKO; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_37* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_37*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_22_METHOD_2_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}
};
