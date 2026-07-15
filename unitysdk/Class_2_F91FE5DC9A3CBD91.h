#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetMissionWayPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F91FE5DC9A3CBD91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F09F70)
#define CLASS_2_F91FE5DC9A3CBD91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F09FB0)
#define CLASS_2_F91FE5DC9A3CBD91_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F0A1B0)
#define CLASS_2_F91FE5DC9A3CBD91_TICK_OFFSET UNITYSDK_OFFSET(0x15F0A200)
#define CLASS_2_F91FE5DC9A3CBD91__CTOR_OFFSET UNITYSDK_OFFSET(0x15F09F60)

inline static constexpr unsigned int Class_2_F91FE5DC9A3CBD91_TypeDefinitionIndex = 50781;

class Class_2_F91FE5DC9A3CBD91 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ResetMissionWayPoint* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetMissionWayPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetMissionWayPoint*))((::PBYTE)hIl2Cpp + CLASS_2_F91FE5DC9A3CBD91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F91FE5DC9A3CBD91_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F91FE5DC9A3CBD91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F91FE5DC9A3CBD91_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F91FE5DC9A3CBD91_TICK_OFFSET))(this, a1);
	}
};
