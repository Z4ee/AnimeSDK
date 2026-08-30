#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class Class_1_43BD383C98B4C0C5_130;
class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HealHP; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_BFED649DD47EC8A5_METHOD_3_74197A0337864066_1_OFFSET UNITYSDK_OFFSET(0x17CA6280)
#define CLASS_3_BFED649DD47EC8A5_METHOD_3_74197A0337864066_OFFSET UNITYSDK_OFFSET(0x17CA5910)
#define CLASS_3_BFED649DD47EC8A5_METHOD_3_92CF59120A28AA50_OFFSET UNITYSDK_OFFSET(0x17CA63E0)
#define CLASS_3_BFED649DD47EC8A5_METHOD_3_B4F2463760064D0D_OFFSET UNITYSDK_OFFSET(0x17CA5F40)
#define CLASS_3_BFED649DD47EC8A5_METHOD_3_EAA63686BD45042F_OFFSET UNITYSDK_OFFSET(0x17CA5A70)
#define CLASS_3_BFED649DD47EC8A5_METHOD_3_FCAF8B36BAF79EDC_OFFSET UNITYSDK_OFFSET(0x17CA5790)
#define CLASS_3_BFED649DD47EC8A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CA4D60)
#define CLASS_3_BFED649DD47EC8A5__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA4D30)

inline static constexpr unsigned int Class_3_BFED649DD47EC8A5_TypeDefinitionIndex = 55295;

class Class_3_BFED649DD47EC8A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HealHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HealHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_EAA63686BD45042F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA& a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA&))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_EAA63686BD45042F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FCAF8B36BAF79EDC(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_130* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_FCAF8B36BAF79EDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_74197A0337864066(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_130* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_74197A0337864066_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B4F2463760064D0D(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_130* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_B4F2463760064D0D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_74197A0337864066_1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_43BD383C98B4C0C5_130* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_74197A0337864066_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_92CF59120A28AA50(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierEvent a2, ::Class_1_5469D397DAE62876* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierEvent, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + CLASS_3_BFED649DD47EC8A5_METHOD_3_92CF59120A28AA50_OFFSET))(this, a1, a2, a3);
	}
};
