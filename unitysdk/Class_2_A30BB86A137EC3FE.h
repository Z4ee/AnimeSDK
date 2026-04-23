#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A30BB86A137EC3FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129FCCF0)
#define CLASS_2_A30BB86A137EC3FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129FCD30)
#define CLASS_2_A30BB86A137EC3FE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x129FCE70)
#define CLASS_2_A30BB86A137EC3FE_TICK_OFFSET UNITYSDK_OFFSET(0x129FCEC0)
#define CLASS_2_A30BB86A137EC3FE__CTOR_OFFSET UNITYSDK_OFFSET(0x129FCCE0)

inline static constexpr unsigned int Class_2_A30BB86A137EC3FE_TypeDefinitionIndex = 49111;

class Class_2_A30BB86A137EC3FE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTrackingMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
