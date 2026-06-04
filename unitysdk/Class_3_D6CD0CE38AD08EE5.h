#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D6CD0CE38AD08EE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13824CF0)
#define CLASS_3_D6CD0CE38AD08EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x13824CC0)

inline static constexpr unsigned int Class_3_D6CD0CE38AD08EE5_TypeDefinitionIndex = 52718;

class Class_3_D6CD0CE38AD08EE5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SyncAnimWithBgm*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncAnimWithBgm* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + CLASS_3_D6CD0CE38AD08EE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6CD0CE38AD08EE5_ONTASKBEGIN_OFFSET))(this);
	}
};
