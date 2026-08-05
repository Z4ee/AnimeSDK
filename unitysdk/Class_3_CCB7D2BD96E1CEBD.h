#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6FA11764625E9C62;
class Class_1_94BA29906088A6B2;
class Class_1_BB4E692C835D9163;
class Class_1_C8F07D28CFC81B2D;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_CCB7D2BD96E1CEBD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x167D1E80)
#define CLASS_3_CCB7D2BD96E1CEBD_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x167D2030)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_1436A2C26FBD6E92_OFFSET UNITYSDK_OFFSET(0x167D28A0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_361556CCCA142AF9_OFFSET UNITYSDK_OFFSET(0x167D2480)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_3B7BEAA1C11B71B1_OFFSET UNITYSDK_OFFSET(0x167D2D70)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_98AD232F205120D4_OFFSET UNITYSDK_OFFSET(0x167D2210)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x167D2FE0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x167D2530)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x167D25C0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167D2180)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F150ED41391DC385_OFFSET UNITYSDK_OFFSET(0x167D2AE0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F21CA625FE2435D0_OFFSET UNITYSDK_OFFSET(0x167D2650)
#define CLASS_3_CCB7D2BD96E1CEBD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x167D20E0)
#define CLASS_3_CCB7D2BD96E1CEBD_UPDATE_OFFSET UNITYSDK_OFFSET(0x167D2080)
#define CLASS_3_CCB7D2BD96E1CEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x167D2130)

inline static constexpr unsigned int Class_3_CCB7D2BD96E1CEBD_TypeDefinitionIndex = 79933;

class Class_3_CCB7D2BD96E1CEBD : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x30
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_BB4E692C835D9163* Method_3_98AD232F205120D4(::MoleMole::Battle::Entity* a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_1_BB4E692C835D9163*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_98AD232F205120D4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::Class_1_94BA29906088A6B2* Method_3_F21CA625FE2435D0(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Class_1_94BA29906088A6B2*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F21CA625FE2435D0_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_C8F07D28CFC81B2D* Method_3_1436A2C26FBD6E92(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Class_1_C8F07D28CFC81B2D*(*)(::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_1436A2C26FBD6E92_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_6FA11764625E9C62* Method_3_F150ED41391DC385(::MoleMole::Battle::Entity* a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_1_6FA11764625E9C62*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F150ED41391DC385_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_361556CCCA142AF9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_361556CCCA142AF9_OFFSET))(a1);
	}

	static ::Class_1_C8F07D28CFC81B2D* Method_3_3B7BEAA1C11B71B1(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_1_C8F07D28CFC81B2D*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_3B7BEAA1C11B71B1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
