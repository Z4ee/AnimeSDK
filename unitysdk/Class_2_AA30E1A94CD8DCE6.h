#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetSimulationSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AA30E1A94CD8DCE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9E4DF0)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9E4C60)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9E4D40)
#define CLASS_2_AA30E1A94CD8DCE6_TICK_OFFSET UNITYSDK_OFFSET(0xA9E4D90)
#define CLASS_2_AA30E1A94CD8DCE6__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E4C50)

inline static constexpr unsigned int Class_2_AA30E1A94CD8DCE6_TypeDefinitionIndex = 52676;

class Class_2_AA30E1A94CD8DCE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetSimulationSpeedEnable* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
