#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_41;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_20_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FAFA30)
#define CLASS_2_71206B21D0A90B92_20_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x18FAFBC0)
#define CLASS_2_71206B21D0A90B92_20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FAFAB0)
#define CLASS_2_71206B21D0A90B92_20_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FAF9E0)
#define CLASS_2_71206B21D0A90B92_20_TICK_OFFSET UNITYSDK_OFFSET(0x18FAF980)
#define CLASS_2_71206B21D0A90B92_20__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAF970)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_20_TypeDefinitionIndex = 58643;

class Class_2_71206B21D0A90B92_20 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_FA3DB7B30E78C0CA_41* JKJPFJALGKO; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_41*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_20_METHOD_2_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}
};
