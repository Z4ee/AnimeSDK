#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyTeamBoostPointMax; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_705AC48C9E14A961_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A76750)
#define CLASS_3_705AC48C9E14A961__CTOR_OFFSET UNITYSDK_OFFSET(0x9A76720)

inline static constexpr unsigned int Class_3_705AC48C9E14A961_TypeDefinitionIndex = 50909;

class Class_3_705AC48C9E14A961 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyTeamBoostPointMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyTeamBoostPointMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyTeamBoostPointMax*))((::PBYTE)hIl2Cpp + CLASS_3_705AC48C9E14A961__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_705AC48C9E14A961_ONTASKBEGIN_OFFSET))(this);
	}
};
