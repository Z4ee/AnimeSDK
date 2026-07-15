#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceCurrentHeartDialNPC; }

#define CLASS_2_A3AB09BA8823CE07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D6C1C0)
#define CLASS_2_A3AB09BA8823CE07_METHOD_2_6356F723971D2BEA_OFFSET UNITYSDK_OFFSET(0x14D6C520)
#define CLASS_2_A3AB09BA8823CE07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D6C200)
#define CLASS_2_A3AB09BA8823CE07_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D6C6F0)
#define CLASS_2_A3AB09BA8823CE07_TICK_OFFSET UNITYSDK_OFFSET(0x14D6C740)
#define CLASS_2_A3AB09BA8823CE07__CTOR_OFFSET UNITYSDK_OFFSET(0x14D6C1B0)

inline static constexpr unsigned int Class_2_A3AB09BA8823CE07_TypeDefinitionIndex = 50983;

class Class_2_A3AB09BA8823CE07 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TraceCurrentHeartDialNPC* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6356F723971D2BEA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapNpcDef* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_A3AB09BA8823CE07_METHOD_2_6356F723971D2BEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
