#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_B62C942A2774BBB8;
class Class_3_B9814F859AB43FFE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_A6AA57FE93A77024_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x139B4E90)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_2FDBADF157774BA3_OFFSET UNITYSDK_OFFSET(0x139B61D0)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_5CE2C16D5BA788F2_OFFSET UNITYSDK_OFFSET(0x139B64A0)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x139B5480)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x139B5350)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_A7878F772CD7BF5A_OFFSET UNITYSDK_OFFSET(0x139B54C0)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x139B5390)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139B6560)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_E6E83B0F635316D3_1_OFFSET UNITYSDK_OFFSET(0x139B5420)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_E6E83B0F635316D3_OFFSET UNITYSDK_OFFSET(0x139B52F0)
#define CLASS_3_A6AA57FE93A77024_METHOD_3_F267777F2B36B40D_OFFSET UNITYSDK_OFFSET(0x139B5720)
#define CLASS_3_A6AA57FE93A77024_UPDATE_OFFSET UNITYSDK_OFFSET(0x139B5140)
#define CLASS_3_A6AA57FE93A77024__CTOR_OFFSET UNITYSDK_OFFSET(0x139B52A0)

inline static constexpr unsigned int Class_3_A6AA57FE93A77024_TypeDefinitionIndex = 81600;

class Class_3_A6AA57FE93A77024 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_E6E83B0F635316D3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_E6E83B0F635316D3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E6E83B0F635316D3_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_E6E83B0F635316D3_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_A7878F772CD7BF5A(::System::Single a1, ::Class_3_B9814F859AB43FFE* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_B9814F859AB43FFE*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_A7878F772CD7BF5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F267777F2B36B40D(::Class_2_B62C942A2774BBB8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_F267777F2B36B40D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2FDBADF157774BA3(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_2FDBADF157774BA3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5CE2C16D5BA788F2(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_5CE2C16D5BA788F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
