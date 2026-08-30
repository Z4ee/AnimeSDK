#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowChallengeSuccessToastUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D57874A3D2EC049_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19980020)
#define CLASS_3_7D57874A3D2EC049__CTOR_OFFSET UNITYSDK_OFFSET(0x1997FFF0)

inline static constexpr unsigned int Class_3_7D57874A3D2EC049_TypeDefinitionIndex = 53521;

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
