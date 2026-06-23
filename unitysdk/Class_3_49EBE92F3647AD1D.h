#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Span_1.h"

class Class_3_49EBE92F3647AD1D_Class_3_F1899338F9BBB1E2;
class Class_3_CCAF4B6A77932E66;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_49EBE92F3647AD1D_Class_3_B6136C2F127116DF_18;
template <typename T> class Class_3_49EBE92F3647AD1D_Class_3_B6136C2F127116DF_19;
template <typename T> class Class_3_49EBE92F3647AD1D_Class_3_B6136C2F127116DF_20;
template <typename T> class Class_3_49EBE92F3647AD1D_Class_3_B6136C2F127116DF_21;

#define CLASS_3_49EBE92F3647AD1D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFBE93D0)
#define CLASS_3_49EBE92F3647AD1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFBE9A10)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET UNITYSDK_OFFSET(0xFBEE640)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_03AFFFCB1D4D29D7_OFFSET UNITYSDK_OFFSET(0xFBEDEA0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_05EB3BF5D85E1975_OFFSET UNITYSDK_OFFSET(0xFBEC5B0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_0ECC02F80A14F645_OFFSET UNITYSDK_OFFSET(0xFBEF500)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_1F454984B838C4C2_OFFSET UNITYSDK_OFFSET(0xFBEC3D0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_20844B9B88D99855_OFFSET UNITYSDK_OFFSET(0xFBEE410)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_2A6658899FF2F2FF_OFFSET UNITYSDK_OFFSET(0xFBECA60)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_4851556FA9DA60D3_OFFSET UNITYSDK_OFFSET(0xFBEB9F0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_5245253E7E7D7790_1_OFFSET UNITYSDK_OFFSET(0xFBEF6A0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_5245253E7E7D7790_OFFSET UNITYSDK_OFFSET(0xFBED700)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_57EECF4D5E2E5477_OFFSET UNITYSDK_OFFSET(0xFBEA0E0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_59FC00BA2C84E793_OFFSET UNITYSDK_OFFSET(0xFBEAF20)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_5A54A43841C97366_1_OFFSET UNITYSDK_OFFSET(0xFBEE7F0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_5A54A43841C97366_OFFSET UNITYSDK_OFFSET(0xFBEC620)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_5EEBE82AC66B153E_OFFSET UNITYSDK_OFFSET(0xFBEC1A0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_61971BDECF769007_OFFSET UNITYSDK_OFFSET(0xFBECDE0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xFBEA280)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_6A40152ADF1DC054_OFFSET UNITYSDK_OFFSET(0xFBEBED0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_6CC4044294C4887F_OFFSET UNITYSDK_OFFSET(0xFBEB480)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_77BE2267C2983737_1_OFFSET UNITYSDK_OFFSET(0xFBECC10)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_77BE2267C2983737_OFFSET UNITYSDK_OFFSET(0xFBEB640)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_8111B319D20E05C2_OFFSET UNITYSDK_OFFSET(0xFBEE200)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_89557094969AA4AF_OFFSET UNITYSDK_OFFSET(0xFBEAE50)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_99B3661B2DB0E069_1_OFFSET UNITYSDK_OFFSET(0xFBEDBC0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_99B3661B2DB0E069_OFFSET UNITYSDK_OFFSET(0xFBEBAA0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_AF56B65B1D71B5C5_1_OFFSET UNITYSDK_OFFSET(0xFBEF8C0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_AF56B65B1D71B5C5_OFFSET UNITYSDK_OFFSET(0xFBEB810)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFBEB3F0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_BCE449128784F4BA_OFFSET UNITYSDK_OFFSET(0xFBEB5E0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_BF1F150C5C73F267_OFFSET UNITYSDK_OFFSET(0xFBEBD80)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_1_OFFSET UNITYSDK_OFFSET(0xFBEC840)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_2_OFFSET UNITYSDK_OFFSET(0xFBED120)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_3_OFFSET UNITYSDK_OFFSET(0xFBED340)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_OFFSET UNITYSDK_OFFSET(0xFBE9C70)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFBED920)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_D49EE29BF8606D03_OFFSET UNITYSDK_OFFSET(0xFBED9B0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET UNITYSDK_OFFSET(0xFBEEA10)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_D7C39D28BBF4A9B4_OFFSET UNITYSDK_OFFSET(0xFBE9E90)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_E36576B7693CA33C_1_OFFSET UNITYSDK_OFFSET(0xFBEF020)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_E36576B7693CA33C_OFFSET UNITYSDK_OFFSET(0xFBECFC0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_E84D2BCC37BB5A40_OFFSET UNITYSDK_OFFSET(0xFBEEC60)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_F4746A25159C2C4B_OFFSET UNITYSDK_OFFSET(0xFBED560)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FC70CE1031A305EB_OFFSET UNITYSDK_OFFSET(0xFBEF4E0)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_1_OFFSET UNITYSDK_OFFSET(0xFBEEE70)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_2_OFFSET UNITYSDK_OFFSET(0xFBEF180)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_3_OFFSET UNITYSDK_OFFSET(0xFBEF330)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_OFFSET UNITYSDK_OFFSET(0xFBEE050)
#define CLASS_3_49EBE92F3647AD1D_METHOD_3_FF46458076D0DC3B_OFFSET UNITYSDK_OFFSET(0xFBEB2C0)
#define CLASS_3_49EBE92F3647AD1D_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFBE9AC0)
#define CLASS_3_49EBE92F3647AD1D__CTOR_OFFSET UNITYSDK_OFFSET(0xFBE94E0)

inline static constexpr unsigned int Class_3_49EBE92F3647AD1D_TypeDefinitionIndex = 60092;

class Class_3_49EBE92F3647AD1D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_49EBE92F3647AD1D** StaticGet_Field_3_1()
	{
		return (::Class_3_49EBE92F3647AD1D**)Il2CppClass::FromTypeDefinitionIndex(Class_3_49EBE92F3647AD1D_TypeDefinitionIndex)->GetStaticField(0x4C370);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsComponentTask_1<::Class_3_CCAF4B6A77932E66*> Field_3_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_3_3; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_DISPOSE_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_D7C39D28BBF4A9B4_OFFSET))(a1, a2);
	}

	::Foundation::Unreal::FGameplayTagContainer& Method_3_57EECF4D5E2E5477(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_57EECF4D5E2E5477_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_89557094969AA4AF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Class_3_49EBE92F3647AD1D_Class_3_F1899338F9BBB1E2* a3, ::Foundation::Unreal::FGameplayTagContainer& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Class_3_49EBE92F3647AD1D_Class_3_F1899338F9BBB1E2*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_89557094969AA4AF_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_3_FF46458076D0DC3B(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FF46458076D0DC3B_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6CC4044294C4887F(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_6CC4044294C4887F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77BE2267C2983737(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_77BE2267C2983737_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_AF56B65B1D71B5C5_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_99B3661B2DB0E069_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BF1F150C5C73F267(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_BF1F150C5C73F267_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_6A40152ADF1DC054(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_6A40152ADF1DC054_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5EEBE82AC66B153E(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagQuery* a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_5EEBE82AC66B153E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_1F454984B838C4C2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_1F454984B838C4C2_OFFSET))(a1, a2);
	}

	static ::Class_3_49EBE92F3647AD1D* Method_3_4851556FA9DA60D3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Class_3_49EBE92F3647AD1D*(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_4851556FA9DA60D3_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_5A54A43841C97366_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_2A6658899FF2F2FF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagQuery* a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_2A6658899FF2F2FF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_77BE2267C2983737_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_77BE2267C2983737_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_61971BDECF769007(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_61971BDECF769007_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E36576B7693CA33C(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_E36576B7693CA33C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BCE449128784F4BA(::Class_3_CCAF4B6A77932E66* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Class_3_CCAF4B6A77932E66*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_BCE449128784F4BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_3(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_C6DC95FC693D522D_3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F4746A25159C2C4B(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_F4746A25159C2C4B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_5245253E7E7D7790_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_D49EE29BF8606D03(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_D49EE29BF8606D03_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_99B3661B2DB0E069_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_03AFFFCB1D4D29D7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_8111B319D20E05C2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_8111B319D20E05C2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_20844B9B88D99855(::Nap::NapECS::EcsEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_20844B9B88D99855_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_5A54A43841C97366_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_E84D2BCC37BB5A40(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_E84D2BCC37BB5A40_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E36576B7693CA33C_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_E36576B7693CA33C_1_OFFSET))(a1, a2, a3);
	}

	::System::Span_1<::Foundation::Unreal::FGameplayTagContainer> Method_3_59FC00BA2C84E793(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Span_1<::Foundation::Unreal::FGameplayTagContainer>(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_59FC00BA2C84E793_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_2(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FD43C14A1C42A844_3_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt64 Method_3_FC70CE1031A305EB(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_FC70CE1031A305EB_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_0ECC02F80A14F645(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_0ECC02F80A14F645_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_5245253E7E7D7790_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_05EB3BF5D85E1975(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_05EB3BF5D85E1975_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_METHOD_3_AF56B65B1D71B5C5_1_OFFSET))(a1, a2, a3);
	}
};
