#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueCurrentSkillUseParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBF6FCD824451814_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB716690)
#define CLASS_3_BBF6FCD824451814__CTOR_OFFSET UNITYSDK_OFFSET(0xB7165B0)

inline static constexpr unsigned int Class_3_BBF6FCD824451814_TypeDefinitionIndex = 55674;

class Class_3_BBF6FCD824451814 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + CLASS_3_BBF6FCD824451814__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBF6FCD824451814_ONTASKBEGIN_OFFSET))(this);
	}
};
