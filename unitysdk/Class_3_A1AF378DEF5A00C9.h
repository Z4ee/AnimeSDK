#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_972C37F6321EBB18.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
class Class_3_AB85E7FADC85A60C;
class Class_3_AB85E7FADC85A60C_Class_3_B92141602368DE54;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_A1AF378DEF5A00C9_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x143A2C20)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_1D1F0BC1BF76CF1A_OFFSET UNITYSDK_OFFSET(0x143A3FD0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_29B5ACA42E2BB037_OFFSET UNITYSDK_OFFSET(0x143A49D0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_46D1A5ABBEC5D35E_OFFSET UNITYSDK_OFFSET(0x143A4690)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_1_OFFSET UNITYSDK_OFFSET(0x143A3E70)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_2_OFFSET UNITYSDK_OFFSET(0x143A43D0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_3_OFFSET UNITYSDK_OFFSET(0x143A4530)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_OFFSET UNITYSDK_OFFSET(0x143A3250)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_5F3FDFFB0D42F24D_OFFSET UNITYSDK_OFFSET(0x143A3860)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_613499B68954C03E_OFFSET UNITYSDK_OFFSET(0x143A41B0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_AD086656B6A33933_OFFSET UNITYSDK_OFFSET(0x143A4FC0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x143A3DE0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143A4940)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_CFA5EF1484177F88_OFFSET UNITYSDK_OFFSET(0x143A33B0)
#define CLASS_3_A1AF378DEF5A00C9_METHOD_3_D142B656A56B0B12_OFFSET UNITYSDK_OFFSET(0x143A3620)
#define CLASS_3_A1AF378DEF5A00C9_UPDATE_OFFSET UNITYSDK_OFFSET(0x143A30A0)
#define CLASS_3_A1AF378DEF5A00C9__CTOR_OFFSET UNITYSDK_OFFSET(0x143A3200)

inline static constexpr unsigned int Class_3_A1AF378DEF5A00C9_TypeDefinitionIndex = 71273;

class Class_3_A1AF378DEF5A00C9 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5751A87D6466A37E(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CFA5EF1484177F88(::System::Single a1, ::Class_1_B7E341C5F1A6F199* a2, ::Class_3_AB85E7FADC85A60C_Class_3_B92141602368DE54* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_1_B7E341C5F1A6F199*, ::Class_3_AB85E7FADC85A60C_Class_3_B92141602368DE54*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_CFA5EF1484177F88_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_D142B656A56B0B12(::Class_2_4D61A7A49E7F7878* a1, ::Enum_3_972C37F6321EBB18 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_2_4D61A7A49E7F7878*, ::Enum_3_972C37F6321EBB18, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_D142B656A56B0B12_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5F3FDFFB0D42F24D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_5F3FDFFB0D42F24D_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5751A87D6466A37E_1(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_1D1F0BC1BF76CF1A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_1D1F0BC1BF76CF1A_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_613499B68954C03E(::Class_3_AB85E7FADC85A60C* a1, ::System::Int32 a2, ::Class_2_4D61A7A49E7F7878*& a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_AB85E7FADC85A60C*, ::System::Int32, ::Class_2_4D61A7A49E7F7878*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_613499B68954C03E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5751A87D6466A37E_2(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5751A87D6466A37E_3(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_5751A87D6466A37E_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_46D1A5ABBEC5D35E(::Class_2_4D61A7A49E7F7878* a1, ::Enum_3_972C37F6321EBB18 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_2_4D61A7A49E7F7878*, ::Enum_3_972C37F6321EBB18, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_46D1A5ABBEC5D35E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_29B5ACA42E2BB037(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_29B5ACA42E2BB037_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_AD086656B6A33933(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A1AF378DEF5A00C9_METHOD_3_AD086656B6A33933_OFFSET))(a1, a2);
	}
};
