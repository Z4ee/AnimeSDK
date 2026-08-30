#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityEvent; }

#define CLASS_3_FBD9479BE5544176_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBDB880)
#define CLASS_3_FBD9479BE5544176__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDB850)

inline static constexpr unsigned int Class_3_FBD9479BE5544176_TypeDefinitionIndex = 52797;

class Class_3_FBD9479BE5544176 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerEntityEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityEvent*))((::PBYTE)hIl2Cpp + CLASS_3_FBD9479BE5544176__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBD9479BE5544176_ONTASKBEGIN_OFFSET))(this);
	}
};
