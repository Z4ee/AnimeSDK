#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A0C51CBDC1DAB09___c__DisplayClass3_0.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_6A0C51CBDC1DAB09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BCEFC0)
#define CLASS_1_6A0C51CBDC1DAB09_METHOD_1_7211A7D3FD97EB44_OFFSET UNITYSDK_OFFSET(0x19BCE1C0)
#define CLASS_1_6A0C51CBDC1DAB09__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCE140)
#define CLASS_1_6A0C51CBDC1DAB09__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET UNITYSDK_OFFSET(0x19BCEEE0)

inline static constexpr unsigned int Class_1_6A0C51CBDC1DAB09_TypeDefinitionIndex = 55187;

class Class_1_6A0C51CBDC1DAB09 : public ::System::Object
{
public:
	::RPG::GameCore::DamageByAttackProperty* AIGCLKPMGCD; // 0x10
	::System::Boolean GNOECGAMPGD; // 0x18

	::System::Void _ctor(::RPG::GameCore::DamageByAttackProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_1_6A0C51CBDC1DAB09__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7211A7D3FD97EB44(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_1_6A0C51CBDC1DAB09_METHOD_1_7211A7D3FD97EB44_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A0C51CBDC1DAB09_DISPOSE_OFFSET))(this);
	}

	static ::RPG::GameCore::DynamicFloat* _PersistData_g___PersistDynamicFloat_3_0(::RPG::GameCore::DynamicFloat* a1, ::Class_1_6A0C51CBDC1DAB09___c__DisplayClass3_0& a2)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::DynamicFloat*, ::Class_1_6A0C51CBDC1DAB09___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_6A0C51CBDC1DAB09__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET))(a1, a2);
	}
};
