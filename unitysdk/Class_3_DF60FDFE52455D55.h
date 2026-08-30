#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetAIStop; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF60FDFE52455D55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1592DA70)
#define CLASS_3_DF60FDFE52455D55__CTOR_OFFSET UNITYSDK_OFFSET(0x1592DA40)

inline static constexpr unsigned int Class_3_DF60FDFE52455D55_TypeDefinitionIndex = 52765;

class Class_3_DF60FDFE52455D55 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetAIStop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIStop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIStop*))((::PBYTE)hIl2Cpp + CLASS_3_DF60FDFE52455D55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF60FDFE52455D55_ONTASKBEGIN_OFFSET))(this);
	}
};
