#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_0_16E4307DCC419505_561;
class Class_0_16E4307DCC419505_77;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_8C3AC9786B6764EF;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class Delegate; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3072A258183F0287_METHOD_1_00FAF39B8860AEC9_OFFSET UNITYSDK_OFFSET(0x11AC4320)
#define CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET UNITYSDK_OFFSET(0x11AC9EA0)
#define CLASS_1_3072A258183F0287_METHOD_1_0AE2338656C4EFD5_OFFSET UNITYSDK_OFFSET(0x11AC41B0)
#define CLASS_1_3072A258183F0287_METHOD_1_0F60C5D2E0B17EF2_OFFSET UNITYSDK_OFFSET(0x11AC85A0)
#define CLASS_1_3072A258183F0287_METHOD_1_10D9166930DB86B8_OFFSET UNITYSDK_OFFSET(0x11AC4720)
#define CLASS_1_3072A258183F0287_METHOD_1_1265F32FB8B94F16_OFFSET UNITYSDK_OFFSET(0x11AC7AD0)
#define CLASS_1_3072A258183F0287_METHOD_1_149C89FBC628BF60_OFFSET UNITYSDK_OFFSET(0x11ACB3B0)
#define CLASS_1_3072A258183F0287_METHOD_1_193C54B138A5E059_OFFSET UNITYSDK_OFFSET(0x11AC6BA0)
#define CLASS_1_3072A258183F0287_METHOD_1_2FB6F3AB0AE91AC4_OFFSET UNITYSDK_OFFSET(0x11AC8AB0)
#define CLASS_1_3072A258183F0287_METHOD_1_46D9AD109D648EE1_OFFSET UNITYSDK_OFFSET(0x11AC6170)
#define CLASS_1_3072A258183F0287_METHOD_1_4C2E45F5AA97A769_OFFSET UNITYSDK_OFFSET(0x11AC5B40)
#define CLASS_1_3072A258183F0287_METHOD_1_52CA26AEBE83624F_OFFSET UNITYSDK_OFFSET(0x11AC5EE0)
#define CLASS_1_3072A258183F0287_METHOD_1_5549BB0FCF330F1A_OFFSET UNITYSDK_OFFSET(0x11AC4660)
#define CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_1_OFFSET UNITYSDK_OFFSET(0x11AC3A70)
#define CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_OFFSET UNITYSDK_OFFSET(0x11AC38E0)
#define CLASS_1_3072A258183F0287_METHOD_1_7035C195D8B09314_OFFSET UNITYSDK_OFFSET(0x11AC4590)
#define CLASS_1_3072A258183F0287_METHOD_1_7922056E0D7FCF29_OFFSET UNITYSDK_OFFSET(0x11AC9B90)
#define CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET UNITYSDK_OFFSET(0x11ACABA0)
#define CLASS_1_3072A258183F0287_METHOD_1_882BDA6ED74EB04E_OFFSET UNITYSDK_OFFSET(0x11AC7BA0)
#define CLASS_1_3072A258183F0287_METHOD_1_896E8AC9A159E5D7_OFFSET UNITYSDK_OFFSET(0x11AC76F0)
#define CLASS_1_3072A258183F0287_METHOD_1_8A67A00A3608F550_OFFSET UNITYSDK_OFFSET(0x11AC9050)
#define CLASS_1_3072A258183F0287_METHOD_1_8AAA0E173CFADEE4_OFFSET UNITYSDK_OFFSET(0x11AC7B50)
#define CLASS_1_3072A258183F0287_METHOD_1_8F2CC7B267F9FBDD_OFFSET UNITYSDK_OFFSET(0x11ACA550)
#define CLASS_1_3072A258183F0287_METHOD_1_91E34657B0FFBB8B_OFFSET UNITYSDK_OFFSET(0x11AC3CE0)
#define CLASS_1_3072A258183F0287_METHOD_1_9598869556360D08_OFFSET UNITYSDK_OFFSET(0x11AC7BF0)
#define CLASS_1_3072A258183F0287_METHOD_1_966A5D7DEF1F66DD_OFFSET UNITYSDK_OFFSET(0x11AC3BE0)
#define CLASS_1_3072A258183F0287_METHOD_1_96BC531159A585D0_OFFSET UNITYSDK_OFFSET(0x11AC43A0)
#define CLASS_1_3072A258183F0287_METHOD_1_9B29C50EFF6BC29A_OFFSET UNITYSDK_OFFSET(0x11AC3780)
#define CLASS_1_3072A258183F0287_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x11AC8E70)
#define CLASS_1_3072A258183F0287_METHOD_1_A2360139D48C2D12_OFFSET UNITYSDK_OFFSET(0x11AC5620)
#define CLASS_1_3072A258183F0287_METHOD_1_A51A78E4ED6A4266_OFFSET UNITYSDK_OFFSET(0x11AC3DC0)
#define CLASS_1_3072A258183F0287_METHOD_1_A6B1CFCCE6E12D78_OFFSET UNITYSDK_OFFSET(0x11AC7C40)
#define CLASS_1_3072A258183F0287_METHOD_1_A7D4DA76B6287E84_OFFSET UNITYSDK_OFFSET(0x11AC71E0)
#define CLASS_1_3072A258183F0287_METHOD_1_AC4622247F0C1898_OFFSET UNITYSDK_OFFSET(0x11AC5E00)
#define CLASS_1_3072A258183F0287_METHOD_1_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x11AC52E0)
#define CLASS_1_3072A258183F0287_METHOD_1_B8BBFD66DE045CC5_OFFSET UNITYSDK_OFFSET(0x11AC4FB0)
#define CLASS_1_3072A258183F0287_METHOD_1_BA6186AA0E58A6CA_OFFSET UNITYSDK_OFFSET(0x11AC5110)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_1_OFFSET UNITYSDK_OFFSET(0x11AC4500)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_OFFSET UNITYSDK_OFFSET(0x11AC4470)
#define CLASS_1_3072A258183F0287_METHOD_1_BFA0DA4AAE397594_OFFSET UNITYSDK_OFFSET(0x11AC9DB0)
#define CLASS_1_3072A258183F0287_METHOD_1_CA9CAC71BCED30D8_OFFSET UNITYSDK_OFFSET(0x11ACB800)
#define CLASS_1_3072A258183F0287_METHOD_1_CB4D70C56AF91AE3_OFFSET UNITYSDK_OFFSET(0x11AC4130)
#define CLASS_1_3072A258183F0287_METHOD_1_D3784BC917190D4D_OFFSET UNITYSDK_OFFSET(0x11ACB6B0)
#define CLASS_1_3072A258183F0287_METHOD_1_D90AAB638A74122B_OFFSET UNITYSDK_OFFSET(0x11AC5740)
#define CLASS_1_3072A258183F0287_METHOD_1_DBD0FFCCDD4454DC_OFFSET UNITYSDK_OFFSET(0x11AC4DC0)
#define CLASS_1_3072A258183F0287_METHOD_1_DE1E65A7A4493F33_OFFSET UNITYSDK_OFFSET(0x11AC7640)
#define CLASS_1_3072A258183F0287_METHOD_1_E0A51EE46ACF1DFD_OFFSET UNITYSDK_OFFSET(0x11AC8080)
#define CLASS_1_3072A258183F0287_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11AC5CC0)
#define CLASS_1_3072A258183F0287_METHOD_1_E9DEFE0E6A5CFF65_OFFSET UNITYSDK_OFFSET(0x11ACB440)
#define CLASS_1_3072A258183F0287_METHOD_1_EB27150B90E3BDEA_OFFSET UNITYSDK_OFFSET(0x11AC74B0)
#define CLASS_1_3072A258183F0287_METHOD_1_EC9EDFB5A694DAAB_OFFSET UNITYSDK_OFFSET(0x11AC75A0)
#define CLASS_1_3072A258183F0287_METHOD_1_F93C49F632C7AC8A_OFFSET UNITYSDK_OFFSET(0x11AC7E10)
#define CLASS_1_3072A258183F0287_METHOD_1_F992E062D20279EA_OFFSET UNITYSDK_OFFSET(0x11AC4860)
#define CLASS_1_3072A258183F0287_METHOD_1_F995FFE84883602F_OFFSET UNITYSDK_OFFSET(0x11AC8E00)
#define CLASS_1_3072A258183F0287_METHOD_1_F9E0FCA21EFFCA7D_OFFSET UNITYSDK_OFFSET(0x11AC4AF0)

inline static constexpr unsigned int Class_1_3072A258183F0287_TypeDefinitionIndex = 55021;

class Class_1_3072A258183F0287 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x442A0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x442A8);
	}

	static ::System::String* Method_1_9B29C50EFF6BC29A(::System::Int64 a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9B29C50EFF6BC29A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_5570C166CFA60486(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2, ::Class_1_51C874EE455D4F2F_1* a3, ::Class_1_51C874EE455D4F2F* a4)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_5570C166CFA60486_1(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2, ::Class_1_51C874EE455D4F2F_1* a3, ::Class_1_51C874EE455D4F2F* a4)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_966A5D7DEF1F66DD(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_966A5D7DEF1F66DD_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_91E34657B0FFBB8B(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_91E34657B0FFBB8B_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_A51A78E4ED6A4266(::System::String* a1, ::Class_0_16E4307DCC419505_559* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Class_0_16E4307DCC419505_559*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A51A78E4ED6A4266_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CB4D70C56AF91AE3(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_CB4D70C56AF91AE3_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_00FAF39B8860AEC9(::System::String* a1, ::System::String* a2, ::Class_1_51C874EE455D4F2F_1* a3, ::Class_1_51C874EE455D4F2F* a4)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_00FAF39B8860AEC9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_0AE2338656C4EFD5(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Class_1_51C874EE455D4F2F_1* a4, ::Class_1_51C874EE455D4F2F* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_0AE2338656C4EFD5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_96BC531159A585D0(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_96BC531159A585D0_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_BF603ACE1493B2A4(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_BF603ACE1493B2A4_1(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_1_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_7035C195D8B09314(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_7035C195D8B09314_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_5549BB0FCF330F1A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5549BB0FCF330F1A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_10D9166930DB86B8(::System::String* a1, ::System::String* a2, ::Class_1_51C874EE455D4F2F_1* a3, ::Class_1_51C874EE455D4F2F* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_10D9166930DB86B8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_1_51C874EE455D4F2F* Method_1_F992E062D20279EA(::Class_1_51C874EE455D4F2F* a1, ::Class_1_F0F5FC8CD22F7E83* a2)
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::Class_1_51C874EE455D4F2F*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F992E062D20279EA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F9E0FCA21EFFCA7D(::System::String* a1, ::System::String* a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F9E0FCA21EFFCA7D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B8BBFD66DE045CC5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_B8BBFD66DE045CC5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BA6186AA0E58A6CA(::System::String* a1, ::System::String* a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BA6186AA0E58A6CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A2360139D48C2D12(::System::String* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Int64 a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::UInt64, ::System::UInt64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A2360139D48C2D12_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D90AAB638A74122B(::Class_0_16E4307DCC419505_77* a1, ::System::String* a2, ::System::String* a3, ::RPG::Client::ByteHash16 a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_77*, ::System::String*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_D90AAB638A74122B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_4C2E45F5AA97A769(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IReadOnlyCollection_1<::System::String*>* a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IReadOnlyCollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_4C2E45F5AA97A769_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E7EF6BC52B28648C_OFFSET))();
	}

	static ::System::Void Method_1_AC4622247F0C1898(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_AC4622247F0C1898_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_46D9AD109D648EE1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Class_1_F0F5FC8CD22F7E83* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_46D9AD109D648EE1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_A7D4DA76B6287E84(::System::String* a1, ::Class_1_51C874EE455D4F2F_1* a2, ::Class_1_51C874EE455D4F2F* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A7D4DA76B6287E84_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_EB27150B90E3BDEA(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_EB27150B90E3BDEA_OFFSET))(a1);
	}

	static ::System::String* Method_1_DBD0FFCCDD4454DC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_DBD0FFCCDD4454DC_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_EC9EDFB5A694DAAB(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_EC9EDFB5A694DAAB_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_DE1E65A7A4493F33(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_DE1E65A7A4493F33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_896E8AC9A159E5D7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_896E8AC9A159E5D7_OFFSET))(a1);
	}

	static ::System::String* Method_1_1265F32FB8B94F16(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_1265F32FB8B94F16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8AAA0E173CFADEE4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8AAA0E173CFADEE4_OFFSET))(a1);
	}

	static ::System::Void Method_1_882BDA6ED74EB04E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_882BDA6ED74EB04E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9598869556360D08(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9598869556360D08_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_52CA26AEBE83624F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_52CA26AEBE83624F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A6B1CFCCE6E12D78(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A6B1CFCCE6E12D78_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F93C49F632C7AC8A(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F93C49F632C7AC8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0A51EE46ACF1DFD(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E0A51EE46ACF1DFD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0F60C5D2E0B17EF2(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_0F60C5D2E0B17EF2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_193C54B138A5E059(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_193C54B138A5E059_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2FB6F3AB0AE91AC4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_2FB6F3AB0AE91AC4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F995FFE84883602F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F995FFE84883602F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9DD2DCFED0B1F6F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9DD2DCFED0B1F6F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A67A00A3608F550(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8A67A00A3608F550_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_B0C43CECDD765C65_OFFSET))(a1);
	}

	static ::System::String* Method_1_7922056E0D7FCF29(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_7922056E0D7FCF29_OFFSET))(a1);
	}

	static ::System::String* Method_1_BFA0DA4AAE397594(::System::Delegate* a1)
	{
		return ((::System::String*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BFA0DA4AAE397594_OFFSET))(a1);
	}

	static ::System::Void Method_1_08AD5E1653E80A46(::Class_0_16E4307DCC419505_557* a1, ::Class_0_16E4307DCC419505_561* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_561*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8289BB7A14BDB6AB(::Class_0_16E4307DCC419505_557* a1, ::Class_0_16E4307DCC419505_561* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_561*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8F2CC7B267F9FBDD(::RPG::Client::BundleArchiveFileJsonItem* a1, ::Class_1_8C3AC9786B6764EF* a2, ::Class_0_16E4307DCC419505_557* a3)
	{
		return ((::System::Void(*)(::RPG::Client::BundleArchiveFileJsonItem*, ::Class_1_8C3AC9786B6764EF*, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8F2CC7B267F9FBDD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_149C89FBC628BF60(::System::String* a1, ::System::UInt32 a2, ::System::UInt64& a3, ::System::UInt64& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_149C89FBC628BF60_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_E9DEFE0E6A5CFF65(::System::String* a1, ::Class_0_16E4307DCC419505_77* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::Class_0_16E4307DCC419505_77*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E9DEFE0E6A5CFF65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3784BC917190D4D(::System::Int64& a1, ::System::Int64& a2, ::System::String*& a3, ::System::Func_2<::System::String*, ::Class_0_16E4307DCC419505_77*>* a4, ::System::String* a5, ::System::String* a6, ::Class_1_51C874EE455D4F2F_1* a7, ::Class_1_51C874EE455D4F2F* a8)
	{
		return ((::System::Void(*)(::System::Int64&, ::System::Int64&, ::System::String*&, ::System::Func_2<::System::String*, ::Class_0_16E4307DCC419505_77*>*, ::System::String*, ::System::String*, ::Class_1_51C874EE455D4F2F_1*, ::Class_1_51C874EE455D4F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_D3784BC917190D4D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::String* Method_1_CA9CAC71BCED30D8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_CA9CAC71BCED30D8_OFFSET))();
	}
};
