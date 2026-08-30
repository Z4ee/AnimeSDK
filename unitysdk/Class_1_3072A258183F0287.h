#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_654;
class Class_0_16E4307DCC419505_95;
class Class_1_1DFA6DC6E14150AA;
class Class_1_8CA784D26D9A6CF7;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_1_F0F5FC8CD22F7E83;
class Class_2_B40829637678745E;
namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class Delegate; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3072A258183F0287_METHOD_1_00FAF39B8860AEC9_OFFSET UNITYSDK_OFFSET(0xD810F90)
#define CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET UNITYSDK_OFFSET(0xD817160)
#define CLASS_1_3072A258183F0287_METHOD_1_0AE2338656C4EFD5_OFFSET UNITYSDK_OFFSET(0xD810E20)
#define CLASS_1_3072A258183F0287_METHOD_1_10D9166930DB86B8_OFFSET UNITYSDK_OFFSET(0xD811390)
#define CLASS_1_3072A258183F0287_METHOD_1_1265F32FB8B94F16_OFFSET UNITYSDK_OFFSET(0xD814810)
#define CLASS_1_3072A258183F0287_METHOD_1_149C89FBC628BF60_OFFSET UNITYSDK_OFFSET(0xD818D00)
#define CLASS_1_3072A258183F0287_METHOD_1_193C54B138A5E059_OFFSET UNITYSDK_OFFSET(0xD813780)
#define CLASS_1_3072A258183F0287_METHOD_1_254BF2AF33315693_OFFSET UNITYSDK_OFFSET(0xD811A30)
#define CLASS_1_3072A258183F0287_METHOD_1_2FB6F3AB0AE91AC4_OFFSET UNITYSDK_OFFSET(0xD8159B0)
#define CLASS_1_3072A258183F0287_METHOD_1_2FF85733DB45EE9C_OFFSET UNITYSDK_OFFSET(0xD811F40)
#define CLASS_1_3072A258183F0287_METHOD_1_47206055AE80377C_OFFSET UNITYSDK_OFFSET(0xD8154C0)
#define CLASS_1_3072A258183F0287_METHOD_1_4C2E45F5AA97A769_OFFSET UNITYSDK_OFFSET(0xD812890)
#define CLASS_1_3072A258183F0287_METHOD_1_4CF29665FA98099E_OFFSET UNITYSDK_OFFSET(0xD814890)
#define CLASS_1_3072A258183F0287_METHOD_1_4D0D34FBE2609CDC_OFFSET UNITYSDK_OFFSET(0xD812EF0)
#define CLASS_1_3072A258183F0287_METHOD_1_5017D5DADD4F39FA_OFFSET UNITYSDK_OFFSET(0xD817AB0)
#define CLASS_1_3072A258183F0287_METHOD_1_52CA26AEBE83624F_OFFSET UNITYSDK_OFFSET(0xD812C40)
#define CLASS_1_3072A258183F0287_METHOD_1_5549BB0FCF330F1A_OFFSET UNITYSDK_OFFSET(0xD8112D0)
#define CLASS_1_3072A258183F0287_METHOD_1_5BF88BB1C2CFAEF9_OFFSET UNITYSDK_OFFSET(0xD815D50)
#define CLASS_1_3072A258183F0287_METHOD_1_5F925BAEA7417051_1_OFFSET UNITYSDK_OFFSET(0xD8104E0)
#define CLASS_1_3072A258183F0287_METHOD_1_5F925BAEA7417051_OFFSET UNITYSDK_OFFSET(0xD8102E0)
#define CLASS_1_3072A258183F0287_METHOD_1_7035C195D8B09314_OFFSET UNITYSDK_OFFSET(0xD811200)
#define CLASS_1_3072A258183F0287_METHOD_1_732BA0E06BCA76AB_OFFSET UNITYSDK_OFFSET(0xD814DF0)
#define CLASS_1_3072A258183F0287_METHOD_1_7922056E0D7FCF29_OFFSET UNITYSDK_OFFSET(0xD816D10)
#define CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET UNITYSDK_OFFSET(0xD8181D0)
#define CLASS_1_3072A258183F0287_METHOD_1_8A67A00A3608F550_OFFSET UNITYSDK_OFFSET(0xD8160A0)
#define CLASS_1_3072A258183F0287_METHOD_1_91E34657B0FFBB8B_OFFSET UNITYSDK_OFFSET(0xD8107C0)
#define CLASS_1_3072A258183F0287_METHOD_1_9598869556360D08_OFFSET UNITYSDK_OFFSET(0xD814930)
#define CLASS_1_3072A258183F0287_METHOD_1_966A5D7DEF1F66DD_OFFSET UNITYSDK_OFFSET(0xD8106C0)
#define CLASS_1_3072A258183F0287_METHOD_1_96BC531159A585D0_OFFSET UNITYSDK_OFFSET(0xD811010)
#define CLASS_1_3072A258183F0287_METHOD_1_9B29C50EFF6BC29A_OFFSET UNITYSDK_OFFSET(0xD810180)
#define CLASS_1_3072A258183F0287_METHOD_1_9C89E670A8DEFF07_OFFSET UNITYSDK_OFFSET(0xD815DB0)
#define CLASS_1_3072A258183F0287_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0xD815EC0)
#define CLASS_1_3072A258183F0287_METHOD_1_9E4C3C42544A7E1F_OFFSET UNITYSDK_OFFSET(0xD816F30)
#define CLASS_1_3072A258183F0287_METHOD_1_A2360139D48C2D12_OFFSET UNITYSDK_OFFSET(0xD8122B0)
#define CLASS_1_3072A258183F0287_METHOD_1_A6B1CFCCE6E12D78_OFFSET UNITYSDK_OFFSET(0xD814980)
#define CLASS_1_3072A258183F0287_METHOD_1_A7D4DA76B6287E84_OFFSET UNITYSDK_OFFSET(0xD813D90)
#define CLASS_1_3072A258183F0287_METHOD_1_AC4622247F0C1898_OFFSET UNITYSDK_OFFSET(0xD812B60)
#define CLASS_1_3072A258183F0287_METHOD_1_B8BBFD66DE045CC5_OFFSET UNITYSDK_OFFSET(0xD811C10)
#define CLASS_1_3072A258183F0287_METHOD_1_BA6186AA0E58A6CA_OFFSET UNITYSDK_OFFSET(0xD811D70)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_1_OFFSET UNITYSDK_OFFSET(0xD811170)
#define CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_OFFSET UNITYSDK_OFFSET(0xD8110E0)
#define CLASS_1_3072A258183F0287_METHOD_1_CB4D70C56AF91AE3_OFFSET UNITYSDK_OFFSET(0xD810DA0)
#define CLASS_1_3072A258183F0287_METHOD_1_CE3B1527D8C9EEFB_OFFSET UNITYSDK_OFFSET(0xD8148E0)
#define CLASS_1_3072A258183F0287_METHOD_1_D3784BC917190D4D_OFFSET UNITYSDK_OFFSET(0xD819130)
#define CLASS_1_3072A258183F0287_METHOD_1_D90AAB638A74122B_OFFSET UNITYSDK_OFFSET(0xD8123D0)
#define CLASS_1_3072A258183F0287_METHOD_1_D916C04F1B6100C5_OFFSET UNITYSDK_OFFSET(0xD8142A0)
#define CLASS_1_3072A258183F0287_METHOD_1_DE1E65A7A4493F33_OFFSET UNITYSDK_OFFSET(0xD8141F0)
#define CLASS_1_3072A258183F0287_METHOD_1_E61BE4C2AF5D883A_OFFSET UNITYSDK_OFFSET(0xD8108A0)
#define CLASS_1_3072A258183F0287_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD812A20)
#define CLASS_1_3072A258183F0287_METHOD_1_E9DEFE0E6A5CFF65_OFFSET UNITYSDK_OFFSET(0xD818D90)
#define CLASS_1_3072A258183F0287_METHOD_1_EB27150B90E3BDEA_OFFSET UNITYSDK_OFFSET(0xD814060)
#define CLASS_1_3072A258183F0287_METHOD_1_EC9EDFB5A694DAAB_OFFSET UNITYSDK_OFFSET(0xD814150)
#define CLASS_1_3072A258183F0287_METHOD_1_F463BCEC17C4D201_OFFSET UNITYSDK_OFFSET(0xD819280)
#define CLASS_1_3072A258183F0287_METHOD_1_F93C49F632C7AC8A_OFFSET UNITYSDK_OFFSET(0xD814B80)
#define CLASS_1_3072A258183F0287_METHOD_1_F992E062D20279EA_OFFSET UNITYSDK_OFFSET(0xD8114D0)
#define CLASS_1_3072A258183F0287_METHOD_1_F995FFE84883602F_OFFSET UNITYSDK_OFFSET(0xD815E50)
#define CLASS_1_3072A258183F0287_METHOD_1_F9E0FCA21EFFCA7D_OFFSET UNITYSDK_OFFSET(0xD811760)

inline static constexpr unsigned int Class_1_3072A258183F0287_TypeDefinitionIndex = 59780;

class Class_1_3072A258183F0287 : public ::System::Object
{
public:
	static ::System::String** StaticGet_ALBGDMKLMDO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x65B20);
	}
	static ::System::String** StaticGet_OMEODGBOEAA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3072A258183F0287_TypeDefinitionIndex)->GetStaticField(0x65B28);
	}

	static ::System::String* Method_1_9B29C50EFF6BC29A(::System::Int64 a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9B29C50EFF6BC29A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_5F925BAEA7417051(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2, ::Class_1_945ACFB1FEBC7A2C_25* a3, ::Class_1_1DFA6DC6E14150AA* a4)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5F925BAEA7417051_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_5F925BAEA7417051_1(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2, ::Class_1_945ACFB1FEBC7A2C_25* a3, ::Class_1_1DFA6DC6E14150AA* a4)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5F925BAEA7417051_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_966A5D7DEF1F66DD(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_966A5D7DEF1F66DD_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_91E34657B0FFBB8B(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_91E34657B0FFBB8B_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E61BE4C2AF5D883A(::System::String* a1, ::Class_0_16E4307DCC419505_652* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Class_0_16E4307DCC419505_652*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E61BE4C2AF5D883A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CB4D70C56AF91AE3(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_CB4D70C56AF91AE3_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_00FAF39B8860AEC9(::System::String* a1, ::System::String* a2, ::Class_1_945ACFB1FEBC7A2C_25* a3, ::Class_1_1DFA6DC6E14150AA* a4)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_00FAF39B8860AEC9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_0AE2338656C4EFD5(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Class_1_945ACFB1FEBC7A2C_25* a4, ::Class_1_1DFA6DC6E14150AA* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_0AE2338656C4EFD5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_96BC531159A585D0(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_96BC531159A585D0_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_BF603ACE1493B2A4(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_BF603ACE1493B2A4_1(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_BF603ACE1493B2A4_1_OFFSET))(a1, a2);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_7035C195D8B09314(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_7035C195D8B09314_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_5549BB0FCF330F1A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5549BB0FCF330F1A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_10D9166930DB86B8(::System::String* a1, ::System::String* a2, ::Class_1_945ACFB1FEBC7A2C_25* a3, ::Class_1_1DFA6DC6E14150AA* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_10D9166930DB86B8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_1_1DFA6DC6E14150AA* Method_1_F992E062D20279EA(::Class_1_1DFA6DC6E14150AA* a1, ::Class_1_F0F5FC8CD22F7E83* a2)
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::Class_1_1DFA6DC6E14150AA*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F992E062D20279EA_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_D90AAB638A74122B(::Class_0_16E4307DCC419505_95* a1, ::System::String* a2, ::System::String* a3, ::RPG::Client::ByteHash16 a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_95*, ::System::String*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_D90AAB638A74122B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_4C2E45F5AA97A769(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IReadOnlyCollection_1<::System::String*>* a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IReadOnlyCollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_4C2E45F5AA97A769_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E7EF6BC52B28648C_OFFSET))();
	}

	static ::System::Void Method_1_AC4622247F0C1898(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_AC4622247F0C1898_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4D0D34FBE2609CDC(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Class_1_F0F5FC8CD22F7E83* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_4D0D34FBE2609CDC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_A7D4DA76B6287E84(::System::String* a1, ::Class_1_945ACFB1FEBC7A2C_25* a2, ::Class_1_1DFA6DC6E14150AA* a3)
	{
		return ((::System::String*(*)(::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_A7D4DA76B6287E84_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_EB27150B90E3BDEA(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_EB27150B90E3BDEA_OFFSET))(a1);
	}

	static ::System::String* Method_1_254BF2AF33315693(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_254BF2AF33315693_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_EC9EDFB5A694DAAB(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_EC9EDFB5A694DAAB_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_DE1E65A7A4493F33(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_DE1E65A7A4493F33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D916C04F1B6100C5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_D916C04F1B6100C5_OFFSET))(a1);
	}

	static ::System::String* Method_1_1265F32FB8B94F16(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_1265F32FB8B94F16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CF29665FA98099E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_4CF29665FA98099E_OFFSET))(a1);
	}

	static ::System::Void Method_1_CE3B1527D8C9EEFB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_CE3B1527D8C9EEFB_OFFSET))(a1);
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

	static ::System::Void Method_1_732BA0E06BCA76AB(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_732BA0E06BCA76AB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_47206055AE80377C(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_47206055AE80377C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_193C54B138A5E059(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_193C54B138A5E059_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2FB6F3AB0AE91AC4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_2FB6F3AB0AE91AC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BF88BB1C2CFAEF9(::Class_2_B40829637678745E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_2_B40829637678745E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5BF88BB1C2CFAEF9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9C89E670A8DEFF07(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9C89E670A8DEFF07_OFFSET))(a1);
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

	static ::System::Void Method_1_2FF85733DB45EE9C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_2FF85733DB45EE9C_OFFSET))(a1);
	}

	static ::System::String* Method_1_7922056E0D7FCF29(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_7922056E0D7FCF29_OFFSET))(a1);
	}

	static ::System::String* Method_1_9E4C3C42544A7E1F(::System::Delegate* a1)
	{
		return ((::System::String*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_9E4C3C42544A7E1F_OFFSET))(a1);
	}

	static ::System::Void Method_1_08AD5E1653E80A46(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_654* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_654*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_08AD5E1653E80A46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8289BB7A14BDB6AB(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_654* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_654*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_8289BB7A14BDB6AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5017D5DADD4F39FA(::RPG::Client::BundleArchiveFileJsonItem* a1, ::Class_1_8CA784D26D9A6CF7* a2, ::Class_0_16E4307DCC419505_650* a3)
	{
		return ((::System::Void(*)(::RPG::Client::BundleArchiveFileJsonItem*, ::Class_1_8CA784D26D9A6CF7*, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_5017D5DADD4F39FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_149C89FBC628BF60(::System::String* a1, ::System::UInt32 a2, ::System::UInt64& a3, ::System::UInt64& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_149C89FBC628BF60_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_E9DEFE0E6A5CFF65(::System::String* a1, ::Class_0_16E4307DCC419505_95* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::Class_0_16E4307DCC419505_95*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_E9DEFE0E6A5CFF65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3784BC917190D4D(::System::Int64& a1, ::System::Int64& a2, ::System::String*& a3, ::System::Func_2<::System::String*, ::Class_0_16E4307DCC419505_95*>* a4, ::System::String* a5, ::System::String* a6, ::Class_1_945ACFB1FEBC7A2C_25* a7, ::Class_1_1DFA6DC6E14150AA* a8)
	{
		return ((::System::Void(*)(::System::Int64&, ::System::Int64&, ::System::String*&, ::System::Func_2<::System::String*, ::Class_0_16E4307DCC419505_95*>*, ::System::String*, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_25*, ::Class_1_1DFA6DC6E14150AA*))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_D3784BC917190D4D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::String* Method_1_F463BCEC17C4D201()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287_METHOD_1_F463BCEC17C4D201_OFFSET))();
	}
};
