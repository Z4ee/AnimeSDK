#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DetachAvatarChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E92DFEA11D7692B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA481B00)
#define CLASS_3_8E92DFEA11D7692B__CTOR_OFFSET UNITYSDK_OFFSET(0xA481AD0)

inline static constexpr unsigned int Class_3_8E92DFEA11D7692B_TypeDefinitionIndex = 51267;

class Class_3_8E92DFEA11D7692B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DetachAvatarChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DetachAvatarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DetachAvatarChange*))((::PBYTE)hIl2Cpp + CLASS_3_8E92DFEA11D7692B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E92DFEA11D7692B_ONTASKBEGIN_OFFSET))(this);
	}
};
