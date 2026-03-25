#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLookAt; }

#define CLASS_3_8B568C3B413F9D03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AC6C30)
#define CLASS_3_8B568C3B413F9D03__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC6C00)

inline static constexpr unsigned int Class_3_8B568C3B413F9D03_TypeDefinitionIndex = 44620;

class Class_3_8B568C3B413F9D03 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TeamLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_8B568C3B413F9D03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B568C3B413F9D03_ONTASKBEGIN_OFFSET))(this);
	}
};
