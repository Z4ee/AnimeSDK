#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetWaypointIgnoreLock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A95598271754E236_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18358920)
#define CLASS_3_A95598271754E236__CTOR_OFFSET UNITYSDK_OFFSET(0x183588F0)

inline static constexpr unsigned int Class_3_A95598271754E236_TypeDefinitionIndex = 58739;

class Class_3_A95598271754E236 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetWaypointIgnoreLock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + CLASS_3_A95598271754E236__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A95598271754E236_ONTASKBEGIN_OFFSET))(this);
	}
};
