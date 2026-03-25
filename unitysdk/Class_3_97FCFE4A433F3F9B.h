#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97FCFE4A433F3F9B_METHOD_3_79E3564873031768_OFFSET UNITYSDK_OFFSET(0x1114E740)
#define CLASS_3_97FCFE4A433F3F9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1114E630)
#define CLASS_3_97FCFE4A433F3F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1114E600)

inline static constexpr unsigned int Class_3_97FCFE4A433F3F9B_TypeDefinitionIndex = 47211;

class Class_3_97FCFE4A433F3F9B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleConditionProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + CLASS_3_97FCFE4A433F3F9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97FCFE4A433F3F9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_79E3564873031768(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_97FCFE4A433F3F9B_METHOD_3_79E3564873031768_OFFSET))(this, a1, a2);
	}
};
