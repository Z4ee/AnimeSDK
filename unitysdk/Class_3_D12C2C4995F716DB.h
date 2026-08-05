#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3E9DDB3885C3845.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_D12C2C4995F716DB_METHOD_3_05D09D61275C09FD_OFFSET UNITYSDK_OFFSET(0x12E9DAF0)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x12E9D9C0)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x12E9D940)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x12E9DEB0)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x12E9DE20)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x12E9DA60)
#define CLASS_3_D12C2C4995F716DB_METHOD_3_AFD826ECAC8700A3_OFFSET UNITYSDK_OFFSET(0x12E9D150)
#define CLASS_3_D12C2C4995F716DB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9DA50)

inline static constexpr unsigned int Class_3_D12C2C4995F716DB_TypeDefinitionIndex = 64103;

class Class_3_D12C2C4995F716DB : public ::Class_2_F3E9DDB3885C3845
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AFD826ECAC8700A3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_AFD826ECAC8700A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_47D42B95159AE8D1(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_05D09D61275C09FD(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_05D09D61275C09FD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_3_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12C2C4995F716DB_METHOD_3_502E4F13BFB605D5_OFFSET))(this);
	}
};
