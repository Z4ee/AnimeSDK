#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAllMissionWaypointsVisiable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FAEAEB44B518973C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFE3180)
#define CLASS_3_FAEAEB44B518973C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE3150)

inline static constexpr unsigned int Class_3_FAEAEB44B518973C_TypeDefinitionIndex = 53934;

class Class_3_FAEAEB44B518973C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAllMissionWaypointsVisiable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*))((::PBYTE)hIl2Cpp + CLASS_3_FAEAEB44B518973C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAEAEB44B518973C_ONTASKBEGIN_OFFSET))(this);
	}
};
