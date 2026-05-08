#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Span_1.h"

class Class_3_4D2BC204E8C5F006;
class Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_17;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_16;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_18;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_19;

#define CLASS_3_B51BC9C810A884E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB6E3D0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET UNITYSDK_OFFSET(0xFB70EF0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_OFFSET UNITYSDK_OFFSET(0xFB6F7C0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_05EB3BF5D85E1975_OFFSET UNITYSDK_OFFSET(0xFB723D0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_0ECC02F80A14F645_OFFSET UNITYSDK_OFFSET(0xFB6E480)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_1F454984B838C4C2_OFFSET UNITYSDK_OFFSET(0xFB74020)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_20844B9B88D99855_OFFSET UNITYSDK_OFFSET(0xFB72990)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_2A6658899FF2F2FF_OFFSET UNITYSDK_OFFSET(0xFB6F610)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_4851556FA9DA60D3_OFFSET UNITYSDK_OFFSET(0xFB6E610)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_507014720E6217A6_OFFSET UNITYSDK_OFFSET(0xFB70DE0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_1_OFFSET UNITYSDK_OFFSET(0xFB71FA0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_OFFSET UNITYSDK_OFFSET(0xFB6F970)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_57EECF4D5E2E5477_OFFSET UNITYSDK_OFFSET(0xFB6F470)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_59FC00BA2C84E793_OFFSET UNITYSDK_OFFSET(0xFB6EDA0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_1_OFFSET UNITYSDK_OFFSET(0xFB72560)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_OFFSET UNITYSDK_OFFSET(0xFB6FEF0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5EEBE82AC66B153E_OFFSET UNITYSDK_OFFSET(0xFB737C0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_61971BDECF769007_OFFSET UNITYSDK_OFFSET(0xFB72DD0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xFB71270)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_6A40152ADF1DC054_OFFSET UNITYSDK_OFFSET(0xFB70330)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_6C4FBEF25D07BE61_OFFSET UNITYSDK_OFFSET(0xFB6EA20)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_1_OFFSET UNITYSDK_OFFSET(0xFB73E30)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_OFFSET UNITYSDK_OFFSET(0xFB710A0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_8111B319D20E05C2_OFFSET UNITYSDK_OFFSET(0xFB72BC0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_89557094969AA4AF_OFFSET UNITYSDK_OFFSET(0xFB6ECD0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_1_OFFSET UNITYSDK_OFFSET(0xFB70B00)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_OFFSET UNITYSDK_OFFSET(0xFB70820)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_1_OFFSET UNITYSDK_OFFSET(0xFB73390)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_OFFSET UNITYSDK_OFFSET(0xFB6F140)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_BF1F150C5C73F267_OFFSET UNITYSDK_OFFSET(0xFB6F320)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_1_OFFSET UNITYSDK_OFFSET(0xFB70600)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_2_OFFSET UNITYSDK_OFFSET(0xFB739F0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_3_OFFSET UNITYSDK_OFFSET(0xFB73C10)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_OFFSET UNITYSDK_OFFSET(0xFB70110)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D49EE29BF8606D03_OFFSET UNITYSDK_OFFSET(0xFB72780)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D4CEB3560695D818_OFFSET UNITYSDK_OFFSET(0xFB72440)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET UNITYSDK_OFFSET(0xFB73570)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_OFFSET UNITYSDK_OFFSET(0xFB73140)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_1_OFFSET UNITYSDK_OFFSET(0xFB71E40)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_OFFSET UNITYSDK_OFFSET(0xFB6EB70)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E84D2BCC37BB5A40_OFFSET UNITYSDK_OFFSET(0xFB721C0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_F4746A25159C2C4B_OFFSET UNITYSDK_OFFSET(0xFB72FB0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FC70CE1031A305EB_OFFSET UNITYSDK_OFFSET(0xFB74000)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_1_OFFSET UNITYSDK_OFFSET(0xFB6E870)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_2_OFFSET UNITYSDK_OFFSET(0xFB6FB90)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_3_OFFSET UNITYSDK_OFFSET(0xFB6FD40)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_OFFSET UNITYSDK_OFFSET(0xFB6E6C0)
#define CLASS_3_B51BC9C810A884E4__CTOR_OFFSET UNITYSDK_OFFSET(0xFB6DEB0)

inline static constexpr unsigned int Class_3_B51BC9C810A884E4_TypeDefinitionIndex = 47675;

class Class_3_B51BC9C810A884E4 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_B51BC9C810A884E4** StaticGet_Field_3_0()
	{
		return (::Class_3_B51BC9C810A884E4**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B51BC9C810A884E4_TypeDefinitionIndex)->GetStaticField(0x38840);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_3_2; // 0x20
	::Nap::NapECS::EcsComponentTask_1<::Class_3_4D2BC204E8C5F006*> Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_DISPOSE_OFFSET))(this);
	}

	static ::System::Int32 Method_3_0ECC02F80A14F645(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_0ECC02F80A14F645_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6C4FBEF25D07BE61(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_6C4FBEF25D07BE61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E36576B7693CA33C(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_OFFSET))(a1, a2, a3);
	}

	::System::Span_1<::Foundation::Unreal::FGameplayTagContainer> Method_3_59FC00BA2C84E793(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Span_1<::Foundation::Unreal::FGameplayTagContainer>(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_59FC00BA2C84E793_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BF1F150C5C73F267(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_BF1F150C5C73F267_OFFSET))(a1);
	}

	::Foundation::Unreal::FGameplayTagContainer& Method_3_57EECF4D5E2E5477(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_57EECF4D5E2E5477_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_2A6658899FF2F2FF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagQuery* a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_2A6658899FF2F2FF_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_2(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_3_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_6A40152ADF1DC054(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_6A40152ADF1DC054_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_1_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_507014720E6217A6(::Class_3_4D2BC204E8C5F006* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Class_3_4D2BC204E8C5F006*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_507014720E6217A6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_77BE2267C2983737(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_OFFSET))(a1, a2);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_89557094969AA4AF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2* a3, ::Foundation::Unreal::FGameplayTagContainer& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_89557094969AA4AF_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E36576B7693CA33C_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_E84D2BCC37BB5A40(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E84D2BCC37BB5A40_OFFSET))(a1);
	}

	::System::Boolean Method_3_05EB3BF5D85E1975(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_05EB3BF5D85E1975_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_D4CEB3560695D818(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D4CEB3560695D818_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_D49EE29BF8606D03(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D49EE29BF8606D03_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_20844B9B88D99855(::Nap::NapECS::EcsEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_20844B9B88D99855_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_8111B319D20E05C2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_8111B319D20E05C2_OFFSET))(a1);
	}

	static ::Class_3_B51BC9C810A884E4* Method_3_4851556FA9DA60D3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Class_3_B51BC9C810A884E4*(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_4851556FA9DA60D3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_61971BDECF769007(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_61971BDECF769007_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F4746A25159C2C4B(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_F4746A25159C2C4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5EEBE82AC66B153E(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagQuery* a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5EEBE82AC66B153E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_3(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77BE2267C2983737_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_1_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_3_FC70CE1031A305EB(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FC70CE1031A305EB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_1F454984B838C4C2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_1F454984B838C4C2_OFFSET))(a1, a2);
	}
};
