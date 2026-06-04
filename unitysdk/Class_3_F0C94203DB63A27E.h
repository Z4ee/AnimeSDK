#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
class Class_3_9E12F120BC98A1B4;
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_F0C94203DB63A27E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACD41A0)
#define CLASS_3_F0C94203DB63A27E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xACD3730)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_7B3711015280C5D2_OFFSET UNITYSDK_OFFSET(0xACD3BF0)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0xACD39C0)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_BD44A061ECFA4250_OFFSET UNITYSDK_OFFSET(0xACD3A90)
#define CLASS_3_F0C94203DB63A27E_METHOD_3_FC4231BA1476596C_OFFSET UNITYSDK_OFFSET(0xACD3090)
#define CLASS_3_F0C94203DB63A27E__CTOR_OFFSET UNITYSDK_OFFSET(0xACD29E0)
#define CLASS_3_F0C94203DB63A27E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACD4200)

inline static constexpr unsigned int Class_3_F0C94203DB63A27E_TypeDefinitionIndex = 54187;

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

	::RPG::GameCore::PredicateConfig* Method_3_FC4231BA1476596C(::System::String* a1)
	{
		return ((::RPG::GameCore::PredicateConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_FC4231BA1476596C_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0374C870A27A45B(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD44A061ECFA4250(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_BD44A061ECFA4250_OFFSET))(this, a1);
	}

	::System::Void Method_3_7B3711015280C5D2(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_METHOD_3_7B3711015280C5D2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C94203DB63A27E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
