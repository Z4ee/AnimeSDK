#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_670B4171F91A94DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AB64D0)
#define CLASS_3_670B4171F91A94DA__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB64A0)

inline static constexpr unsigned int Class_3_670B4171F91A94DA_TypeDefinitionIndex = 44451;

class Class_3_670B4171F91A94DA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityFollowAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_670B4171F91A94DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_670B4171F91A94DA_ONTASKBEGIN_OFFSET))(this);
	}
};
