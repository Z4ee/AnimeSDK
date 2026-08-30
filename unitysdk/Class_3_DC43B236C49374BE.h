#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByPreCalcStanceDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC43B236C49374BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A70F0)
#define CLASS_3_DC43B236C49374BE__CTOR_OFFSET UNITYSDK_OFFSET(0x159A7010)

inline static constexpr unsigned int Class_3_DC43B236C49374BE_TypeDefinitionIndex = 55650;

class Class_3_DC43B236C49374BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + CLASS_3_DC43B236C49374BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC43B236C49374BE_ONTASKBEGIN_OFFSET))(this);
	}
};
