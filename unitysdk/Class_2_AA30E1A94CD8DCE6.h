#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetSimulationSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AA30E1A94CD8DCE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164BCD00)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164BCB70)
#define CLASS_2_AA30E1A94CD8DCE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164BCC50)
#define CLASS_2_AA30E1A94CD8DCE6_TICK_OFFSET UNITYSDK_OFFSET(0x164BCCA0)
#define CLASS_2_AA30E1A94CD8DCE6__CTOR_OFFSET UNITYSDK_OFFSET(0x164BCB60)

inline static constexpr unsigned int Class_2_AA30E1A94CD8DCE6_TypeDefinitionIndex = 56605;

class Class_2_AA30E1A94CD8DCE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetSimulationSpeedEnable* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
