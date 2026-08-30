#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_8FF724B7EB760D40;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_52A2BDF959CA88C8_METHOD_3_AEE23E276666D24A_OFFSET UNITYSDK_OFFSET(0xBEA6520)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_C8CB973A093EB12C_OFFSET UNITYSDK_OFFSET(0xBEA5CA0)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_CEFAD4DD6D77081E_OFFSET UNITYSDK_OFFSET(0xBEA6710)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_D3839D75592F183F_OFFSET UNITYSDK_OFFSET(0xBEA6490)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_D75A2DACDE8B27CD_OFFSET UNITYSDK_OFFSET(0xBEA6170)
#define CLASS_3_52A2BDF959CA88C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA5A10)
#define CLASS_3_52A2BDF959CA88C8__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA59B0)

inline static constexpr unsigned int Class_3_52A2BDF959CA88C8_TypeDefinitionIndex = 55461;

class Class_3_52A2BDF959CA88C8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8FF724B7EB760D40*>
{
public:
	::RPG::GameCore::StringHash JJOIEPIHIPG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8FF724B7EB760D40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8FF724B7EB760D40*))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C8CB973A093EB12C(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_METHOD_3_C8CB973A093EB12C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D75A2DACDE8B27CD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_METHOD_3_D75A2DACDE8B27CD_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_3_CEFAD4DD6D77081E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_METHOD_3_CEFAD4DD6D77081E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_D3839D75592F183F(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_METHOD_3_D3839D75592F183F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AEE23E276666D24A(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8_METHOD_3_AEE23E276666D24A_OFFSET))(this, a1, a2);
	}
};
