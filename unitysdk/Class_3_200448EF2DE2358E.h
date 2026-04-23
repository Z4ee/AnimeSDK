#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
class Class_3_9E12F120BC98A1B4;
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_200448EF2DE2358E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118B6BD0)
#define CLASS_3_200448EF2DE2358E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118B6220)
#define CLASS_3_200448EF2DE2358E_METHOD_3_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x118B6480)
#define CLASS_3_200448EF2DE2358E_METHOD_3_BA03FB322C6038D0_OFFSET UNITYSDK_OFFSET(0x118B66A0)
#define CLASS_3_200448EF2DE2358E_METHOD_3_BA068247ADF67C92_OFFSET UNITYSDK_OFFSET(0x118B6550)
#define CLASS_3_200448EF2DE2358E_METHOD_3_C63DC8A580D1DAA3_OFFSET UNITYSDK_OFFSET(0x118B5B00)
#define CLASS_3_200448EF2DE2358E__CTOR_OFFSET UNITYSDK_OFFSET(0x118B5580)
#define CLASS_3_200448EF2DE2358E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118B6C30)

inline static constexpr unsigned int Class_3_200448EF2DE2358E_TypeDefinitionIndex = 53474;

class Class_3_200448EF2DE2358E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckAdditionalConditions*>
{
public:
	::Class_3_9E12F120BC98A1B4* Field_3_1; // 0x28
	::System::Boolean Field_3_2; // 0x30
	::System::Boolean Field_3_0; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::PredicateConfig* Method_3_C63DC8A580D1DAA3(::System::String* a1)
	{
		return ((::RPG::GameCore::PredicateConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_METHOD_3_C63DC8A580D1DAA3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0374C870A27A45B(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_METHOD_3_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA068247ADF67C92(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_METHOD_3_BA068247ADF67C92_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA03FB322C6038D0(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_METHOD_3_BA03FB322C6038D0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_200448EF2DE2358E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
