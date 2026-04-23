#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B70535DC8E3FD57D.h"

namespace RPG::GameCore { class CreateBattleEventEntityFromStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_F319A0B161FEC6F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9B8E0F0)
#define CLASS_4_F319A0B161FEC6F4__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8E0D0)
#define CLASS_4_F319A0B161FEC6F4___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9B8E560)

inline static constexpr unsigned int Class_4_F319A0B161FEC6F4_TypeDefinitionIndex = 53524;

class Class_4_F319A0B161FEC6F4 : public ::Class_3_B70535DC8E3FD57D
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

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F319A0B161FEC6F4___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
