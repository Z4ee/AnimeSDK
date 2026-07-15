#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_425;
class Class_3_9E12F120BC98A1B4;
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_F0C94203DB63A27E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173F5540)
#define CLASS_3_F0C94203DB63A27E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x173F4990)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x173F4C30)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_A845167B6E660A57_OFFSET UNITYSDK_OFFSET(0x173F4E60)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_BD44A061ECFA4250_OFFSET UNITYSDK_OFFSET(0x173F4D00)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_C63DC8A580D1DAA3_OFFSET UNITYSDK_OFFSET(0x173F44C0)
#define CLASS_3_F0C94203DB63A27E__CTOR_OFFSET UNITYSDK_OFFSET(0x173F3E00)

inline static constexpr unsigned int Class_3_F0C94203DB63A27E_TypeDefinitionIndex = 55410;

class Class_3_F0C94203DB63A27E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckAdditionalConditions*>
{
public:
	::Class_3_9E12F120BC98A1B4* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::PredicateConfig* Method_3_C63DC8A580D1DAA3(::System::String* a1)
	{
		return ((::RPG::GameCore::PredicateConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_C63DC8A580D1DAA3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0374C870A27A45B(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD44A061ECFA4250(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_BD44A061ECFA4250_OFFSET))(this, a1);
	}

	::System::Void Method_3_A845167B6E660A57(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_A845167B6E660A57_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_DISPOSE_OFFSET))(this);
	}
};
