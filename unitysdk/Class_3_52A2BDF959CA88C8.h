#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_0990EC08D39EA68F;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_52A2BDF959CA88C8_METHOD_3_C8CB973A093EB12C_OFFSET UNITYSDK_OFFSET(0xAAEA060)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_CEFAD4DD6D77081E_OFFSET UNITYSDK_OFFSET(0xAAEA8D0)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_D3839D75592F183F_OFFSET UNITYSDK_OFFSET(0xAAEA840)
#define CLASS_3_52A2BDF959CA88C8_METHOD_3_D75A2DACDE8B27CD_OFFSET UNITYSDK_OFFSET(0xAAEA520)
#define CLASS_3_52A2BDF959CA88C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAE9DD0)
#define CLASS_3_52A2BDF959CA88C8__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9D70)

inline static constexpr unsigned int Class_3_52A2BDF959CA88C8_TypeDefinitionIndex = 51616;

class Class_3_52A2BDF959CA88C8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0990EC08D39EA68F*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0990EC08D39EA68F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0990EC08D39EA68F*))((::PBYTE)hIl2Cpp + CLASS_3_52A2BDF959CA88C8__CTOR_OFFSET))(this, a1, a2);
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
};
