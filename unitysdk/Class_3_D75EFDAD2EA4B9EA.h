#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class ST_Side_EnableInteractionTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D75EFDAD2EA4B9EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162D5890)
#define CLASS_3_D75EFDAD2EA4B9EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162D5940)
#define CLASS_3_D75EFDAD2EA4B9EA__CTOR_OFFSET UNITYSDK_OFFSET(0x162D57D0)

inline static constexpr unsigned int Class_3_D75EFDAD2EA4B9EA_TypeDefinitionIndex = 49855;

class Class_3_D75EFDAD2EA4B9EA : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_EnableInteractionTrigger*>
{
public:
	::RPG::GameCore::ColliderTriggerComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_D75EFDAD2EA4B9EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D75EFDAD2EA4B9EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D75EFDAD2EA4B9EA_ONTASKRESET_OFFSET))(this);
	}
};
