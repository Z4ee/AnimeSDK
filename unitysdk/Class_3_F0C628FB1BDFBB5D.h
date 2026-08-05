#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Span_1.h"

class Class_3_CCAF4B6A77932E66;
class Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6;
class Class_3_F0C628FB1BDFBB5D_Class_3_F1899338F9BBB1E2;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_F0C628FB1BDFBB5D_Class_3_B6136C2F127116DF_19;
template <typename T> class Class_3_F0C628FB1BDFBB5D_Class_3_B6136C2F127116DF_17;
template <typename T> class Class_3_F0C628FB1BDFBB5D_Class_3_B6136C2F127116DF_18;
template <typename T> class Class_3_F0C628FB1BDFBB5D_Class_3_B6136C2F127116DF_20;

#define CLASS_3_F0C628FB1BDFBB5D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11C5EDB0)
#define CLASS_3_F0C628FB1BDFBB5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C5F440)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET UNITYSDK_OFFSET(0x11C61680)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_03AFFFCB1D4D29D7_OFFSET UNITYSDK_OFFSET(0x11C5F820)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_05EB3BF5D85E1975_OFFSET UNITYSDK_OFFSET(0x11C62580)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_0B1D06A90B6E461E_1_OFFSET UNITYSDK_OFFSET(0x11C637A0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_0B1D06A90B6E461E_OFFSET UNITYSDK_OFFSET(0x11C62FF0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_10810DD7D697E5DC_OFFSET UNITYSDK_OFFSET(0x11C61CC0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1CBB3800BD119FCA_1_OFFSET UNITYSDK_OFFSET(0x11C64530)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1CBB3800BD119FCA_OFFSET UNITYSDK_OFFSET(0x11C5FB00)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1F454984B838C4C2_OFFSET UNITYSDK_OFFSET(0x11C62090)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_20844B9B88D99855_OFFSET UNITYSDK_OFFSET(0x11C63F00)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2A6658899FF2F2FF_OFFSET UNITYSDK_OFFSET(0x11C649A0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2B81EF0769A0A0E3_OFFSET UNITYSDK_OFFSET(0x11C61490)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2F2F73A56131CF4F_1_OFFSET UNITYSDK_OFFSET(0x11C63320)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2F2F73A56131CF4F_OFFSET UNITYSDK_OFFSET(0x11C5FD70)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_57EECF4D5E2E5477_OFFSET UNITYSDK_OFFSET(0x11C62A50)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_61971BDECF769007_OFFSET UNITYSDK_OFFSET(0x11C61A10)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_6E2B9421653A0633_OFFSET UNITYSDK_OFFSET(0x11C63E80)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_8111B319D20E05C2_OFFSET UNITYSDK_OFFSET(0x11C62DC0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_823F9CBE7DC007BA_OFFSET UNITYSDK_OFFSET(0x11C63AD0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B315FB354C2AAEDE_OFFSET UNITYSDK_OFFSET(0x11C655A0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B558CB5A6A97AB85_1_OFFSET UNITYSDK_OFFSET(0x11C64B70)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B558CB5A6A97AB85_OFFSET UNITYSDK_OFFSET(0x11C63D00)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11C64CF0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BCE449128784F4BA_OFFSET UNITYSDK_OFFSET(0x11C62790)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BE2B1A2E8CE22208_OFFSET UNITYSDK_OFFSET(0x11C61BF0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_C72E8763F85061A9_OFFSET UNITYSDK_OFFSET(0x11C5F9F0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C60190)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CFA82E5ECE781BEB_OFFSET UNITYSDK_OFFSET(0x11C625F0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CFD5A611182DCC5F_OFFSET UNITYSDK_OFFSET(0x11C61250)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_D8EC9E67BBC52D43_1_OFFSET UNITYSDK_OFFSET(0x11C656F0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_D8EC9E67BBC52D43_OFFSET UNITYSDK_OFFSET(0x11C64F50)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_DAA19C066ED0CA05_OFFSET UNITYSDK_OFFSET(0x11C62270)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E21A1920C0EA4065_OFFSET UNITYSDK_OFFSET(0x11C64370)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E7F39D5795D676F7_OFFSET UNITYSDK_OFFSET(0x11C61850)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E84D2BCC37BB5A40_OFFSET UNITYSDK_OFFSET(0x11C63570)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x11C60220)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F143B696A4C4F57E_1_OFFSET UNITYSDK_OFFSET(0x11C647A0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F143B696A4C4F57E_OFFSET UNITYSDK_OFFSET(0x11C60E10)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_1_OFFSET UNITYSDK_OFFSET(0x11C627F0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_2_OFFSET UNITYSDK_OFFSET(0x11C64130)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_3_OFFSET UNITYSDK_OFFSET(0x11C65190)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_OFFSET UNITYSDK_OFFSET(0x11C61010)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FC70CE1031A305EB_OFFSET UNITYSDK_OFFSET(0x11C62A30)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_1_OFFSET UNITYSDK_OFFSET(0x11C62BF0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_2_OFFSET UNITYSDK_OFFSET(0x11C64D80)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_3_OFFSET UNITYSDK_OFFSET(0x11C653D0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_OFFSET UNITYSDK_OFFSET(0x11C5FFC0)
#define CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FF46458076D0DC3B_OFFSET UNITYSDK_OFFSET(0x11C5F6F0)
#define CLASS_3_F0C628FB1BDFBB5D_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11C5F4F0)
#define CLASS_3_F0C628FB1BDFBB5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C5F6B0)
#define CLASS_3_F0C628FB1BDFBB5D__CTOR_OFFSET UNITYSDK_OFFSET(0x11C5EED0)

inline static constexpr unsigned int Class_3_F0C628FB1BDFBB5D_TypeDefinitionIndex = 63323;

class Class_3_F0C628FB1BDFBB5D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_F0C628FB1BDFBB5D** StaticGet_Field_3_7()
	{
		return (::Class_3_F0C628FB1BDFBB5D**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F0C628FB1BDFBB5D_TypeDefinitionIndex)->GetStaticField(0x31600);
	}
	static ::Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6** StaticGet_Field_3_4()
	{
		return (::Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F0C628FB1BDFBB5D_TypeDefinitionIndex)->GetStaticField(0x31608);
	}
	::Nap::NapECS::EcsComponentTask_1<::Class_3_CCAF4B6A77932E66*> Field_3_6; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_3_5; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_DISPOSE_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_FF46458076D0DC3B(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FF46458076D0DC3B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_03AFFFCB1D4D29D7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1CBB3800BD119FCA(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1CBB3800BD119FCA_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_2F2F73A56131CF4F(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2F2F73A56131CF4F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F0D9B6AAFF504D87_OFFSET))(this);
	}

	static ::System::Void Method_3_F143B696A4C4F57E(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F143B696A4C4F57E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FAF0001BC283C6D6(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CFD5A611182DCC5F(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagQuery* a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CFD5A611182DCC5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2B81EF0769A0A0E3(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2B81EF0769A0A0E3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_E7F39D5795D676F7(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E7F39D5795D676F7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_61971BDECF769007(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_61971BDECF769007_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BE2B1A2E8CE22208(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Class_3_F0C628FB1BDFBB5D_Class_3_F1899338F9BBB1E2* a3, ::Foundation::Unreal::FGameplayTagContainer& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Class_3_F0C628FB1BDFBB5D_Class_3_F1899338F9BBB1E2*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BE2B1A2E8CE22208_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_1F454984B838C4C2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1F454984B838C4C2_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_DAA19C066ED0CA05(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_DAA19C066ED0CA05_OFFSET))(a1);
	}

	static ::Class_3_F0C628FB1BDFBB5D* Method_3_C72E8763F85061A9(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Class_3_F0C628FB1BDFBB5D*(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_C72E8763F85061A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CFA82E5ECE781BEB(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_CFA82E5ECE781BEB_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_05EB3BF5D85E1975(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_05EB3BF5D85E1975_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_FAF0001BC283C6D6_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_1_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_3_FC70CE1031A305EB(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FC70CE1031A305EB_OFFSET))(a1, a2);
	}

	::Foundation::Unreal::FGameplayTagContainer& Method_3_57EECF4D5E2E5477(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_57EECF4D5E2E5477_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_8111B319D20E05C2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_8111B319D20E05C2_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_0B1D06A90B6E461E(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_0B1D06A90B6E461E_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_2F2F73A56131CF4F_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2F2F73A56131CF4F_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_E84D2BCC37BB5A40(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E84D2BCC37BB5A40_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_0B1D06A90B6E461E_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_0B1D06A90B6E461E_1_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_823F9CBE7DC007BA(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_823F9CBE7DC007BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B558CB5A6A97AB85(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B558CB5A6A97AB85_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6E2B9421653A0633(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_6E2B9421653A0633_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_20844B9B88D99855(::Nap::NapECS::EcsEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_20844B9B88D99855_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FAF0001BC283C6D6_2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_E21A1920C0EA4065(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_E21A1920C0EA4065_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1CBB3800BD119FCA_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_1CBB3800BD119FCA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F143B696A4C4F57E_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_F143B696A4C4F57E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_2A6658899FF2F2FF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagQuery* a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_2A6658899FF2F2FF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B558CB5A6A97AB85_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B558CB5A6A97AB85_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_2(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_D8EC9E67BBC52D43(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_D8EC9E67BBC52D43_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FAF0001BC283C6D6_3(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FAF0001BC283C6D6_3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_FD43C14A1C42A844_3_OFFSET))(a1, a2, a3);
	}

	::System::Span_1<::Foundation::Unreal::FGameplayTagContainer> Method_3_10810DD7D697E5DC(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Span_1<::Foundation::Unreal::FGameplayTagContainer>(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_10810DD7D697E5DC_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B315FB354C2AAEDE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_B315FB354C2AAEDE_OFFSET))(a1);
	}

	static ::System::Void Method_3_BCE449128784F4BA(::Class_3_CCAF4B6A77932E66* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Class_3_CCAF4B6A77932E66*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_BCE449128784F4BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D8EC9E67BBC52D43_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_METHOD_3_D8EC9E67BBC52D43_1_OFFSET))(a1, a2);
	}
};
