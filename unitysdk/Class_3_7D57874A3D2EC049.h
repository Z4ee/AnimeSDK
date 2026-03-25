#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowChallengeSuccessToastUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D57874A3D2EC049_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115C4FB0)
#define CLASS_3_7D57874A3D2EC049__CTOR_OFFSET UNITYSDK_OFFSET(0x115C4F80)

inline static constexpr unsigned int Class_3_7D57874A3D2EC049_TypeDefinitionIndex = 43126;

class Class_3_7D57874A3D2EC049 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowChallengeSuccessToastUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + CLASS_3_7D57874A3D2EC049__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D57874A3D2EC049_ONTASKBEGIN_OFFSET))(this);
	}
};
