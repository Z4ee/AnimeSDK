#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMissionWayPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A5604CA9DABA5392_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1582B650)
#define CLASS_2_A5604CA9DABA5392_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1582B690)
#define CLASS_2_A5604CA9DABA5392_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1582B880)
#define CLASS_2_A5604CA9DABA5392_TICK_OFFSET UNITYSDK_OFFSET(0x1582B8D0)
#define CLASS_2_A5604CA9DABA5392__CTOR_OFFSET UNITYSDK_OFFSET(0x1582B640)

inline static constexpr unsigned int Class_2_A5604CA9DABA5392_TypeDefinitionIndex = 53502;

class Class_2_A5604CA9DABA5392 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetMissionWayPoint* OFKGLJOAMLD; // 0x20

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
