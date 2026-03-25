#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ADC184A0DD4610C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87E6420)
#define CLASS_3_ADC184A0DD4610C8__CTOR_OFFSET UNITYSDK_OFFSET(0x87E63F0)

inline static constexpr unsigned int Class_3_ADC184A0DD4610C8_TypeDefinitionIndex = 44603;

class Class_3_ADC184A0DD4610C8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveChallengeBossInfoPanelState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_3_ADC184A0DD4610C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ADC184A0DD4610C8_ONTASKBEGIN_OFFSET))(this);
	}
};
