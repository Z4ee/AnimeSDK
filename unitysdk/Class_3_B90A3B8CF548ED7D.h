#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BoomRobotGameplayEnterBoomCam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B90A3B8CF548ED7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA557BB0)
#define CLASS_3_B90A3B8CF548ED7D__CTOR_OFFSET UNITYSDK_OFFSET(0xA557B80)

inline static constexpr unsigned int Class_3_B90A3B8CF548ED7D_TypeDefinitionIndex = 49141;

class Class_3_B90A3B8CF548ED7D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BoomRobotGameplayEnterBoomCam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*))((::PBYTE)hIl2Cpp + CLASS_3_B90A3B8CF548ED7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B90A3B8CF548ED7D_ONTASKBEGIN_OFFSET))(this);
	}
};
