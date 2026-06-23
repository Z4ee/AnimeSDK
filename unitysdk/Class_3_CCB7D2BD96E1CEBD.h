#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60851408497A9C58;
class Class_1_6FA11764625E9C62;
class Class_1_94BA29906088A6B2;
class Class_1_BB4E692C835D9163;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_CCB7D2BD96E1CEBD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x167229F0)
#define CLASS_3_CCB7D2BD96E1CEBD_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16722BA0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_10DD36D4CAD8CAA2_OFFSET UNITYSDK_OFFSET(0x16722E10)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_361556CCCA142AF9_OFFSET UNITYSDK_OFFSET(0x16723040)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_7572AFB608DD36E3_OFFSET UNITYSDK_OFFSET(0x167238B0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_98AD232F205120D4_OFFSET UNITYSDK_OFFSET(0x16723640)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16722D80)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x167235B0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16723B10)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16722CF0)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F150ED41391DC385_OFFSET UNITYSDK_OFFSET(0x16723330)
#define CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F21CA625FE2435D0_OFFSET UNITYSDK_OFFSET(0x167230F0)
#define CLASS_3_CCB7D2BD96E1CEBD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16722C50)
#define CLASS_3_CCB7D2BD96E1CEBD_UPDATE_OFFSET UNITYSDK_OFFSET(0x16722BF0)
#define CLASS_3_CCB7D2BD96E1CEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16722CA0)

inline static constexpr unsigned int Class_3_CCB7D2BD96E1CEBD_TypeDefinitionIndex = 81019;

class Class_3_CCB7D2BD96E1CEBD : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x30
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

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::Class_1_60851408497A9C58* Method_3_10DD36D4CAD8CAA2(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::Class_1_60851408497A9C58*(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_10DD36D4CAD8CAA2_OFFSET))(a1, a2);
	}

	static ::Class_1_94BA29906088A6B2* Method_3_F21CA625FE2435D0(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Class_1_94BA29906088A6B2*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F21CA625FE2435D0_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_6FA11764625E9C62* Method_3_F150ED41391DC385(::MoleMole::Battle::Entity* a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_1_6FA11764625E9C62*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_F150ED41391DC385_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::Class_1_BB4E692C835D9163* Method_3_98AD232F205120D4(::MoleMole::Battle::Entity* a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_1_BB4E692C835D9163*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_98AD232F205120D4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_1_60851408497A9C58* Method_3_7572AFB608DD36E3(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Class_1_60851408497A9C58*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_7572AFB608DD36E3_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_361556CCCA142AF9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCB7D2BD96E1CEBD_METHOD_3_361556CCCA142AF9_OFFSET))(a1);
	}
};
