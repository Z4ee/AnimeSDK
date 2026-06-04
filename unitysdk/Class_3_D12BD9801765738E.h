#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D12BD9801765738E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142F1B80)
#define CLASS_3_D12BD9801765738E__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1B50)

inline static constexpr unsigned int Class_3_D12BD9801765738E_TypeDefinitionIndex = 52006;

class Class_3_D12BD9801765738E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearChallengeBossInfoPanelState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_3_D12BD9801765738E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12BD9801765738E_ONTASKBEGIN_OFFSET))(this);
	}
};
