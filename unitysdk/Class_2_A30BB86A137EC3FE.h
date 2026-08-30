#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A30BB86A137EC3FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1537CB80)
#define CLASS_2_A30BB86A137EC3FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1537CBC0)
#define CLASS_2_A30BB86A137EC3FE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1537CD00)
#define CLASS_2_A30BB86A137EC3FE_TICK_OFFSET UNITYSDK_OFFSET(0x1537CD50)
#define CLASS_2_A30BB86A137EC3FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1537CB70)

inline static constexpr unsigned int Class_2_A30BB86A137EC3FE_TypeDefinitionIndex = 53515;

class Class_2_A30BB86A137EC3FE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetTrackingMission* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrackingMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + CLASS_2_A30BB86A137EC3FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30BB86A137EC3FE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30BB86A137EC3FE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30BB86A137EC3FE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A30BB86A137EC3FE_TICK_OFFSET))(this, a1);
	}
};
