#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PropSetupAbilityTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A7D3BCB784BBE9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9159A70)
#define CLASS_3_5A7D3BCB784BBE9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9159AE0)
#define CLASS_3_5A7D3BCB784BBE9B__CTOR_OFFSET UNITYSDK_OFFSET(0x91599E0)
#define CLASS_3_5A7D3BCB784BBE9B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9159FB0)

inline static constexpr unsigned int Class_3_5A7D3BCB784BBE9B_TypeDefinitionIndex = 53819;

class Class_3_5A7D3BCB784BBE9B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupAbilityTrigger*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupAbilityTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupAbilityTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_5A7D3BCB784BBE9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A7D3BCB784BBE9B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A7D3BCB784BBE9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A7D3BCB784BBE9B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
