#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideLandOnBtn; }

#define CLASS_2_934A2EB365D648E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13762FA0)
#define CLASS_2_934A2EB365D648E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13763040)
#define CLASS_2_934A2EB365D648E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137633A0)
#define CLASS_2_934A2EB365D648E1_TICK_OFFSET UNITYSDK_OFFSET(0x13762FE0)
#define CLASS_2_934A2EB365D648E1__CTOR_OFFSET UNITYSDK_OFFSET(0x13762F90)

inline static constexpr unsigned int Class_2_934A2EB365D648E1_TypeDefinitionIndex = 49933;

class Class_2_934A2EB365D648E1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TravelShipHideLandOnBtn* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideLandOnBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideLandOnBtn*))((::PBYTE)hIl2Cpp + CLASS_2_934A2EB365D648E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_934A2EB365D648E1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_934A2EB365D648E1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_934A2EB365D648E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_934A2EB365D648E1_ONTASKRESET_OFFSET))(this);
	}
};
