#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAvatarGlobalBuffState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B081939696546F22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143C3900)
#define CLASS_3_B081939696546F22__CTOR_OFFSET UNITYSDK_OFFSET(0x143C38D0)

inline static constexpr unsigned int Class_3_B081939696546F22_TypeDefinitionIndex = 51703;

class Class_3_B081939696546F22 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAvatarGlobalBuffState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarGlobalBuffState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarGlobalBuffState*))((::PBYTE)hIl2Cpp + CLASS_3_B081939696546F22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B081939696546F22_ONTASKBEGIN_OFFSET))(this);
	}
};
