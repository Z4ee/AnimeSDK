#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_558AD373848C2AFF_Enum_3_3ED975B36B58402C.h"
#include "unitysdk/Enum_3_52E949B35CB72EF7.h"
#include "unitysdk/Enum_3_623007DD22E200D7.h"
#include "unitysdk/Enum_3_92883740E544236B.h"
#include "unitysdk/Enum_3_BB1D47482080BCCD.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF_1.h"
#include "unitysdk/Enum_3_D2A64EC3E750051D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

class Class_1_451601B8BB62C38C_12;
class Class_1_451601B8BB62C38C_4;
class Class_1_5F716E677DDB6769;
class Class_1_7807B2B04302CD7B_5;
class Class_1_8CD67563D6E43D63_1;
class Class_1_A5DB3A79343C7D5B;
namespace MoleMole { class RegionExtension; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6CAC28ACDD58FF63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x125878C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET UNITYSDK_OFFSET(0x1257D290)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET UNITYSDK_OFFSET(0x12588BD0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1258CFD0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_288A3690D1F8DB00_OFFSET UNITYSDK_OFFSET(0x1258A560)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET UNITYSDK_OFFSET(0x1258EF90)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1258A1D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_402CA47934CBE31E_OFFSET UNITYSDK_OFFSET(0x12588FE0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET UNITYSDK_OFFSET(0x1258DA10)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET UNITYSDK_OFFSET(0x12588E10)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_47DFF4DC68936641_OFFSET UNITYSDK_OFFSET(0x12588470)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET UNITYSDK_OFFSET(0x1258C660)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1258D170)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_5829EDBBB779744B_OFFSET UNITYSDK_OFFSET(0x1258B6C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x1258C910)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_5ACC94D96788CEE4_OFFSET UNITYSDK_OFFSET(0x1258A1F0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET UNITYSDK_OFFSET(0x1258C560)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x1258CFF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x12588100)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_723BF5D4145AD792_OFFSET UNITYSDK_OFFSET(0x1258C1F0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET UNITYSDK_OFFSET(0x1258DC00)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x1258D280)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1258A1E0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_914A6AEBA892C353_OFFSET UNITYSDK_OFFSET(0x125896D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9263850C8AA81221_OFFSET UNITYSDK_OFFSET(0x1258E970)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1258EFE0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1258C900)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_AA41108E365650D7_OFFSET UNITYSDK_OFFSET(0x1258E640)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x1258B3D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET UNITYSDK_OFFSET(0x1258CAF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1258CFE0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C1BD674C60895BAA_OFFSET UNITYSDK_OFFSET(0x1258E220)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1258F0B0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1258D130)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x1258CBC0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET UNITYSDK_OFFSET(0x1258D550)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET UNITYSDK_OFFSET(0x12588170)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DFE600D5E20EDBC8_OFFSET UNITYSDK_OFFSET(0x1258D3C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET UNITYSDK_OFFSET(0x1258C720)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET UNITYSDK_OFFSET(0x12587F20)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1258C630)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_FB2B76D3FA17269F_OFFSET UNITYSDK_OFFSET(0x12589160)
#define CLASS_2_6CAC28ACDD58FF63_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12587B50)
#define CLASS_2_6CAC28ACDD58FF63__CCTOR_OFFSET UNITYSDK_OFFSET(0x12587F00)
#define CLASS_2_6CAC28ACDD58FF63__CTOR_OFFSET UNITYSDK_OFFSET(0x12587D30)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex = 58015;

class Class_2_6CAC28ACDD58FF63 : public ::Foundation::SingletonDisposable_1<::Class_2_6CAC28ACDD58FF63*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xDD00);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xDD01);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xDD02);
	}
	static ::System::Int64* StaticGet_Field_2_6()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xDD08);
	}
	// static const ::System::Int32 Field_2_26 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_2_27 = 0x7D1; // 0x0
	// static const ::System::Int32 Field_2_28 = 0x7D2; // 0x0
	// static const ::System::Int32 Field_2_29 = 0x7D3; // 0x0
	// static const ::System::Int32 Field_2_30 = 0x7D4; // 0x0
	// static const ::System::Int32 Field_2_31 = 0x7D5; // 0x0
	// static const ::System::Int32 Field_2_32 = 0x3F8; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::Int32 Field_2_34 = 0x270F; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::String* Field_2_39; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_3; // 0x10
	::Class_1_7807B2B04302CD7B_5* Field_2_38; // 0x18
	::System::String* Field_2_7; // 0x20
	::Class_1_8CD67563D6E43D63_1* Field_2_5; // 0x28
	::Class_1_451601B8BB62C38C_4* Field_2_16; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_4; // 0x38
	::Class_1_451601B8BB62C38C_12* Field_2_15; // 0x40
	::System::Collections::Generic::List_1<::Class_1_5F716E677DDB6769*>* Field_2_10; // 0x48
	::Enum_3_CAE10C54ABAE6FAF_1 Field_2_44; // 0x50
	::System::Int32 Field_2_23; // 0x54
	::System::Int32 Field_2_22; // 0x58
	::System::Single Field_2_19; // 0x5C
	::System::Single Field_2_12; // 0x60
	::System::Single Field_2_18; // 0x64
	::System::Int32 Field_2_21; // 0x68
	::System::Single Field_2_11; // 0x6C
	::System::Boolean Field_2_24; // 0x70
	::System::Boolean Field_2_42; // 0x71
	::System::Boolean Field_2_14; // 0x72
	::System::Single Field_2_40; // 0x74
	::System::Int32 Field_2_20; // 0x78
	::System::Single Field_2_13; // 0x7C
	::UnityEngine::NetworkReachability Field_2_25; // 0x80
	::Enum_3_BB1D47482080BCCD Field_2_9; // 0x84
	::MoleMole::EUILayoutPlatform Field_2_43; // 0x88
	::System::Int32 Field_2_8; // 0x8C
	::System::Int32 Field_2_17; // 0x90
	::System::Single Field_2_41; // 0x94

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

	::System::Void Method_2_F0ABED050BF793D4(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDC3E58374005D91(::Enum_3_BB1D47482080BCCD a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB1D47482080BCCD, ::System::String*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_47DFF4DC68936641(::Enum_3_D2A64EC3E750051D a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_D2A64EC3E750051D, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_47DFF4DC68936641_OFFSET))(a1, a2);
	}

	::System::Void Method_2_211750970715814F(::Enum_3_BB1D47482080BCCD a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB1D47482080BCCD, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_42123A8F7B47F79C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_FB2B76D3FA17269F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_FB2B76D3FA17269F_OFFSET))(a1);
	}

	static ::System::Void Method_2_914A6AEBA892C353(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_914A6AEBA892C353_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_BB1D47482080BCCD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB1D47482080BCCD))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_7807B2B04302CD7B_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_5*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_5ACC94D96788CEE4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_5ACC94D96788CEE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_288A3690D1F8DB00(::Enum_3_92883740E544236B a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_92883740E544236B, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_288A3690D1F8DB00_OFFSET))(a1, a2);
	}

	::System::Void Method_2_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_5829EDBBB779744B(::Enum_3_52E949B35CB72EF7 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Enum_3_52E949B35CB72EF7, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_5829EDBBB779744B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_723BF5D4145AD792(::System::String* a1, ::Enum_3_92883740E544236B a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Enum_3_92883740E544236B, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_723BF5D4145AD792_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
	}

	static ::System::Void Method_2_491F28AD4D453C95(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET))(a1, a2);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_A5DB3A79343C7D5B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5DB3A79343C7D5B*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0ABED050BF793D4_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET))(this, a1, a2);
	}

	::Enum_3_BB1D47482080BCCD Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BB1D47482080BCCD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::Class_1_7807B2B04302CD7B_5* Method_2_24748FC20F375725()
	{
		return ((::Class_1_7807B2B04302CD7B_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_06A333308232F7F0(::Enum_3_BB1D47482080BCCD a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB1D47482080BCCD, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	static ::System::String* Method_2_DFE600D5E20EDBC8(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DFE600D5E20EDBC8_OFFSET))(a1);
	}

	static ::System::Void Method_2_6B55500FBAD14FD0(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_DCFB4B22A23E0C97(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::Enum_3_623007DD22E200D7 a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C04C7DA78BBA8316(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_C1BD674C60895BAA(::Class_1_558AD373848C2AFF_Enum_3_3ED975B36B58402C a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::Class_1_558AD373848C2AFF_Enum_3_3ED975B36B58402C, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C1BD674C60895BAA_OFFSET))(a1, a2);
	}

	::System::String* Method_2_AA41108E365650D7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_AA41108E365650D7_OFFSET))(this);
	}

	::System::Void Method_2_9263850C8AA81221(::MoleMole::RegionExtension* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9263850C8AA81221_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D97F53977FFCB87(::UnityEngine::NetworkReachability a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NetworkReachability))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET))(this, a1);
	}

	::System::Void Method_2_76F9C089C5BB4240(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_2_418CA4EF93DDFBCC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_402CA47934CBE31E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_402CA47934CBE31E_OFFSET))(a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
