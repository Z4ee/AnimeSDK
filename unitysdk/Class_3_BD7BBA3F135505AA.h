#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideWaypointByProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BD7BBA3F135505AA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A5F2F0)
#define CLASS_3_BD7BBA3F135505AA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F2C0)

inline static constexpr unsigned int Class_3_BD7BBA3F135505AA_TypeDefinitionIndex = 53641;

class Class_3_BD7BBA3F135505AA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideWaypointByProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideWaypointByProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideWaypointByProp*))((::PBYTE)hIl2Cpp + CLASS_3_BD7BBA3F135505AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD7BBA3F135505AA_ONTASKBEGIN_OFFSET))(this);
	}
};
