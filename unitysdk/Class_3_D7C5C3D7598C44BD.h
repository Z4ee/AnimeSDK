#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D7C5C3D7598C44BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E18D80)
#define CLASS_3_D7C5C3D7598C44BD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E18D50)

inline static constexpr unsigned int Class_3_D7C5C3D7598C44BD_TypeDefinitionIndex = 52530;

class Class_3_D7C5C3D7598C44BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityRelationGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityRelationGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityRelationGroup*))((::PBYTE)hIl2Cpp + CLASS_3_D7C5C3D7598C44BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7C5C3D7598C44BD_ONTASKBEGIN_OFFSET))(this);
	}
};
