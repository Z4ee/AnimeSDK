#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DE80468DEC30830D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DB58D0)
#define CLASS_3_DE80468DEC30830D__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB57F0)

inline static constexpr unsigned int Class_3_DE80468DEC30830D_TypeDefinitionIndex = 55657;

class Class_3_DE80468DEC30830D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByShield*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByShield*))((::PBYTE)hIl2Cpp + CLASS_3_DE80468DEC30830D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE80468DEC30830D_ONTASKBEGIN_OFFSET))(this);
	}
};
