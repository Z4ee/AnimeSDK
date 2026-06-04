#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class ST_Side_EnableInteractionTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F289AAE084561EDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14573A10)
#define CLASS_3_F289AAE084561EDE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14573AC0)
#define CLASS_3_F289AAE084561EDE__CTOR_OFFSET UNITYSDK_OFFSET(0x145739B0)

inline static constexpr unsigned int Class_3_F289AAE084561EDE_TypeDefinitionIndex = 48842;

class Class_3_F289AAE084561EDE : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_EnableInteractionTrigger*>
{
public:
	::RPG::GameCore::ColliderTriggerComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_F289AAE084561EDE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F289AAE084561EDE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F289AAE084561EDE_ONTASKRESET_OFFSET))(this);
	}
};
