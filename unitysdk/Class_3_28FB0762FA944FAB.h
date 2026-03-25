#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityEventV2; }

#define CLASS_3_28FB0762FA944FAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A8F080)
#define CLASS_3_28FB0762FA944FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8F050)

inline static constexpr unsigned int Class_3_28FB0762FA944FAB_TypeDefinitionIndex = 42537;

class Class_3_28FB0762FA944FAB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerEntityEventV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityEventV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityEventV2*))((::PBYTE)hIl2Cpp + CLASS_3_28FB0762FA944FAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28FB0762FA944FAB_ONTASKBEGIN_OFFSET))(this);
	}
};
