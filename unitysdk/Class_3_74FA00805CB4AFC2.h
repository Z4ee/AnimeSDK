#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventurePauseTeamDataRefresh; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_74FA00805CB4AFC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BAC1F0)
#define CLASS_3_74FA00805CB4AFC2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAC1C0)

inline static constexpr unsigned int Class_3_74FA00805CB4AFC2_TypeDefinitionIndex = 58061;

class Class_3_74FA00805CB4AFC2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventurePauseTeamDataRefresh*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + CLASS_3_74FA00805CB4AFC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74FA00805CB4AFC2_ONTASKBEGIN_OFFSET))(this);
	}
};
