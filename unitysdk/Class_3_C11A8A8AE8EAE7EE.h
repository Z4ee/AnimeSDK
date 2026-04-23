#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C11A8A8AE8EAE7EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124F4A60)
#define CLASS_3_C11A8A8AE8EAE7EE__CTOR_OFFSET UNITYSDK_OFFSET(0x124F4A30)

inline static constexpr unsigned int Class_3_C11A8A8AE8EAE7EE_TypeDefinitionIndex = 53852;

class Class_3_C11A8A8AE8EAE7EE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveAdventureModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAdventureModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAdventureModifier*))((::PBYTE)hIl2Cpp + CLASS_3_C11A8A8AE8EAE7EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C11A8A8AE8EAE7EE_ONTASKBEGIN_OFFSET))(this);
	}
};
