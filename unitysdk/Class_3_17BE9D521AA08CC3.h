#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomPhotoGraphCondition; }

#define CLASS_3_17BE9D521AA08CC3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169C4D60)
#define CLASS_3_17BE9D521AA08CC3__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4D30)

inline static constexpr unsigned int Class_3_17BE9D521AA08CC3_TypeDefinitionIndex = 51018;

class Class_3_17BE9D521AA08CC3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerCustomPhotoGraphCondition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*))((::PBYTE)hIl2Cpp + CLASS_3_17BE9D521AA08CC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17BE9D521AA08CC3_ONTASKBEGIN_OFFSET))(this);
	}
};
