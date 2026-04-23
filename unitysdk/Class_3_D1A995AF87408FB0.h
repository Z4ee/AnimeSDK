#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMoveResume; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D1A995AF87408FB0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1180EFB0)
#define CLASS_3_D1A995AF87408FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1180EF80)

inline static constexpr unsigned int Class_3_D1A995AF87408FB0_TypeDefinitionIndex = 53617;

class Class_3_D1A995AF87408FB0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMoveResume*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveResume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveResume*))((::PBYTE)hIl2Cpp + CLASS_3_D1A995AF87408FB0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D1A995AF87408FB0_ONTASKBEGIN_OFFSET))(this);
	}
};
