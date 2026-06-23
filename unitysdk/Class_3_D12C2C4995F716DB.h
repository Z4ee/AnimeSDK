#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CE3F5BCFA64F33B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_D12C2C4995F716DB_METHOD_3_05D09D61275C09FD_OFFSET UNITYSDK_OFFSET(0x1335E100)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x1335E4C0)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_454D70CDB124A604_OFFSET UNITYSDK_OFFSET(0x1335D750)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x1335DF50)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x1335E070)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x1335DFD0)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x1335E430)
#define CLASS_3_D12C2C4995F716DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1335E060)

inline static constexpr unsigned int Class_3_D12C2C4995F716DB_TypeDefinitionIndex = 65207;

class Class_3_D12C2C4995F716DB : public ::Class_2_3CE3F5BCFA64F33B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_454D70CDB124A604(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_454D70CDB124A604_OFFSET))(this, a1);
	}

	::System::Void Method_3_47D42B95159AE8D1(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_05D09D61275C09FD(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_05D09D61275C09FD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_08A500CCFA7B1882_OFFSET))(this);
	}
};
