#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureModifyTeamPlayerSP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9377A7F921730736_METHOD_3_773F849686D7F792_OFFSET UNITYSDK_OFFSET(0xC4EA060)
#define CLASS_3_9377A7F921730736_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4E9B60)
#define CLASS_3_9377A7F921730736__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E9B30)

inline static constexpr unsigned int Class_3_9377A7F921730736_TypeDefinitionIndex = 46689;

class Class_3_9377A7F921730736 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureModifyTeamPlayerSP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + CLASS_3_9377A7F921730736__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9377A7F921730736_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_773F849686D7F792(::RPG::Client::MemberData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + CLASS_3_9377A7F921730736_METHOD_3_773F849686D7F792_OFFSET))(this, a1);
	}
};
