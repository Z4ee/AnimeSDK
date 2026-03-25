#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetTeamLocation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5BB5984D9565F222_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116AFE60)
#define CLASS_3_5BB5984D9565F222__CTOR_OFFSET UNITYSDK_OFFSET(0x116AFE30)

inline static constexpr unsigned int Class_3_5BB5984D9565F222_TypeDefinitionIndex = 45367;

class Class_3_5BB5984D9565F222 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetTeamLocation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetTeamLocation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetTeamLocation*))((::PBYTE)hIl2Cpp + CLASS_3_5BB5984D9565F222__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BB5984D9565F222_ONTASKBEGIN_OFFSET))(this);
	}
};
