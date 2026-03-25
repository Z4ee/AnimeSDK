#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByPreCalcStanceDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC43B236C49374BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9C0E70)
#define CLASS_3_DC43B236C49374BE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C0D90)

inline static constexpr unsigned int Class_3_DC43B236C49374BE_TypeDefinitionIndex = 44411;

class Class_3_DC43B236C49374BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + CLASS_3_DC43B236C49374BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC43B236C49374BE_ONTASKBEGIN_OFFSET))(this);
	}
};
