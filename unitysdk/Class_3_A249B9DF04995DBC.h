#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBlendShapesEmotion; }

#define CLASS_3_A249B9DF04995DBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0903C0)
#define CLASS_3_A249B9DF04995DBC__CTOR_OFFSET UNITYSDK_OFFSET(0xC090390)

inline static constexpr unsigned int Class_3_A249B9DF04995DBC_TypeDefinitionIndex = 56092;

class Class_3_A249B9DF04995DBC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerBlendShapesEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBlendShapesEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBlendShapesEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A249B9DF04995DBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A249B9DF04995DBC_ONTASKBEGIN_OFFSET))(this);
	}
};
