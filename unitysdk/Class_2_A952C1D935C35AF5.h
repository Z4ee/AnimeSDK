#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RestoreTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A952C1D935C35AF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C7AF70)
#define CLASS_2_A952C1D935C35AF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C7AFB0)
#define CLASS_2_A952C1D935C35AF5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C7B0B0)
#define CLASS_2_A952C1D935C35AF5_TICK_OFFSET UNITYSDK_OFFSET(0x17C7B100)
#define CLASS_2_A952C1D935C35AF5__CTOR_OFFSET UNITYSDK_OFFSET(0x17C7AF60)

inline static constexpr unsigned int Class_2_A952C1D935C35AF5_TypeDefinitionIndex = 50785;

class Class_2_A952C1D935C35AF5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RestoreTrackingMission* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreTrackingMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreTrackingMission*))((::PBYTE)hIl2Cpp + CLASS_2_A952C1D935C35AF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A952C1D935C35AF5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A952C1D935C35AF5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A952C1D935C35AF5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A952C1D935C35AF5_TICK_OFFSET))(this, a1);
	}
};
