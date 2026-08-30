#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipPowerSprint; }

#define CLASS_2_30E9AD189018F447_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC39CD10)
#define CLASS_2_30E9AD189018F447_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC39CDB0)
#define CLASS_2_30E9AD189018F447_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC39CE00)
#define CLASS_2_30E9AD189018F447_TICK_OFFSET UNITYSDK_OFFSET(0xC39CD50)
#define CLASS_2_30E9AD189018F447__CTOR_OFFSET UNITYSDK_OFFSET(0xC39CD00)

inline static constexpr unsigned int Class_2_30E9AD189018F447_TypeDefinitionIndex = 53697;

class Class_2_30E9AD189018F447 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipPowerSprint* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

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
