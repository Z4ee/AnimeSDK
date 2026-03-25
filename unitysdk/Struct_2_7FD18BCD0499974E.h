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

#define STRUCT_2_7FD18BCD0499974E_METHOD_2_42A29EBA3D5D3E0D_OFFSET UNITYSDK_OFFSET(0x14EB000)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_4ED4F551E50CBE7E_OFFSET UNITYSDK_OFFSET(0x14EB1B0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_54A68A0D0DA6728B_OFFSET UNITYSDK_OFFSET(0x14EAFF0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_762C525A1C2AB78D_OFFSET UNITYSDK_OFFSET(0x14EB1D0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_7AAF7427E05AAACD_OFFSET UNITYSDK_OFFSET(0x14EB010)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_8AB0E5B21DA5133B_OFFSET UNITYSDK_OFFSET(0x14EB1C0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_8D42AACAAE5BC5FF_OFFSET UNITYSDK_OFFSET(0x14EB1A0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x24FA0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_2_OFFSET UNITYSDK_OFFSET(0x14EAFE0)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x24F90)
#define STRUCT_2_7FD18BCD0499974E_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x14EAF80)

inline static constexpr unsigned int Struct_2_7FD18BCD0499974E_TypeDefinitionIndex = 58353;

struct alignas(8) Struct_2_7FD18BCD0499974E
{
	::RPG::GameCore::FixPoint Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::RPG::GameCore::TeamType Field_2_4; // 0x24
	::System::Boolean Field_2_5; // 0x28
	::RPG::GameCore::FixPoint Field_2_6; // 0x30
	::RPG::GameCore::FixPoint Field_2_7; // 0x38
	::RPG::GameCore::FixPoint Field_2_8; // 0x40
	::RPG::GameCore::FixPoint Field_2_9; // 0x48
	::RPG::GameCore::FixPoint Field_2_10; // 0x50
	::RPG::GameCore::AbilityLinearProperty Field_2_11; // 0x58

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_8EDB7FE5AA37C50F_2_OFFSET))(this);
	}

	::System::Void Method_2_54A68A0D0DA6728B(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_54A68A0D0DA6728B_OFFSET))(this, a1);
	}

	::System::Void Method_2_42A29EBA3D5D3E0D(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_42A29EBA3D5D3E0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AAF7427E05AAACD(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_7AAF7427E05AAACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D42AACAAE5BC5FF(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_8D42AACAAE5BC5FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4ED4F551E50CBE7E(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_4ED4F551E50CBE7E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_2_8AB0E5B21DA5133B(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_8AB0E5B21DA5133B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_762C525A1C2AB78D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FD18BCD0499974E_METHOD_2_762C525A1C2AB78D_OFFSET))(this);
	}
};
