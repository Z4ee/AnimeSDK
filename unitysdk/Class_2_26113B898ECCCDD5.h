#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_C22B3EED69F1AB77;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_26113B898ECCCDD5_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x18D3A8E0)
#define CLASS_2_26113B898ECCCDD5_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D3A8F0)
#define CLASS_2_26113B898ECCCDD5_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18D3AA30)
#define CLASS_2_26113B898ECCCDD5_METHOD_2_8F7DCB1D877E8A80_OFFSET UNITYSDK_OFFSET(0x18D3AB50)
#define CLASS_2_26113B898ECCCDD5_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18D3A9A0)
#define CLASS_2_26113B898ECCCDD5__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3AD90)

inline static constexpr unsigned int Class_2_26113B898ECCCDD5_TypeDefinitionIndex = 53978;

class Class_2_26113B898ECCCDD5 : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_3_C22B3EED69F1AB77* FIGPNKAHDHL; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::RtAbilityProperty, ::System::Int32>>* LDNHOKKHOCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_8F7DCB1D877E8A80(::RPG::GameCore::RtAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5_METHOD_2_8F7DCB1D877E8A80_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26113B898ECCCDD5_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}
};
