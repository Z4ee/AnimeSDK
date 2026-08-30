#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGroupEventOnDialogEnd; }

#define CLASS_3_38AFD44A433A7549_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CFE560)
#define CLASS_3_38AFD44A433A7549__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFE530)

inline static constexpr unsigned int Class_3_38AFD44A433A7549_TypeDefinitionIndex = 53706;

class Class_3_38AFD44A433A7549 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerGroupEventOnDialogEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*))((::PBYTE)hIl2Cpp + CLASS_3_38AFD44A433A7549__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38AFD44A433A7549_ONTASKBEGIN_OFFSET))(this);
	}
};
