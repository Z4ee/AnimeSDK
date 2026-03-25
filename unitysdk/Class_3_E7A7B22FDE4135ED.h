#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLevelChallengeTurnLimit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E7A7B22FDE4135ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116B0170)
#define CLASS_3_E7A7B22FDE4135ED__CTOR_OFFSET UNITYSDK_OFFSET(0x116B0140)

inline static constexpr unsigned int Class_3_E7A7B22FDE4135ED_TypeDefinitionIndex = 44470;

class Class_3_E7A7B22FDE4135ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLevelChallengeTurnLimit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLevelChallengeTurnLimit*))((::PBYTE)hIl2Cpp + CLASS_3_E7A7B22FDE4135ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7A7B22FDE4135ED_ONTASKBEGIN_OFFSET))(this);
	}
};
