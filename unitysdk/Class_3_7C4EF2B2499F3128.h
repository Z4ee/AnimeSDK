#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterHeadResetLookAtSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C4EF2B2499F3128_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C5BFB0)
#define CLASS_3_7C4EF2B2499F3128__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5BF80)

inline static constexpr unsigned int Class_3_7C4EF2B2499F3128_TypeDefinitionIndex = 46780;

class Class_3_7C4EF2B2499F3128 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CharacterHeadResetLookAtSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_7C4EF2B2499F3128__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C4EF2B2499F3128_ONTASKBEGIN_OFFSET))(this);
	}
};
