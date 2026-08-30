#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseToastQueue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F0F0D28696937EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CC1B40)
#define CLASS_3_2F0F0D28696937EB__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC1B10)

inline static constexpr unsigned int Class_3_2F0F0D28696937EB_TypeDefinitionIndex = 53335;

class Class_3_2F0F0D28696937EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseToastQueue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseToastQueue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseToastQueue*))((::PBYTE)hIl2Cpp + CLASS_3_2F0F0D28696937EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F0F0D28696937EB_ONTASKBEGIN_OFFSET))(this);
	}
};
