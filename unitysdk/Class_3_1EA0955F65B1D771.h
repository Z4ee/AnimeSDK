#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTeamLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EA0955F65B1D771_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16935EC0)
#define CLASS_3_1EA0955F65B1D771__CTOR_OFFSET UNITYSDK_OFFSET(0x16935E90)

inline static constexpr unsigned int Class_3_1EA0955F65B1D771_TypeDefinitionIndex = 55774;

class Class_3_1EA0955F65B1D771 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTeamLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1EA0955F65B1D771__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EA0955F65B1D771_ONTASKBEGIN_OFFSET))(this);
	}
};
