#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerEmotion; }

#define CLASS_3_04E9EB2BA69C93D1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FE2FA0)
#define CLASS_3_04E9EB2BA69C93D1__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2F70)

inline static constexpr unsigned int Class_3_04E9EB2BA69C93D1_TypeDefinitionIndex = 53680;

class Class_3_04E9EB2BA69C93D1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_04E9EB2BA69C93D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04E9EB2BA69C93D1_ONTASKBEGIN_OFFSET))(this);
	}
};
