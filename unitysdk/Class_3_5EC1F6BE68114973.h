#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByAttackDamageData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5EC1F6BE68114973_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1675AF80)
#define CLASS_3_5EC1F6BE68114973__CTOR_OFFSET UNITYSDK_OFFSET(0x1675AEA0)

inline static constexpr unsigned int Class_3_5EC1F6BE68114973_TypeDefinitionIndex = 52896;

class Class_3_5EC1F6BE68114973 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByAttackDamageData*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*))((::PBYTE)hIl2Cpp + CLASS_3_5EC1F6BE68114973__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC1F6BE68114973_ONTASKBEGIN_OFFSET))(this);
	}
};
