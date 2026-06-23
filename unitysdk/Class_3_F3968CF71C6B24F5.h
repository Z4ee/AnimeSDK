#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"

class Class_1_7B7FC057D30D5C12;
class Class_1_9F2E73BE57A0ED54;
class Class_1_CAE8F01FE8375F8C;
class Class_3_D3B90750588DD31D;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_F3968CF71C6B24F5_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1728D0A0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_0730C606445351F4_OFFSET UNITYSDK_OFFSET(0x1728E600)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_1850FBE25B943AB2_OFFSET UNITYSDK_OFFSET(0x1728DB90)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_36B3213827884734_OFFSET UNITYSDK_OFFSET(0x1728ECB0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_41436E9FC7D119A9_1_OFFSET UNITYSDK_OFFSET(0x1728EC10)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_41436E9FC7D119A9_OFFSET UNITYSDK_OFFSET(0x1728EAA0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_1_OFFSET UNITYSDK_OFFSET(0x1728EE90)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_2_OFFSET UNITYSDK_OFFSET(0x172900C0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_3_OFFSET UNITYSDK_OFFSET(0x172901F0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_OFFSET UNITYSDK_OFFSET(0x1728EE00)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_5C6E87B0D24C5F76_OFFSET UNITYSDK_OFFSET(0x1728D530)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_61EEE1C56B76D9CE_OFFSET UNITYSDK_OFFSET(0x17290150)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_672FCEC5050BF579_OFFSET UNITYSDK_OFFSET(0x1728D9B0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_72F2CF95EAC64EBA_OFFSET UNITYSDK_OFFSET(0x1728D6D0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_7F790DEAA67ED6D9_OFFSET UNITYSDK_OFFSET(0x1728D440)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_99DB6D9AD83718DE_OFFSET UNITYSDK_OFFSET(0x1728D930)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x1728D4E0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x1728EB40)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_BA88430066B75219_OFFSET UNITYSDK_OFFSET(0x1728D390)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1728EF20)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_BCB280F854833CE5_OFFSET UNITYSDK_OFFSET(0x1728EFB0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_BED82C557EE24F50_OFFSET UNITYSDK_OFFSET(0x1728DA40)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_C5116ABBCB3CCC62_OFFSET UNITYSDK_OFFSET(0x1728FB10)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_C8BC71DC8CA00F38_1_OFFSET UNITYSDK_OFFSET(0x1728FA80)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_C8BC71DC8CA00F38_OFFSET UNITYSDK_OFFSET(0x1728F9F0)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1728EB80)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0x1728DC40)
#define CLASS_3_F3968CF71C6B24F5_METHOD_3_F3F7CD7D42EB26FA_OFFSET UNITYSDK_OFFSET(0x1728F7E0)
#define CLASS_3_F3968CF71C6B24F5_UPDATE_OFFSET UNITYSDK_OFFSET(0x1728D300)
#define CLASS_3_F3968CF71C6B24F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1728D340)

inline static constexpr unsigned int Class_3_F3968CF71C6B24F5_TypeDefinitionIndex = 85130;

class Class_3_F3968CF71C6B24F5 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_BA88430066B75219(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_BA88430066B75219_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_7F790DEAA67ED6D9(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::Class_1_7B7FC057D30D5C12*& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::Class_1_7B7FC057D30D5C12*&))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_7F790DEAA67ED6D9_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_72F2CF95EAC64EBA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_72F2CF95EAC64EBA_OFFSET))(this, a1);
	}

	static ::Class_1_9F2E73BE57A0ED54* Method_3_672FCEC5050BF579(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_9F2E73BE57A0ED54*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_672FCEC5050BF579_OFFSET))(a1);
	}

	::System::Void Method_3_BED82C557EE24F50(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_BED82C557EE24F50_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_1850FBE25B943AB2(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::Struct_2_BBA9BFFCB5AD7C3C& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::Struct_2_BBA9BFFCB5AD7C3C&))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_1850FBE25B943AB2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_D9EAE2CFA3709229(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_D9EAE2CFA3709229_OFFSET))(a1);
	}

	static ::System::Void Method_3_0730C606445351F4(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_0730C606445351F4_OFFSET))(a1);
	}

	static ::System::Void Method_3_41436E9FC7D119A9(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_41436E9FC7D119A9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_41436E9FC7D119A9_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_41436E9FC7D119A9_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_3_36B3213827884734(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_36B3213827884734_OFFSET))(a1);
	}

	static ::System::Void Method_3_499B5C59FE343F40(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_5C6E87B0D24C5F76(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Class_1_CAE8F01FE8375F8C*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Class_1_CAE8F01FE8375F8C*&))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_5C6E87B0D24C5F76_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_499B5C59FE343F40_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::Enum_3_3590B72267A04337, ::System::Single>* Method_3_BCB280F854833CE5(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_3590B72267A04337, ::System::Single>*(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_BCB280F854833CE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F3F7CD7D42EB26FA(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_F3F7CD7D42EB26FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C8BC71DC8CA00F38(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_C8BC71DC8CA00F38_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_C8BC71DC8CA00F38_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_C8BC71DC8CA00F38_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_C5116ABBCB3CCC62(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_C5116ABBCB3CCC62_OFFSET))(a1);
	}

	static ::System::Void Method_3_99DB6D9AD83718DE(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_99DB6D9AD83718DE_OFFSET))(a1);
	}

	static ::System::Void Method_3_499B5C59FE343F40_2(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_61EEE1C56B76D9CE(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_61EEE1C56B76D9CE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_499B5C59FE343F40_3(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F3968CF71C6B24F5_METHOD_3_499B5C59FE343F40_3_OFFSET))(a1, a2, a3, a4);
	}
};
