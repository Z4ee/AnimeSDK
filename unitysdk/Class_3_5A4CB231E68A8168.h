#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByAttackTargetCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A4CB231E68A8168_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x877D160)
#define CLASS_3_5A4CB231E68A8168__CTOR_OFFSET UNITYSDK_OFFSET(0x877D080)

inline static constexpr unsigned int Class_3_5A4CB231E68A8168_TypeDefinitionIndex = 44379;

class Class_3_5A4CB231E68A8168 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByAttackTargetCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + CLASS_3_5A4CB231E68A8168__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A4CB231E68A8168_ONTASKBEGIN_OFFSET))(this);
	}
};
