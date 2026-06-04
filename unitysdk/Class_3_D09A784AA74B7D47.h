#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddReShaSwitchProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D09A784AA74B7D47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13AB7070)
#define CLASS_3_D09A784AA74B7D47__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB7040)

inline static constexpr unsigned int Class_3_D09A784AA74B7D47_TypeDefinitionIndex = 48929;

class Class_3_D09A784AA74B7D47 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddReShaSwitchProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaSwitchProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaSwitchProp*))((::PBYTE)hIl2Cpp + CLASS_3_D09A784AA74B7D47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D09A784AA74B7D47_ONTASKBEGIN_OFFSET))(this);
	}
};
