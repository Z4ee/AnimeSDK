#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NotifyGameModeParamChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_488B265B13D2AACB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16944F20)
#define CLASS_3_488B265B13D2AACB__CTOR_OFFSET UNITYSDK_OFFSET(0x16944EF0)

inline static constexpr unsigned int Class_3_488B265B13D2AACB_TypeDefinitionIndex = 55438;

class Class_3_488B265B13D2AACB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyGameModeParamChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyGameModeParamChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyGameModeParamChange*))((::PBYTE)hIl2Cpp + CLASS_3_488B265B13D2AACB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_488B265B13D2AACB_ONTASKBEGIN_OFFSET))(this);
	}
};
