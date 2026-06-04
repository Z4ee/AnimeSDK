#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetEntityFadeWithAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9CF0A9368636F83_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1420B150)
#define CLASS_3_F9CF0A9368636F83__CTOR_OFFSET UNITYSDK_OFFSET(0x1420B120)

inline static constexpr unsigned int Class_3_F9CF0A9368636F83_TypeDefinitionIndex = 54735;

class Class_3_F9CF0A9368636F83 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetEntityFadeWithAnim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*))((::PBYTE)hIl2Cpp + CLASS_3_F9CF0A9368636F83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9CF0A9368636F83_ONTASKBEGIN_OFFSET))(this);
	}
};
