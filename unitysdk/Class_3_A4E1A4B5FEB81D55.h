#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RA_SetAIVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A4E1A4B5FEB81D55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF378DE0)
#define CLASS_3_A4E1A4B5FEB81D55__CTOR_OFFSET UNITYSDK_OFFSET(0xF378DB0)

inline static constexpr unsigned int Class_3_A4E1A4B5FEB81D55_TypeDefinitionIndex = 42125;

class Class_3_A4E1A4B5FEB81D55 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RA_SetAIVariableFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetAIVariableFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetAIVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_3_A4E1A4B5FEB81D55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4E1A4B5FEB81D55_ONTASKBEGIN_OFFSET))(this);
	}
};
