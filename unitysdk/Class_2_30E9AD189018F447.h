#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipPowerSprint; }

#define CLASS_2_30E9AD189018F447_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF4BC50)
#define CLASS_2_30E9AD189018F447_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF4BCF0)
#define CLASS_2_30E9AD189018F447_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF4BD40)
#define CLASS_2_30E9AD189018F447_TICK_OFFSET UNITYSDK_OFFSET(0xAF4BC90)
#define CLASS_2_30E9AD189018F447__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4BC40)

inline static constexpr unsigned int Class_2_30E9AD189018F447_TypeDefinitionIndex = 49936;

class Class_2_30E9AD189018F447 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipPowerSprint* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipPowerSprint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipPowerSprint*))((::PBYTE)hIl2Cpp + CLASS_2_30E9AD189018F447__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30E9AD189018F447_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_30E9AD189018F447_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30E9AD189018F447_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30E9AD189018F447_ONTASKRESET_OFFSET))(this);
	}
};
