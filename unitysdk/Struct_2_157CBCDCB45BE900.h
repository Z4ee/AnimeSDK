#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define STRUCT_2_157CBCDCB45BE900_METHOD_2_54A68A0D0DA6728B_OFFSET UNITYSDK_OFFSET(0x82500)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_583925209C036542_OFFSET UNITYSDK_OFFSET(0x825B0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_81666D6D281508EC_OFFSET UNITYSDK_OFFSET(0x82320)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_1_OFFSET UNITYSDK_OFFSET(0x825A0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_OFFSET UNITYSDK_OFFSET(0x82590)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_E1FE718ED81E3997_OFFSET UNITYSDK_OFFSET(0x82510)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0x82460)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_2_OFFSET UNITYSDK_OFFSET(0x824B0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x82410)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x82520)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_F5D19D54B71B8622_OFFSET UNITYSDK_OFFSET(0x825C0)

inline static constexpr unsigned int Struct_2_157CBCDCB45BE900_TypeDefinitionIndex = 71186;

struct alignas(8) Struct_2_157CBCDCB45BE900
{
	::RPG::GameCore::FixPoint BBFHOCJBANF; // 0x10
	::System::Boolean JOPOPHGFFOH; // 0x18
	::System::Int32 CPANPFMHGGC; // 0x1C
	::System::Boolean CLJPKHNNCIC; // 0x20
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x24
	::System::Boolean ACONGCKJHHK; // 0x28
	::RPG::GameCore::FixPoint PHEJKKEMLBN; // 0x30
	::RPG::GameCore::FixPoint ILPIHPMBEFP; // 0x38
	::RPG::GameCore::FixPoint HPCHCEFOKJB; // 0x40
	::RPG::GameCore::FixPoint NAOCOCNDABE; // 0x48
	::RPG::GameCore::FixPoint CIEIMABNDPI; // 0x50
	::RPG::GameCore::AbilityLinearProperty CDDCDOMMNDH; // 0x58

	::RPG::GameCore::FixPoint Method_2_81666D6D281508EC()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_81666D6D281508EC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_E2C273CA106EBD0B_2_OFFSET))(this);
	}

	::System::Void Method_2_54A68A0D0DA6728B(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_54A68A0D0DA6728B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1FE718ED81E3997(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_E1FE718ED81E3997_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Void Method_2_C637B89148B0D97C(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C637B89148B0D97C_1(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_2_583925209C036542(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_583925209C036542_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5D19D54B71B8622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_F5D19D54B71B8622_OFFSET))(this);
	}
};
