#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PeiPeiChallengeUpdateCheckPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_569A85C8DFDDA016_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16346960)
#define CLASS_3_569A85C8DFDDA016__CTOR_OFFSET UNITYSDK_OFFSET(0x16346930)

inline static constexpr unsigned int Class_3_569A85C8DFDDA016_TypeDefinitionIndex = 53338;

class Class_3_569A85C8DFDDA016 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + CLASS_3_569A85C8DFDDA016__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_569A85C8DFDDA016_ONTASKBEGIN_OFFSET))(this);
	}
};
