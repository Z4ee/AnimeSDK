#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByTotalHPFromMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2387560EA9142C77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113DB910)
#define CLASS_3_2387560EA9142C77__CTOR_OFFSET UNITYSDK_OFFSET(0x113DB830)

inline static constexpr unsigned int Class_3_2387560EA9142C77_TypeDefinitionIndex = 44426;

class Class_3_2387560EA9142C77 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*))((::PBYTE)hIl2Cpp + CLASS_3_2387560EA9142C77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2387560EA9142C77_ONTASKBEGIN_OFFSET))(this);
	}
};
