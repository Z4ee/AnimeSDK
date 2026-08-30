#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UpdateTreasureChallengeProgress; }

#define CLASS_2_C0F9B5E09E1DB528_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3C8EA0)
#define CLASS_2_C0F9B5E09E1DB528_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3C8CD0)
#define CLASS_2_C0F9B5E09E1DB528_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3C8DF0)
#define CLASS_2_C0F9B5E09E1DB528_TICK_OFFSET UNITYSDK_OFFSET(0xF3C8E40)
#define CLASS_2_C0F9B5E09E1DB528__CTOR_OFFSET UNITYSDK_OFFSET(0xF3C8CC0)

inline static constexpr unsigned int Class_2_C0F9B5E09E1DB528_TypeDefinitionIndex = 58992;

class Class_2_C0F9B5E09E1DB528 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UpdateTreasureChallengeProgress* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UpdateTreasureChallengeProgress*))((::PBYTE)hIl2Cpp + CLASS_2_C0F9B5E09E1DB528__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0F9B5E09E1DB528_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0F9B5E09E1DB528_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C0F9B5E09E1DB528_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0F9B5E09E1DB528_DISPOSE_OFFSET))(this);
	}
};
