#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RogueMagicShowScepterActiveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_20A99DAA1DCFA2EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115E3870)
#define CLASS_3_20A99DAA1DCFA2EF__CTOR_OFFSET UNITYSDK_OFFSET(0x115E3840)

inline static constexpr unsigned int Class_3_20A99DAA1DCFA2EF_TypeDefinitionIndex = 47171;

class Class_3_20A99DAA1DCFA2EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueMagicShowScepterActiveEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*))((::PBYTE)hIl2Cpp + CLASS_3_20A99DAA1DCFA2EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20A99DAA1DCFA2EF_ONTASKBEGIN_OFFSET))(this);
	}
};
