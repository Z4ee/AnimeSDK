#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_108;
class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HealHP; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_718B98EA5CDC7096_OFFSET UNITYSDK_OFFSET(0x9030C60)
#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_74197A0337864066_1_OFFSET UNITYSDK_OFFSET(0x9030F20)
#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_74197A0337864066_OFFSET UNITYSDK_OFFSET(0x90302D0)
#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_92CF59120A28AA50_OFFSET UNITYSDK_OFFSET(0x9031080)
#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_FC3037CD0D831D22_OFFSET UNITYSDK_OFFSET(0x9030430)
#define CLASS_3_6093D0AAAE71F4DA_METHOD_3_FCAF8B36BAF79EDC_OFFSET UNITYSDK_OFFSET(0x9030150)
#define CLASS_3_6093D0AAAE71F4DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x902F7A0)
#define CLASS_3_6093D0AAAE71F4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x902F770)

inline static constexpr unsigned int Class_3_6093D0AAAE71F4DA_TypeDefinitionIndex = 50786;

class Class_3_6093D0AAAE71F4DA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HealHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HealHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_3_FC3037CD0D831D22(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_5909FD7779934CCA& a4)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA&))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_FC3037CD0D831D22_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_FCAF8B36BAF79EDC(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_108* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_108*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_FCAF8B36BAF79EDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_74197A0337864066(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_108* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_108*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_74197A0337864066_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_718B98EA5CDC7096(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_108* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_108*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_718B98EA5CDC7096_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_74197A0337864066_1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_108* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_108*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_74197A0337864066_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_92CF59120A28AA50(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierEvent a2, ::Class_1_5469D397DAE62876* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierEvent, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + CLASS_3_6093D0AAAE71F4DA_METHOD_3_92CF59120A28AA50_OFFSET))(this, a1, a2, a3);
	}
};
