#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2EB4AC025441BDF7_Enum_3_3ED975B36B58402C.h"
#include "unitysdk/Enum_3_3BAB5080F98EC22A.h"
#include "unitysdk/Enum_3_3FE6D5499B8A2B12.h"
#include "unitysdk/Enum_3_52E949B35CB72EF7.h"
#include "unitysdk/Enum_3_623007DD22E200D7.h"
#include "unitysdk/Enum_3_92883740E544236B.h"
#include "unitysdk/Enum_3_D2A64EC3E750051D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Struct_2_5887222B9AE38D34.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

class Class_0_16E4307DCC419505_179;
class Class_1_451601B8BB62C38C_4;
class Class_1_451601B8BB62C38C_5;
class Class_1_5F716E677DDB6769;
class Class_1_67BCD41915294A27;
class Class_1_7807B2B04302CD7B_17;
class Class_1_8CD67563D6E43D63;
class Class_1_A5DB3A79343C7D5B;
namespace MoleMole { class RegionExtension; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6CAC28ACDD58FF63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C87720)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET UNITYSDK_OFFSET(0x14C8A7D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_1A8562907FB45B7B_OFFSET UNITYSDK_OFFSET(0x14C8EF10)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET UNITYSDK_OFFSET(0x14C8CC70)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14C8E610)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_2736BD5C1E0E53A7_OFFSET UNITYSDK_OFFSET(0x14C8D7B0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_288A3690D1F8DB00_OFFSET UNITYSDK_OFFSET(0x14C89490)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET UNITYSDK_OFFSET(0x14C87EF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14C88EF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_402CA47934CBE31E_OFFSET UNITYSDK_OFFSET(0x14C87D70)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET UNITYSDK_OFFSET(0x14C8B190)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET UNITYSDK_OFFSET(0x14C8AFC0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_47DFF4DC68936641_OFFSET UNITYSDK_OFFSET(0x14C8C510)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET UNITYSDK_OFFSET(0x14C90B50)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x14C8FC90)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_5ACC94D96788CEE4_OFFSET UNITYSDK_OFFSET(0x14C88B80)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET UNITYSDK_OFFSET(0x14C8D210)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x14C8C300)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x14C89420)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET UNITYSDK_OFFSET(0x14C8BCE0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_7A9458695B6992F6_OFFSET UNITYSDK_OFFSET(0x14C87F40)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x14C8F750)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_86C2FEBEB0350802_OFFSET UNITYSDK_OFFSET(0x14C8B6B0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x14C8D7A0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_914A6AEBA892C353_OFFSET UNITYSDK_OFFSET(0x14C8FE80)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9242276D1C31C14A_OFFSET UNITYSDK_OFFSET(0x14C8F500)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14C90960)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9D9BF6777E7E80DD_OFFSET UNITYSDK_OFFSET(0x14C8CEB0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x14C8A300)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_AA41108E365650D7_OFFSET UNITYSDK_OFFSET(0x14C8B380)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x14C90A30)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x14C88F40)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET UNITYSDK_OFFSET(0x14C8C440)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x14C90B40)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14C88B70)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C88F00)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x14C8F890)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_D7B57D4A6E55D8F9_1_OFFSET UNITYSDK_OFFSET(0x14C8D2E0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x14C8A310)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET UNITYSDK_OFFSET(0x14C8AAF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x14C8E620)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET UNITYSDK_OFFSET(0x14C8E310)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DFE600D5E20EDBC8_OFFSET UNITYSDK_OFFSET(0x14C889E0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET UNITYSDK_OFFSET(0x14C8E130)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET UNITYSDK_OFFSET(0x14C89240)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x14C8F4D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_FB2B76D3FA17269F_OFFSET UNITYSDK_OFFSET(0x14C8DBC0)
#define CLASS_2_6CAC28ACDD58FF63_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14C879A0)
#define CLASS_2_6CAC28ACDD58FF63__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C87D50)
#define CLASS_2_6CAC28ACDD58FF63__CTOR_OFFSET UNITYSDK_OFFSET(0x14C87B80)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex = 47171;

class Class_2_6CAC28ACDD58FF63 : public ::Foundation::SingletonDisposable_1<::Class_2_6CAC28ACDD58FF63*>
{
public:
	static ::System::Int64* StaticGet_Field_2_8()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xA4D0);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xA4D8);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xA4D9);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xA4DA);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::Int32 Field_2_28 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_2_35 = 0x7D1; // 0x0
	// static const ::System::Int32 Field_2_34 = 0x7D2; // 0x0
	// static const ::System::Int32 Field_2_33 = 0x7D3; // 0x0
	// static const ::System::Int32 Field_2_32 = 0x7D4; // 0x0
	// static const ::System::Int32 Field_2_39 = 0x7D5; // 0x0
	// static const ::System::Int32 Field_2_38 = 0x3F8; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::Int32 Field_2_36 = 0x270F; // 0x0
	// static const ::System::String* Field_2_43; // 0x0
	// static const ::System::String* Field_2_42; // 0x0
	// static const ::System::String* Field_2_41; // 0x0
	// static const ::System::String* Field_2_47; // 0x0
	::System::Collections::Generic::List_1<::Class_1_5F716E677DDB6769*>* Field_2_12; // 0x10
	::Class_1_451601B8BB62C38C_4* Field_2_23; // 0x18
	::System::String* Field_2_15; // 0x20
	::Class_1_7807B2B04302CD7B_17* Field_2_40; // 0x28
	::Class_1_451601B8BB62C38C_5* Field_2_22; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_11; // 0x38
	::Class_1_8CD67563D6E43D63* Field_2_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_10; // 0x48
	::System::Single Field_2_19; // 0x50
	::System::Single Field_2_45; // 0x54
	::System::Int32 Field_2_26; // 0x58
	::System::Int32 Field_2_14; // 0x5C
	::System::Single Field_2_20; // 0x60
	::System::Int32 Field_2_31; // 0x64
	::Enum_3_3BAB5080F98EC22A Field_2_50; // 0x68
	::System::Int32 Field_2_24; // 0x6C
	::System::Single Field_2_46; // 0x70
	::System::Single Field_2_27; // 0x74
	::UnityEngine::NetworkReachability Field_2_29; // 0x78
	::System::Single Field_2_17; // 0x7C
	::System::Boolean Field_2_30; // 0x80
	::System::Boolean Field_2_16; // 0x81
	::System::Boolean Field_2_44; // 0x82
	::System::Single Field_2_18; // 0x84
	::System::Int32 Field_2_25; // 0x88
	::System::Int32 Field_2_21; // 0x8C
	::Enum_3_3FE6D5499B8A2B12 Field_2_13; // 0x90
	::MoleMole::EUILayoutPlatform Field_2_51; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_ONCREATE_OFFSET))(this);
	}

	static ::System::String* Method_2_402CA47934CBE31E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_402CA47934CBE31E_OFFSET))(a1);
	}

	::System::Void Method_2_3D97F53977FFCB87(::UnityEngine::NetworkReachability a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NetworkReachability))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_7A9458695B6992F6(::Enum_3_52E949B35CB72EF7 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Enum_3_52E949B35CB72EF7, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_7A9458695B6992F6_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_2_DFE600D5E20EDBC8(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DFE600D5E20EDBC8_OFFSET))(a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_2_5ACC94D96788CEE4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_5ACC94D96788CEE4_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_3FE6D5499B8A2B12 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3FE6D5499B8A2B12))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0ABED050BF793D4(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_288A3690D1F8DB00(::Enum_3_92883740E544236B a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_92883740E544236B, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_288A3690D1F8DB00_OFFSET))(a1, a2);
	}

	::Enum_3_3FE6D5499B8A2B12 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_3FE6D5499B8A2B12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	static ::System::Void Method_2_D7B57D4A6E55D8F9(::Class_1_67BCD41915294A27* a1)
	{
		return ((::System::Void(*)(::Class_1_67BCD41915294A27*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_D7B57D4A6E55D8F9_OFFSET))(a1);
	}

	::System::Void Method_2_DCFB4B22A23E0C97(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::Enum_3_623007DD22E200D7 a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_AA41108E365650D7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_AA41108E365650D7_OFFSET))(this);
	}

	::System::Void Method_2_86C2FEBEB0350802(::MoleMole::RegionExtension* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_86C2FEBEB0350802_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_A5DB3A79343C7D5B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5DB3A79343C7D5B*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_47DFF4DC68936641(::Enum_3_D2A64EC3E750051D a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_D2A64EC3E750051D, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_47DFF4DC68936641_OFFSET))(a1, a2);
	}

	::System::Void Method_2_211750970715814F(::Enum_3_3FE6D5499B8A2B12 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3FE6D5499B8A2B12, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_9D9BF6777E7E80DD(::System::String* a1, ::Enum_3_92883740E544236B a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Enum_3_92883740E544236B, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9D9BF6777E7E80DD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_2_418CA4EF93DDFBCC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_6B55500FBAD14FD0(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_D7B57D4A6E55D8F9_1(::Class_1_67BCD41915294A27* a1)
	{
		return ((::System::Void(*)(::Class_1_67BCD41915294A27*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_D7B57D4A6E55D8F9_1_OFFSET))(a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_7807B2B04302CD7B_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_17*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_2736BD5C1E0E53A7(::Class_1_2EB4AC025441BDF7_Enum_3_3ED975B36B58402C a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::Class_1_2EB4AC025441BDF7_Enum_3_3ED975B36B58402C, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_2736BD5C1E0E53A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_FB2B76D3FA17269F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_FB2B76D3FA17269F_OFFSET))(a1);
	}

	::System::Void Method_2_F0ABED050BF793D4_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDC3E58374005D91(::Enum_3_3FE6D5499B8A2B12 a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3FE6D5499B8A2B12, ::System::String*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_7807B2B04302CD7B_17* Method_2_24748FC20F375725()
	{
		return ((::Class_1_7807B2B04302CD7B_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DD784213055292FB_OFFSET))();
	}

	static ::System::Void Method_2_1A8562907FB45B7B(::Class_1_67BCD41915294A27* a1, ::Class_0_16E4307DCC419505_179* a2)
	{
		return ((::System::Void(*)(::Class_1_67BCD41915294A27*, ::Class_0_16E4307DCC419505_179*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_1A8562907FB45B7B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
	}

	static ::System::Void Method_2_9242276D1C31C14A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9242276D1C31C14A_OFFSET))(a1);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_76F9C089C5BB4240(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C04C7DA78BBA8316(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_914A6AEBA892C353(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_914A6AEBA892C353_OFFSET))(a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Int32 Method_2_42123A8F7B47F79C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A333308232F7F0(::Enum_3_3FE6D5499B8A2B12 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3FE6D5499B8A2B12, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_491F28AD4D453C95(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET))(a1, a2);
	}
};
