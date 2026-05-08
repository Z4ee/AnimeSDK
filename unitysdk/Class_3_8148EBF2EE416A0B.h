#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52645FD19F442171.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_8148EBF2EE416A0B_METHOD_3_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x16612D10)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_454D70CDB124A604_OFFSET UNITYSDK_OFFSET(0x16612410)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x16612BF0)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x16612DB0)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x16612C70)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x16612D20)
#define CLASS_3_8148EBF2EE416A0B_METHOD_3_DD2172B96CAB8EBC_OFFSET UNITYSDK_OFFSET(0x16612E40)
#define CLASS_3_8148EBF2EE416A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x16612D00)

inline static constexpr unsigned int Class_3_8148EBF2EE416A0B_TypeDefinitionIndex = 72138;

class Class_3_8148EBF2EE416A0B : public ::Class_2_52645FD19F442171
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_454D70CDB124A604(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_454D70CDB124A604_OFFSET))(this, a1);
	}

	::System::Void Method_3_47D42B95159AE8D1(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_3_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_08A500CCFA7B1882_OFFSET))(this);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_DD2172B96CAB8EBC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8148EBF2EE416A0B_METHOD_3_DD2172B96CAB8EBC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
