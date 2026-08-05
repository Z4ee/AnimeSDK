#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E.h"

class Class_1_5E4C21FA3C948472;
class Class_1_B4905AAA2A347DAF;
class Class_1_B7E341C5F1A6F199;
class Class_1_C15F20696B789569;
class Class_1_C7C8DAC9B7F55F6A;
class Class_2_0D0B57FF916F9911;
class Class_2_1A855E5EED3B1B47_1;
class Class_2_2B5C3D9688202862;
class Class_2_874AD1BB59BFEABD_1;
class Class_3_710CD2A9B301B56D;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8FD2A4B3EFA23F6E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1A8C91E0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_055571B62C95BB16_OFFSET UNITYSDK_OFFSET(0x1A8CAFB0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_05A23789CDFAA182_OFFSET UNITYSDK_OFFSET(0x1A8CCF30)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_0AF1B78B455DE073_OFFSET UNITYSDK_OFFSET(0x1A8CB6C0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_109BDFC31D8A83E3_OFFSET UNITYSDK_OFFSET(0x1A8C97F0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x1A8C9AE0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_23142922C0606C34_1_OFFSET UNITYSDK_OFFSET(0x1A8CEB70)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_23142922C0606C34_OFFSET UNITYSDK_OFFSET(0x1A8CA620)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_3B7914865727CBA9_OFFSET UNITYSDK_OFFSET(0x1A8CB480)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_3EB1D6D40B249789_OFFSET UNITYSDK_OFFSET(0x1A8CD1A0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_47884E4353CBE9A5_OFFSET UNITYSDK_OFFSET(0x1A8CAC70)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x1A8C9BB0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_59A97A72F28E2C85_OFFSET UNITYSDK_OFFSET(0x1A8CE700)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_60FF8885D98CE3B1_OFFSET UNITYSDK_OFFSET(0x1A8CE400)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_61263B89A4121DFD_OFFSET UNITYSDK_OFFSET(0x1A8CE820)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_6855C790B3235464_OFFSET UNITYSDK_OFFSET(0x1A8CE080)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_686E837B45BC4781_OFFSET UNITYSDK_OFFSET(0x1A8CA870)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_694D9A671013772D_OFFSET UNITYSDK_OFFSET(0x1A8CB620)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_69DA9858D30F8586_OFFSET UNITYSDK_OFFSET(0x1A8CD870)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_6EE6A27960654DB8_OFFSET UNITYSDK_OFFSET(0x1A8CD780)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_77DC24EBAF55C582_OFFSET UNITYSDK_OFFSET(0x1A8CBC30)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_7A4BFF33636159B6_OFFSET UNITYSDK_OFFSET(0x1A8CBF90)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_85AFDC7199438F05_OFFSET UNITYSDK_OFFSET(0x1A8C9C20)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_875763D9FADCD5CC_OFFSET UNITYSDK_OFFSET(0x1A8CAB80)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_8D9CDAA79F28CC9D_OFFSET UNITYSDK_OFFSET(0x1A8CC260)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x1A8CDF80)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9975C0DE2C4730BC_OFFSET UNITYSDK_OFFSET(0x1A8CB180)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x1A8CEDE0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x1A8C9760)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A5B043FB42E59753_OFFSET UNITYSDK_OFFSET(0x1A8CE520)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A687473E3DD1C37F_OFFSET UNITYSDK_OFFSET(0x1A8CD310)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A9D7E70A433D92CF_OFFSET UNITYSDK_OFFSET(0x1A8CA990)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_B20A7D4303F8FB6C_OFFSET UNITYSDK_OFFSET(0x1A8CC790)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_B9421C3C27FA4EF1_OFFSET UNITYSDK_OFFSET(0x1A8CCAE0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1A8CB3F0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C16955C286836978_OFFSET UNITYSDK_OFFSET(0x1A8CCEE0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C456DA8D21F058D6_OFFSET UNITYSDK_OFFSET(0x1A8CCE00)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C8BF45B00EBC3C4D_OFFSET UNITYSDK_OFFSET(0x1A8C9FD0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8CC1D0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D2D818520BDB60FA_OFFSET UNITYSDK_OFFSET(0x1A8CB860)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D3F337291E08D220_OFFSET UNITYSDK_OFFSET(0x1A8CD3B0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D4DAF77D77A29817_OFFSET UNITYSDK_OFFSET(0x1A8CC950)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D7EC6EA1892FBC2A_OFFSET UNITYSDK_OFFSET(0x1A8CED60)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_E028D6792B3F2719_OFFSET UNITYSDK_OFFSET(0x1A8C97A0)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_EE26BD50A884C75A_1_OFFSET UNITYSDK_OFFSET(0x1A8CEA30)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_EE26BD50A884C75A_OFFSET UNITYSDK_OFFSET(0x1A8CC090)
#define CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_F4ED9B1C5B10499D_OFFSET UNITYSDK_OFFSET(0x1A8CA280)
#define CLASS_3_8FD2A4B3EFA23F6E_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A8C95B0)
#define CLASS_3_8FD2A4B3EFA23F6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C9710)

inline static constexpr unsigned int Class_3_8FD2A4B3EFA23F6E_TypeDefinitionIndex = 63768;

class Class_3_8FD2A4B3EFA23F6E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E028D6792B3F2719(::MoleMole::Battle::Entity* a1, ::Class_2_1A855E5EED3B1B47_1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_1A855E5EED3B1B47_1*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_E028D6792B3F2719_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_109BDFC31D8A83E3(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_109BDFC31D8A83E3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Void Method_3_85AFDC7199438F05(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_85AFDC7199438F05_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_C8BF45B00EBC3C4D(::System::UInt32 a1, ::MoleMole::Config::DamageElementType a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::DamageElementType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C8BF45B00EBC3C4D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_F4ED9B1C5B10499D(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_F4ED9B1C5B10499D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_23142922C0606C34(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_23142922C0606C34_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_3_686E837B45BC4781(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_686E837B45BC4781_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_A9D7E70A433D92CF(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A9D7E70A433D92CF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_875763D9FADCD5CC(::Class_3_710CD2A9B301B56D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_875763D9FADCD5CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47884E4353CBE9A5(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_47884E4353CBE9A5_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_055571B62C95BB16(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_055571B62C95BB16_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_3B7914865727CBA9(::MoleMole::Battle::Entity* a1, ::Class_1_B4905AAA2A347DAF* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_1_B4905AAA2A347DAF*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_3B7914865727CBA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0AF1B78B455DE073(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_0AF1B78B455DE073_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EE26BD50A884C75A(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_EE26BD50A884C75A_OFFSET))(a1, a2);
	}

	static ::Class_1_5E4C21FA3C948472* Method_3_9975C0DE2C4730BC(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::Class_1_5E4C21FA3C948472*(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9975C0DE2C4730BC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_8D9CDAA79F28CC9D(::MoleMole::Battle::Entity* a1, ::Class_1_C7C8DAC9B7F55F6A* a2, ::System::Collections::Generic::List_1<::Struct_2_9B079B18CA73BD4E>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_C7C8DAC9B7F55F6A*, ::System::Collections::Generic::List_1<::Struct_2_9B079B18CA73BD4E>*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_8D9CDAA79F28CC9D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B9421C3C27FA4EF1(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EVariantElement a2, ::Class_2_874AD1BB59BFEABD_1* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EVariantElement, ::Class_2_874AD1BB59BFEABD_1*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_B9421C3C27FA4EF1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C456DA8D21F058D6(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C456DA8D21F058D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_B20A7D4303F8FB6C(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_B20A7D4303F8FB6C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_C16955C286836978(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_C16955C286836978_OFFSET))(a1);
	}

	static ::System::Void Method_3_05A23789CDFAA182(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_05A23789CDFAA182_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D2D818520BDB60FA(::MoleMole::Battle::Entity* a1, ::Class_2_874AD1BB59BFEABD_1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_874AD1BB59BFEABD_1*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D2D818520BDB60FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77DC24EBAF55C582(::MoleMole::Battle::Entity* a1, ::Class_2_0D0B57FF916F9911* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_0D0B57FF916F9911*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_77DC24EBAF55C582_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3EB1D6D40B249789(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_3EB1D6D40B249789_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_A687473E3DD1C37F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A687473E3DD1C37F_OFFSET))(a1);
	}

	static ::System::Single Method_3_D3F337291E08D220(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2B5C3D9688202862* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::Class_3_F41D242A20F8FE06*, ::Class_2_2B5C3D9688202862*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D3F337291E08D220_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_6EE6A27960654DB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_6EE6A27960654DB8_OFFSET))(a1);
	}

	static ::Class_1_C15F20696B789569* Method_3_694D9A671013772D(::Class_3_F41D242A20F8FE06* a1)
	{
		return ((::Class_1_C15F20696B789569*(*)(::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_694D9A671013772D_OFFSET))(a1);
	}

	static ::System::Void Method_3_D4DAF77D77A29817(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D4DAF77D77A29817_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_69DA9858D30F8586(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_69DA9858D30F8586_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_710CD2A9B301B56D* a1)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6855C790B3235464(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_6855C790B3235464_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_60FF8885D98CE3B1(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_60FF8885D98CE3B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A5B043FB42E59753(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_A5B043FB42E59753_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7A4BFF33636159B6(::MoleMole::Battle::Entity* a1, ::Class_2_1A855E5EED3B1B47_1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_1A855E5EED3B1B47_1*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_7A4BFF33636159B6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_59A97A72F28E2C85(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_59A97A72F28E2C85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_61263B89A4121DFD(::Class_3_710CD2A9B301B56D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_61263B89A4121DFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EE26BD50A884C75A_1(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_EE26BD50A884C75A_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_23142922C0606C34_1(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_23142922C0606C34_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_710CD2A9B301B56D* a1)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_D7EC6EA1892FBC2A(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_D7EC6EA1892FBC2A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8FD2A4B3EFA23F6E_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}
};
