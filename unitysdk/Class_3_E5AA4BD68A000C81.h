#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5AA4BD68A000C81_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11963C70)
#define CLASS_3_E5AA4BD68A000C81__CTOR_OFFSET UNITYSDK_OFFSET(0x11963C40)

inline static constexpr unsigned int Class_3_E5AA4BD68A000C81_TypeDefinitionIndex = 44501;

class Class_3_E5AA4BD68A000C81 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetStanceCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStanceCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + CLASS_3_E5AA4BD68A000C81__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5AA4BD68A000C81_ONTASKBEGIN_OFFSET))(this);
	}
};
