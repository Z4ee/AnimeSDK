#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_482;
class Class_0_16E4307DCC419505_77;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_B6A8A062463EFFDD;
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

#define CLASS_1_3072A258183F0287_METHOD_1_00FAF39B8860AEC9_OFFSET UNITYSDK_OFFSET(0x87C4380)
#define CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET UNITYSDK_OFFSET(0x87C9ED0)
#define CLASS_1_3072A258183F0287_METHOD_1_0AE2338656C4EFD5_OFFSET UNITYSDK_OFFSET(0x87C4210)
#define CLASS_1_3072A258183F0287_METHOD_1_0F60C5D2E0B17EF2_OFFSET UNITYSDK_OFFSET(0x87C85D0)
#define CLASS_1_3072A258183F0287_METHOD_1_10D9166930DB86B8_OFFSET UNITYSDK_OFFSET(0x87C4780)
#define CLASS_1_3072A258183F0287_METHOD_1_1265F32FB8B94F16_OFFSET UNITYSDK_OFFSET(0x87C7B30)
#define CLASS_1_3072A258183F0287_METHOD_1_149C89FBC628BF60_OFFSET UNITYSDK_OFFSET(0x87CB370)
#define CLASS_1_3072A258183F0287_METHOD_1_193C54B138A5E059_OFFSET UNITYSDK_OFFSET(0x87C6C00)
#define CLASS_1_3072A258183F0287_METHOD_1_1A503627688AE58E_OFFSET UNITYSDK_OFFSET(0x87C80E0)
#define CLASS_1_3072A258183F0287_METHOD_1_298FCC3D04D1F92C_OFFSET UNITYSDK_OFFSET(0x87C7C00)
#define CLASS_1_3072A258183F0287_METHOD_1_2FB6F3AB0AE91AC4_OFFSET UNITYSDK_OFFSET(0x87C8AE0)
#define CLASS_1_3072A258183F0287_METHOD_1_46D9AD109D648EE1_OFFSET UNITYSDK_OFFSET(0x87C61D0)
#define CLASS_1_3072A258183F0287_METHOD_1_4C2E45F5AA97A769_OFFSET UNITYSDK_OFFSET(0x87C5BA0)
#define CLASS_1_3072A258183F0287_METHOD_1_52CA26AEBE83624F_OFFSET UNITYSDK_OFFSET(0x87C5F40)
#define CLASS_1_3072A258183F0287_METHOD_1_5549BB0FCF330F1A_OFFSET UNITYSDK_OFFSET(0x87C46C0)
#define CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_1_OFFSET UNITYSDK_OFFSET(0x87C3AD0)
#define CLASS_1_3072A258183F0287_METHOD_1_5570C166CFA60486_OFFSET UNITYSDK_OFFSET(0x87C3940)
#define CLASS_1_3072A258183F0287_METHOD_1_7035C195D8B09314_OFFSET UNITYSDK_OFFSET(0x87C45F0)
#define CLASS_1_3072A258183F0287_METHOD_1_7922056E0D7FCF29_OFFSET UNITYSDK_OFFSET(0x87C9BC0)
#define CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET UNITYSDK_OFFSET(0x87CAB60)
#define CLASS_1_3072A258183F0287_METHOD_1_896E8AC9A159E5D7_OFFSET UNITYSDK_OFFSET(0x87C7750)
#define CLASS_1_3072A258183F0287_METHOD_1_8A67A00A3608F550_OFFSET UNITYSDK_OFFSET(0x87C9080)
#define CLASS_1_3072A258183F0287_METHOD_1_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x87C7BB0)
#define CLASS_1_3072A258183F0287_METHOD_1_8F2CC7B267F9FBDD_OFFSET UNITYSDK_OFFSET(0x87CA580)
#define CLASS_1_3072A258183F0287_METHOD_1_91E34657B0FFBB8B_OFFSET UNITYSDK_OFFSET(0x87C3D40)
#define CLASS_1_3072A258183F0287_METHOD_1_9598869556360D08_OFFSET UNITYSDK_OFFSET(0x87C7C50)
#define CLASS_1_3072A258183F0287_METHOD_1_966A5D7DEF1F66DD_OFFSET UNITYSDK_OFFSET(0x87C3C40)
#define CLASS_1_3072A258183F0287_METHOD_1_96BC531159A585D0_OFFSET UNITYSDK_OFFSET(0x87C4400)
#define CLASS_1_3072A258183F0287_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x87C8EA0)
#define CLASS_1_3072A258183F0287_METHOD_1_A2360139D48C2D12_OFFSET UNITYSDK_OFFSET(0x87C5680)
#define CLASS_1_3072A258183F0287_METHOD_1_A51A78E4ED6A4266_OFFSET UNITYSDK_OFFSET(0x87C3E20)
#define CLASS_1_3072A258183F0287_METHOD_1_A6B1CFCCE6E12D78_OFFSET UNITYSDK_OFFSET(0x87C7CA0)
#define CLASS_1_3072A258183F0287_METHOD_1_A7D4DA76B6287E84_OFFSET UNITYSDK_OFFSET(0x87C7240)
#define CLASS_1_3072A258183F0287_METHOD_1_AC4622247F0C1898_OFFSET UNITYSDK_OFFSET(0x87C5E60)
#define CLASS_1_3072A258183F0287_METHOD_1_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x87C5340)
#define CLASS_1_3072A258183F0287_METHOD_1_B8BBFD66DE045CC5_OFFSET UNITYSDK_OFFSET(0x87C5010)
#define CLASS_1_3072A258183F0287_METHOD_1_BA6186AA0E58A6CA_OFFSET UNITYSDK_OFFSET(0x87C5170)
#define CLASS_1_3072A258183F0287_METHOD_1_BEB6FE631AB29131_OFFSET UNITYSDK_OFFSET(0x87C3800)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_1_OFFSET UNITYSDK_OFFSET(0x87C4560)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_OFFSET UNITYSDK_OFFSET(0x87C44D0)
#define CLASS_1_3072A258183F0287_METHOD_1_BFA0DA4AAE397594_OFFSET UNITYSDK_OFFSET(0x87C9DE0)
#define CLASS_1_3072A258183F0287_METHOD_1_CA9CAC71BCED30D8_OFFSET UNITYSDK_OFFSET(0x87CB7C0)
#define CLASS_1_3072A258183F0287_METHOD_1_CB4D70C56AF91AE3_OFFSET UNITYSDK_OFFSET(0x87C4190)
#define CLASS_1_3072A258183F0287_METHOD_1_D3784BC917190D4D_OFFSET UNITYSDK_OFFSET(0x87CB670)
#define CLASS_1_3072A258183F0287_METHOD_1_D90AAB638A74122B_OFFSET UNITYSDK_OFFSET(0x87C57A0)
#define CLASS_1_3072A258183F0287_METHOD_1_DBD0FFCCDD4454DC_OFFSET UNITYSDK_OFFSET(0x87C4E20)
#define CLASS_1_3072A258183F0287_METHOD_1_DE1E65A7A4493F33_OFFSET UNITYSDK_OFFSET(0x87C76A0)
#define CLASS_1_3072A258183F0287_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x87C5D20)
#define CLASS_1_3072A258183F0287_METHOD_1_E9DEFE0E6A5CFF65_OFFSET UNITYSDK_OFFSET(0x87CB400)
#define CLASS_1_3072A258183F0287_METHOD_1_EB27150B90E3BDEA_OFFSET UNITYSDK_OFFSET(0x87C7510)
#define CLASS_1_3072A258183F0287_METHOD_1_EC9EDFB5A694DAAB_OFFSET UNITYSDK_OFFSET(0x87C7600)
#define CLASS_1_3072A258183F0287_METHOD_1_F93C49F632C7AC8A_OFFSET UNITYSDK_OFFSET(0x87C7E70)
#define CLASS_1_3072A258183F0287_METHOD_1_F992E062D20279EA_OFFSET UNITYSDK_OFFSET(0x87C48C0)
#define CLASS_1_3072A258183F0287_METHOD_1_F995FFE84883602F_OFFSET UNITYSDK_OFFSET(0x87C8E30)
#define CLASS_1_3072A258183F0287_METHOD_1_F9E0FCA21EFFCA7D_OFFSET UNITYSDK_OFFSET(0x87C4B50)

inline static constexpr unsigned int Class_1_3072A258183F0287_TypeDefinitionIndex = 48276;

class Class_1_3072A258183F0287 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x35760);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x35768);
	}

	static ::System::String* Method_1_BEB6FE631AB29131(::System::Int64 a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BEB6FE631AB29131_OFFSET))(a1, a2);
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

	static ::System::String* Method_1_A51A78E4ED6A4266(::System::String* a1, ::Class_0_16E4307DCC419505_480* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A51A78E4ED6A4266_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8C7A0EBC62BF4B6D_OFFSET))(a1);
	}

	static ::System::Void Method_1_298FCC3D04D1F92C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_298FCC3D04D1F92C_OFFSET))(a1);
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

	static ::System::Void Method_1_1A503627688AE58E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_1A503627688AE58E_OFFSET))(a1, a2, a3);
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

	static ::System::Void Method_1_08AD5E1653E80A46(::Class_0_16E4307DCC419505_478* a1, ::Class_0_16E4307DCC419505_482* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8289BB7A14BDB6AB(::Class_0_16E4307DCC419505_478* a1, ::Class_0_16E4307DCC419505_482* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_482*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8F2CC7B267F9FBDD(::RPG::Client::BundleArchiveFileJsonItem* a1, ::Class_1_B6A8A062463EFFDD* a2, ::Class_0_16E4307DCC419505_478* a3)
	{
		return ((::System::Void(*)(::RPG::Client::BundleArchiveFileJsonItem*, ::Class_1_B6A8A062463EFFDD*, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8F2CC7B267F9FBDD_OFFSET))(a1, a2, a3);
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
