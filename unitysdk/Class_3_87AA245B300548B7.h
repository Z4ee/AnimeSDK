#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"

class Class_1_7B7FC057D30D5C12;
class Class_1_87B378E288C44AB2;
class Class_1_9F2E73BE57A0ED54;
class Class_1_CAE8F01FE8375F8C;
class Class_3_D3B90750588DD31D;
namespace Foundation { class IEntity; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_87AA245B300548B7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16DF3510)
#define CLASS_3_87AA245B300548B7_METHOD_3_1850FBE25B943AB2_OFFSET UNITYSDK_OFFSET(0x16DF6190)
#define CLASS_3_87AA245B300548B7_METHOD_3_36B3213827884734_OFFSET UNITYSDK_OFFSET(0x16DF5790)
#define CLASS_3_87AA245B300548B7_METHOD_3_41436E9FC7D119A9_1_OFFSET UNITYSDK_OFFSET(0x16DF72E0)
#define CLASS_3_87AA245B300548B7_METHOD_3_41436E9FC7D119A9_OFFSET UNITYSDK_OFFSET(0x16DF3EB0)
#define CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_1_OFFSET UNITYSDK_OFFSET(0x16DF49D0)
#define CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_2_OFFSET UNITYSDK_OFFSET(0x16DF4A60)
#define CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_3_OFFSET UNITYSDK_OFFSET(0x16DF4CD0)
#define CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_OFFSET UNITYSDK_OFFSET(0x16DF3E20)
#define CLASS_3_87AA245B300548B7_METHOD_3_5C6E87B0D24C5F76_OFFSET UNITYSDK_OFFSET(0x16DF3BF0)
#define CLASS_3_87AA245B300548B7_METHOD_3_61EEE1C56B76D9CE_OFFSET UNITYSDK_OFFSET(0x16DF4D60)
#define CLASS_3_87AA245B300548B7_METHOD_3_672FCEC5050BF579_OFFSET UNITYSDK_OFFSET(0x16DF4940)
#define CLASS_3_87AA245B300548B7_METHOD_3_6C9474C74B6E9E77_OFFSET UNITYSDK_OFFSET(0x16DF75E0)
#define CLASS_3_87AA245B300548B7_METHOD_3_71CB1911E1482163_OFFSET UNITYSDK_OFFSET(0x16DF4E00)
#define CLASS_3_87AA245B300548B7_METHOD_3_72F2CF95EAC64EBA_OFFSET UNITYSDK_OFFSET(0x16DF7080)
#define CLASS_3_87AA245B300548B7_METHOD_3_7DDB09A59E7C5677_OFFSET UNITYSDK_OFFSET(0x16DF51A0)
#define CLASS_3_87AA245B300548B7_METHOD_3_7F790DEAA67ED6D9_OFFSET UNITYSDK_OFFSET(0x16DF38B0)
#define CLASS_3_87AA245B300548B7_METHOD_3_814E354B3872F3D9_OFFSET UNITYSDK_OFFSET(0x16DF62C0)
#define CLASS_3_87AA245B300548B7_METHOD_3_8FB355B8079A36F8_OFFSET UNITYSDK_OFFSET(0x16DF7380)
#define CLASS_3_87AA245B300548B7_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x16DF7F20)
#define CLASS_3_87AA245B300548B7_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x16DF4900)
#define CLASS_3_87AA245B300548B7_METHOD_3_ACEBECCC537AD48B_OFFSET UNITYSDK_OFFSET(0x16DF4FE0)
#define CLASS_3_87AA245B300548B7_METHOD_3_BA88430066B75219_OFFSET UNITYSDK_OFFSET(0x16DF3800)
#define CLASS_3_87AA245B300548B7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16DF3950)
#define CLASS_3_87AA245B300548B7_METHOD_3_BCB280F854833CE5_OFFSET UNITYSDK_OFFSET(0x16DF5970)
#define CLASS_3_87AA245B300548B7_METHOD_3_C6C2C9C9154B4AD2_OFFSET UNITYSDK_OFFSET(0x16DF7530)
#define CLASS_3_87AA245B300548B7_METHOD_3_C8BC71DC8CA00F38_1_OFFSET UNITYSDK_OFFSET(0x16DF3D90)
#define CLASS_3_87AA245B300548B7_METHOD_3_C8BC71DC8CA00F38_OFFSET UNITYSDK_OFFSET(0x16DF58E0)
#define CLASS_3_87AA245B300548B7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16DF4C40)
#define CLASS_3_87AA245B300548B7_METHOD_3_D9E16EE20DF16DFD_OFFSET UNITYSDK_OFFSET(0x16DF6BE0)
#define CLASS_3_87AA245B300548B7_METHOD_3_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0x16DF3F50)
#define CLASS_3_87AA245B300548B7_METHOD_3_DCF2AA4DD0D622A0_OFFSET UNITYSDK_OFFSET(0x16DF4AF0)
#define CLASS_3_87AA245B300548B7_METHOD_3_E1D443372C664C5C_OFFSET UNITYSDK_OFFSET(0x16DF6240)
#define CLASS_3_87AA245B300548B7_METHOD_3_F3F7CD7D42EB26FA_OFFSET UNITYSDK_OFFSET(0x16DF39E0)
#define CLASS_3_87AA245B300548B7_METHOD_3_FD4484A5EA1FB463_OFFSET UNITYSDK_OFFSET(0x16DF7740)
#define CLASS_3_87AA245B300548B7_UPDATE_OFFSET UNITYSDK_OFFSET(0x16DF3770)
#define CLASS_3_87AA245B300548B7__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF37B0)

inline static constexpr unsigned int Class_3_87AA245B300548B7_TypeDefinitionIndex = 83534;

class Class_3_87AA245B300548B7 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_BA88430066B75219(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_BA88430066B75219_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F3F7CD7D42EB26FA(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_F3F7CD7D42EB26FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_7F790DEAA67ED6D9(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::Class_1_7B7FC057D30D5C12*& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::Class_1_7B7FC057D30D5C12*&))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_7F790DEAA67ED6D9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_499B5C59FE343F40(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_41436E9FC7D119A9(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_41436E9FC7D119A9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_D9EAE2CFA3709229(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_D9EAE2CFA3709229_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::Class_1_9F2E73BE57A0ED54* Method_3_672FCEC5050BF579(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_9F2E73BE57A0ED54*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_672FCEC5050BF579_OFFSET))(a1);
	}

	static ::System::Void Method_3_499B5C59FE343F40_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_499B5C59FE343F40_2(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_2_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_DCF2AA4DD0D622A0(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_DCF2AA4DD0D622A0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_499B5C59FE343F40_3(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_499B5C59FE343F40_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_61EEE1C56B76D9CE(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_61EEE1C56B76D9CE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_71CB1911E1482163(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_71CB1911E1482163_OFFSET))(a1);
	}

	static ::Foundation::Buff::GameplayEffectModifier Method_3_ACEBECCC537AD48B(::System::Int32 a1)
	{
		return ((::Foundation::Buff::GameplayEffectModifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_ACEBECCC537AD48B_OFFSET))(a1);
	}

	static ::System::String* Method_3_36B3213827884734(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_36B3213827884734_OFFSET))(a1);
	}

	static ::System::Void Method_3_C8BC71DC8CA00F38(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_C8BC71DC8CA00F38_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::Dictionary_2<::Enum_3_2C704E2262533CBD, ::System::Single>* Method_3_BCB280F854833CE5(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_2C704E2262533CBD, ::System::Single>*(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_BCB280F854833CE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E1D443372C664C5C(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_E1D443372C664C5C_OFFSET))(a1);
	}

	::System::Void Method_3_72F2CF95EAC64EBA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_72F2CF95EAC64EBA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_41436E9FC7D119A9_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_41436E9FC7D119A9_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_814E354B3872F3D9(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_814E354B3872F3D9_OFFSET))(a1);
	}

	static ::System::Void Method_3_8FB355B8079A36F8(::Foundation::IEntity* a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Foundation::IEntity*, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_8FB355B8079A36F8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D9E16EE20DF16DFD(::Class_3_D3B90750588DD31D* a1)
	{
		return ((::System::Void(*)(::Class_3_D3B90750588DD31D*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_D9E16EE20DF16DFD_OFFSET))(a1);
	}

	static ::System::Void Method_3_6C9474C74B6E9E77(::Nap::NapECS::EcsEntity* a1, ::Nap::NapECS::EcsEntity* a2, ::Enum_3_CE80FD07999C5845 a3, ::Enum_3_2C704E2262533CBD a4, ::System::Single a5, ::Enum_3_C460945F1F3C12F5 a6)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single, ::Enum_3_C460945F1F3C12F5))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_6C9474C74B6E9E77_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_C6C2C9C9154B4AD2(::Foundation::IEntity* a1, ::Nap::NapECS::EcsEntity* a2, ::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* a3)
	{
		return ((::System::Void(*)(::Foundation::IEntity*, ::Nap::NapECS::EcsEntity*, ::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_C6C2C9C9154B4AD2_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Enum_3_2C704E2262533CBD, ::System::Single>* Method_3_FD4484A5EA1FB463(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_2C704E2262533CBD, ::System::Single>*(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_FD4484A5EA1FB463_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C8BC71DC8CA00F38_1(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_C8BC71DC8CA00F38_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_5C6E87B0D24C5F76(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Class_1_CAE8F01FE8375F8C*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Class_1_CAE8F01FE8375F8C*&))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_5C6E87B0D24C5F76_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_87B378E288C44AB2* Method_3_7DDB09A59E7C5677(::System::Int32 a1)
	{
		return ((::Class_1_87B378E288C44AB2*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_7DDB09A59E7C5677_OFFSET))(a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_1850FBE25B943AB2(::MoleMole::Battle::Entity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::Struct_2_BBA9BFFCB5AD7C3C& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::Struct_2_BBA9BFFCB5AD7C3C&))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7_METHOD_3_1850FBE25B943AB2_OFFSET))(a1, a2, a3, a4);
	}
};
