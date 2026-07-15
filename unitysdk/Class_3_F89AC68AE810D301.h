#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBattleTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F89AC68AE810D301_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AF6940)
#define CLASS_3_F89AC68AE810D301__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF67B0)

inline static constexpr unsigned int Class_3_F89AC68AE810D301_TypeDefinitionIndex = 55914;

class Class_3_F89AC68AE810D301 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBattleTargetProgress*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*))((::PBYTE)hIl2Cpp + CLASS_3_F89AC68AE810D301__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F89AC68AE810D301_ONTASKBEGIN_OFFSET))(this);
	}
};
