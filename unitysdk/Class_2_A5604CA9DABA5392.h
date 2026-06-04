#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMissionWayPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A5604CA9DABA5392_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CD7400)
#define CLASS_2_A5604CA9DABA5392_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CD7440)
#define CLASS_2_A5604CA9DABA5392_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CD7630)
#define CLASS_2_A5604CA9DABA5392_TICK_OFFSET UNITYSDK_OFFSET(0x13CD7680)
#define CLASS_2_A5604CA9DABA5392__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD73F0)

inline static constexpr unsigned int Class_2_A5604CA9DABA5392_TypeDefinitionIndex = 49765;

class Class_2_A5604CA9DABA5392 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetMissionWayPoint* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionWayPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionWayPoint*))((::PBYTE)hIl2Cpp + CLASS_2_A5604CA9DABA5392__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5604CA9DABA5392_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5604CA9DABA5392_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5604CA9DABA5392_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5604CA9DABA5392_TICK_OFFSET))(this, a1);
	}
};
