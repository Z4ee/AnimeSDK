#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterFloor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EA0696F69939E22B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1249E410)
#define CLASS_2_EA0696F69939E22B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1249E450)
#define CLASS_2_EA0696F69939E22B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1249E5C0)
#define CLASS_2_EA0696F69939E22B_TICK_OFFSET UNITYSDK_OFFSET(0x1249E610)
#define CLASS_2_EA0696F69939E22B__CTOR_OFFSET UNITYSDK_OFFSET(0x1249E400)

inline static constexpr unsigned int Class_2_EA0696F69939E22B_TypeDefinitionIndex = 48683;

class Class_2_EA0696F69939E22B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnterFloor* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterFloor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + CLASS_2_EA0696F69939E22B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0696F69939E22B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0696F69939E22B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0696F69939E22B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA0696F69939E22B_TICK_OFFSET))(this, a1);
	}
};
