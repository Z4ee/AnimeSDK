#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetSimulationSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AA30E1A94CD8DCE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149E6430)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149E62A0)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x149E6380)
#define CLASS_2_AA30E1A94CD8DCE6_TICK_OFFSET UNITYSDK_OFFSET(0x149E63D0)
#define CLASS_2_AA30E1A94CD8DCE6__CTOR_OFFSET UNITYSDK_OFFSET(0x149E6290)

inline static constexpr unsigned int Class_2_AA30E1A94CD8DCE6_TypeDefinitionIndex = 53885;

class Class_2_AA30E1A94CD8DCE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetSimulationSpeedEnable* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSimulationSpeedEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSimulationSpeedEnable*))((::PBYTE)hIl2Cpp + CLASS_2_AA30E1A94CD8DCE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA30E1A94CD8DCE6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA30E1A94CD8DCE6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AA30E1A94CD8DCE6_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA30E1A94CD8DCE6_DISPOSE_OFFSET))(this);
	}
};
