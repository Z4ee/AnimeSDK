#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6FA11764625E9C62;
class Class_1_86A89498F0C6FACB;
class Class_3_1A4ED5CB1A221EF5;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_2176097E8DD02618_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x104D3220)
#define CLASS_3_2176097E8DD02618_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x104D33C0)
#define CLASS_3_2176097E8DD02618_METHOD_3_10DD36D4CAD8CAA2_OFFSET UNITYSDK_OFFSET(0x104D3E00)
#define CLASS_3_2176097E8DD02618_METHOD_3_3162B1CC8A52BF11_OFFSET UNITYSDK_OFFSET(0x104D4030)
#define CLASS_3_2176097E8DD02618_METHOD_3_7572AFB608DD36E3_OFFSET UNITYSDK_OFFSET(0x104D3B10)
#define CLASS_3_2176097E8DD02618_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x104D3770)
#define CLASS_3_2176097E8DD02618_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x104D3D70)
#define CLASS_3_2176097E8DD02618_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x104D3A80)
#define CLASS_3_2176097E8DD02618_METHOD_3_F150ED41391DC385_OFFSET UNITYSDK_OFFSET(0x104D3800)
#define CLASS_3_2176097E8DD02618_METHOD_3_FBAF30DDB1F77EE3_OFFSET UNITYSDK_OFFSET(0x104D34B0)
#define CLASS_3_2176097E8DD02618_UPDATE_OFFSET UNITYSDK_OFFSET(0x104D3410)
#define CLASS_3_2176097E8DD02618__CTOR_OFFSET UNITYSDK_OFFSET(0x104D3460)

inline static constexpr unsigned int Class_3_2176097E8DD02618_TypeDefinitionIndex = 44988;

class Class_3_2176097E8DD02618 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_FBAF30DDB1F77EE3(::Class_3_1A4ED5CB1A221EF5* a1)
	{
		return ((::System::Void(*)(::Class_3_1A4ED5CB1A221EF5*))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_FBAF30DDB1F77EE3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::Class_1_6FA11764625E9C62* Method_3_F150ED41391DC385(::MoleMole::Battle::Entity* a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_1_6FA11764625E9C62*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_F150ED41391DC385_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_86A89498F0C6FACB* Method_3_7572AFB608DD36E3(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Class_1_86A89498F0C6FACB*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_7572AFB608DD36E3_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::Class_1_86A89498F0C6FACB* Method_3_10DD36D4CAD8CAA2(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::Class_1_86A89498F0C6FACB*(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_10DD36D4CAD8CAA2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3162B1CC8A52BF11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2176097E8DD02618_METHOD_3_3162B1CC8A52BF11_OFFSET))(a1);
	}
};
