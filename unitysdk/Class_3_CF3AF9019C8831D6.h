#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetUltraSkillInnerPieProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CF3AF9019C8831D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D60290)
#define CLASS_3_CF3AF9019C8831D6__CTOR_OFFSET UNITYSDK_OFFSET(0x16D60260)

inline static constexpr unsigned int Class_3_CF3AF9019C8831D6_TypeDefinitionIndex = 53070;

class Class_3_CF3AF9019C8831D6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetUltraSkillInnerPieProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*))((::PBYTE)hIl2Cpp + CLASS_3_CF3AF9019C8831D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF3AF9019C8831D6_ONTASKBEGIN_OFFSET))(this);
	}
};
