#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_778D44A66A0719FE.h"

namespace RPG::GameCore { class CreateBattleEventEntityFromStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_F319A0B161FEC6F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160978A0)
#define CLASS_4_F319A0B161FEC6F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16097880)

inline static constexpr unsigned int Class_4_F319A0B161FEC6F4_TypeDefinitionIndex = 55460;

class Class_4_F319A0B161FEC6F4 : public ::Class_3_778D44A66A0719FE
{
public:
	::RPG::GameCore::CreateBattleEventEntityFromStage* Field_4_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventEntityFromStage*))((::PBYTE)hIl2Cpp + CLASS_4_F319A0B161FEC6F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F319A0B161FEC6F4_ONTASKBEGIN_OFFSET))(this);
	}
};
