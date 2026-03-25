#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceCurrentHeartDialNPC; }

#define CLASS_2_02B48766A5466B47_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11413BB0)
#define CLASS_2_02B48766A5466B47_METHOD_2_65007E3EA9EFFAB0_OFFSET UNITYSDK_OFFSET(0x11413E70)
#define CLASS_2_02B48766A5466B47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11413BF0)
#define CLASS_2_02B48766A5466B47_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11414040)
#define CLASS_2_02B48766A5466B47_TICK_OFFSET UNITYSDK_OFFSET(0x11414090)
#define CLASS_2_02B48766A5466B47__CTOR_OFFSET UNITYSDK_OFFSET(0x11413BA0)

inline static constexpr unsigned int Class_2_02B48766A5466B47_TypeDefinitionIndex = 43244;

class Class_2_02B48766A5466B47 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TraceCurrentHeartDialNPC* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_65007E3EA9EFFAB0(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapNpcDef* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_02B48766A5466B47_METHOD_2_65007E3EA9EFFAB0_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
