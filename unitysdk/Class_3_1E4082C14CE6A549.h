#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitLittleGameWithLevelConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1E4082C14CE6A549_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB769800)
#define CLASS_3_1E4082C14CE6A549__CTOR_OFFSET UNITYSDK_OFFSET(0xB7697D0)

inline static constexpr unsigned int Class_3_1E4082C14CE6A549_TypeDefinitionIndex = 53232;

class Class_3_1E4082C14CE6A549 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitLittleGameWithLevelConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E4082C14CE6A549__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E4082C14CE6A549_ONTASKBEGIN_OFFSET))(this);
	}
};
