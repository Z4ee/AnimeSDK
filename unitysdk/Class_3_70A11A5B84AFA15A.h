#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideEffectByCharacterType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_70A11A5B84AFA15A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14577B90)
#define CLASS_3_70A11A5B84AFA15A__CTOR_OFFSET UNITYSDK_OFFSET(0x14577B60)

inline static constexpr unsigned int Class_3_70A11A5B84AFA15A_TypeDefinitionIndex = 51337;

class Class_3_70A11A5B84AFA15A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideEffectByCharacterType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEffectByCharacterType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEffectByCharacterType*))((::PBYTE)hIl2Cpp + CLASS_3_70A11A5B84AFA15A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70A11A5B84AFA15A_ONTASKBEGIN_OFFSET))(this);
	}
};
