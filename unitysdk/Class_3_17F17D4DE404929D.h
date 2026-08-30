#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_7AB88D713F5121B3_46;
namespace RPG::GameCore { class SetBattleRougeGoalProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_17F17D4DE404929D_METHOD_3_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0x1536CF80)
#define CLASS_3_17F17D4DE404929D_METHOD_3_59C9C2EFD4EDF51F_OFFSET UNITYSDK_OFFSET(0x1536D020)
#define CLASS_3_17F17D4DE404929D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1536CDC0)
#define CLASS_3_17F17D4DE404929D__CTOR_OFFSET UNITYSDK_OFFSET(0x1536CD90)

inline static constexpr unsigned int Class_3_17F17D4DE404929D_TypeDefinitionIndex = 58670;

class Class_3_17F17D4DE404929D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleRougeGoalProgress*>
{
public:
	::Class_1_7AB88D713F5121B3_46* CHLKHPLPGLJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleRougeGoalProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleRougeGoalProgress*))((::PBYTE)hIl2Cpp + CLASS_3_17F17D4DE404929D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17F17D4DE404929D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_17F17D4DE404929D_METHOD_3_1FF0B87A9F818945_OFFSET))(this, a1);
	}

	::System::Void Method_3_59C9C2EFD4EDF51F(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_17F17D4DE404929D_METHOD_3_59C9C2EFD4EDF51F_OFFSET))(this, a1, a2);
	}
};
