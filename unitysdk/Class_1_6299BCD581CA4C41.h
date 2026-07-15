#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_95;
class Class_0_16E4307DCC419505_96;
class Class_1_1E6CA2B210971DAB;
class Class_1_211A5BA20F9E6E38;
class Class_1_52242588807D4112;
class Class_1_CB8B1EE6DC0D2B5B;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET UNITYSDK_OFFSET(0x185B4D10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_02A3DB6EF685AB68_OFFSET UNITYSDK_OFFSET(0x185BC1F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET UNITYSDK_OFFSET(0x185B2390)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET UNITYSDK_OFFSET(0x185B3C60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_1_OFFSET UNITYSDK_OFFSET(0x185B83B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_OFFSET UNITYSDK_OFFSET(0x185B80B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0FE222A5A6E891D2_OFFSET UNITYSDK_OFFSET(0x185B0C70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0x185B1FC0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_21CB656E854C5C60_OFFSET UNITYSDK_OFFSET(0x185BB580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0x185B8830)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0x185B86B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2DDD6838EA5BB297_OFFSET UNITYSDK_OFFSET(0x185B1310)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x185B0D50)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0x185B97D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_1_OFFSET UNITYSDK_OFFSET(0x185B7460)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_OFFSET UNITYSDK_OFFSET(0x185B63A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0x185B2D30)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3EB5633778EEE94C_OFFSET UNITYSDK_OFFSET(0x185B8C40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_42605FB5B6557587_OFFSET UNITYSDK_OFFSET(0x185B1140)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET UNITYSDK_OFFSET(0x185B3950)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_4BB817D9C82AC31E_OFFSET UNITYSDK_OFFSET(0x185B6650)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x185B7EC0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET UNITYSDK_OFFSET(0x185B4A70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5C330E987736192B_OFFSET UNITYSDK_OFFSET(0x185B5B60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET UNITYSDK_OFFSET(0x185BC560)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6ADEDD41C8D1A09E_OFFSET UNITYSDK_OFFSET(0x185B53A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0x185B94E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6ED3CDBBEB5D3F89_OFFSET UNITYSDK_OFFSET(0x185B0B90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_71DCA76EBC9A1D30_OFFSET UNITYSDK_OFFSET(0x185B15A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET UNITYSDK_OFFSET(0x185BC6F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8356C3DF46E46E58_OFFSET UNITYSDK_OFFSET(0x185B06C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9018704AD7878B76_OFFSET UNITYSDK_OFFSET(0x185B7810)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET UNITYSDK_OFFSET(0x185B3230)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_99325ADCED5AC122_OFFSET UNITYSDK_OFFSET(0x185B5E40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9E2B67D820E0AAB6_1_OFFSET UNITYSDK_OFFSET(0x185B1F60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9E2B67D820E0AAB6_OFFSET UNITYSDK_OFFSET(0x185B1F00)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0x185B0640)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_ACFE6D55671944C7_OFFSET UNITYSDK_OFFSET(0x185B8EF0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET UNITYSDK_OFFSET(0x185BBD40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B08C879C309DA691_OFFSET UNITYSDK_OFFSET(0x185B6030)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0x185B02F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0x185AFD90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET UNITYSDK_OFFSET(0x185B5440)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x185B9110)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x185B0E10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_BA5C55504E896D92_OFFSET UNITYSDK_OFFSET(0x185B40F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_C36DD7A14931FEA2_OFFSET UNITYSDK_OFFSET(0x185B89B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0x185B7720)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x185B0420)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2FFF6E2EB90010C_OFFSET UNITYSDK_OFFSET(0x185B8A20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET UNITYSDK_OFFSET(0x185B9CB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0x185B5310)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x185B1C10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0x185B1DF0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET UNITYSDK_OFFSET(0x185BB950)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E28059A48D6BFB33_OFFSET UNITYSDK_OFFSET(0x185AFF20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E7CA3FF0DE82570B_OFFSET UNITYSDK_OFFSET(0x185B20E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0x185B2820)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET UNITYSDK_OFFSET(0x185B70F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET UNITYSDK_OFFSET(0x185B7970)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x185AFEE0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0x185BABB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F70021D463B9DC19_OFFSET UNITYSDK_OFFSET(0x185B0110)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F7DCCD2DAFC0C686_OFFSET UNITYSDK_OFFSET(0x185B43F0)
#define CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET UNITYSDK_OFFSET(0x185BD0F0)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41_TypeDefinitionIndex = 56976;

class Class_1_6299BCD581CA4C41 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x40940);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x40948);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x40950);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x40958);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x40960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B3F94C095ACAE0B6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET))(a1);
	}

	static ::System::Void Method_1_E28059A48D6BFB33(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E28059A48D6BFB33_OFFSET))(a1);
	}

	static ::System::Void Method_1_F70021D463B9DC19(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_F70021D463B9DC19_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B3230B844F55FD00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET))();
	}

	static ::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_CD9F3CEFB366C27A_OFFSET))();
	}

	static ::System::Boolean Method_1_A53E39B066D9F108(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET))(a1);
	}

	static ::System::Void Method_1_8356C3DF46E46E58(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_8356C3DF46E46E58_OFFSET))(a1);
	}

	static ::System::Void Method_1_6ED3CDBBEB5D3F89(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6ED3CDBBEB5D3F89_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_0FE222A5A6E891D2()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0FE222A5A6E891D2_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_2DDD6838EA5BB297(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_2DDD6838EA5BB297_OFFSET))(a1);
	}

	static ::System::Void Method_1_71DCA76EBC9A1D30(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_71DCA76EBC9A1D30_OFFSET))(a1);
	}

	static ::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D9EF75A2D048B8A1_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E0B5F030178926C9()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET))();
	}

	static ::System::Void Method_1_9E2B67D820E0AAB6(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9E2B67D820E0AAB6_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E2B67D820E0AAB6_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9E2B67D820E0AAB6_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_1752A6C5315501DC(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_9232DFA7EDA62BD8(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F7DCCD2DAFC0C686(::Class_1_1E6CA2B210971DAB* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_1_1E6CA2B210971DAB*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_F7DCCD2DAFC0C686_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BA5C55504E896D92(::Class_1_1E6CA2B210971DAB* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_BA5C55504E896D92_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_CB8B1EE6DC0D2B5B*>* Method_1_58FA3EBB6B7ED514(::Class_1_52242588807D4112* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CB8B1EE6DC0D2B5B*>*(*)(::Class_1_52242588807D4112*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_00CAAD2C58A780C1(::System::Collections::Generic::IReadOnlyList_1<::Class_1_CB8B1EE6DC0D2B5B*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_1_CB8B1EE6DC0D2B5B*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6E9C8027C54BFC7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6ADEDD41C8D1A09E(::System::String* a1, ::Class_1_52242588807D4112* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_52242588807D4112*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6ADEDD41C8D1A09E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B8341974FD7C6543(::Class_1_52242588807D4112* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_52242588807D4112*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C330E987736192B(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_5C330E987736192B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_99325ADCED5AC122(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_99325ADCED5AC122_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_492B3CAEB882C200(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0898FF7F607087FA(::Class_0_16E4307DCC419505_95* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_95*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B08C879C309DA691(::Class_0_16E4307DCC419505_96* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_96*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B08C879C309DA691_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_38FF6E7ACD0247FC(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_38FF6E7ACD0247FC_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CC8AA229C980F42D()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET))();
	}

	static ::System::Boolean Method_1_9018704AD7878B76(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9018704AD7878B76_OFFSET))(a1);
	}

	static ::System::Void Method_1_42605FB5B6557587(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_42605FB5B6557587_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_568AE7A1499723FD_OFFSET))();
	}

	static ::System::Int64 Method_1_E95AE92E0F406667(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E95AE92E0F406667_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_3A9DAF7F101E5980(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_3A9DAF7F101E5980_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_4BB817D9C82AC31E(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_4BB817D9C82AC31E_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_EA2FAB4A1FE22F8B(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0A2F556DCCB6DB03(::Class_1_1E6CA2B210971DAB* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0A2F556DCCB6DB03_1(::Class_1_211A5BA20F9E6E38* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_211A5BA20F9E6E38*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515_1(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C36DD7A14931FEA2(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_C36DD7A14931FEA2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D2FFF6E2EB90010C(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D2FFF6E2EB90010C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3EB5633778EEE94C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_3EB5633778EEE94C_OFFSET))(a1);
	}

	static ::System::Void Method_1_ACFE6D55671944C7(::Class_1_1E6CA2B210971DAB* a1, ::Class_1_211A5BA20F9E6E38* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::Class_1_211A5BA20F9E6E38*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_ACFE6D55671944C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET))();
	}

	static ::System::Void Method_1_EFD189BCF595DA9C(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_1E6CA2B210971DAB* a2, ::Class_1_211A5BA20F9E6E38* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::Class_1_211A5BA20F9E6E38*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_6D3986FA20CF419D(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_1E6CA2B210971DAB* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_380699992F9CB7F3(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_211A5BA20F9E6E38* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_211A5BA20F9E6E38*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0898FF7F607087FA_1(::Class_0_16E4307DCC419505_95* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_95*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>* Method_1_21CB656E854C5C60(::Class_0_16E4307DCC419505_95* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>*(*)(::Class_0_16E4307DCC419505_95*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_21CB656E854C5C60_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_E7CA3FF0DE82570B(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E7CA3FF0DE82570B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_63ABA549BEAB770C(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8264C0EBBB2C977F(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_1E6CA2B210971DAB* a2, ::Class_1_211A5BA20F9E6E38* a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::Class_1_211A5BA20F9E6E38*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_02A3DB6EF685AB68(::Class_0_16E4307DCC419505_96* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_96*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_02A3DB6EF685AB68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1F17B1C85276758(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>* a3, ::System::Int64& a4)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D553EA241067CFD8(::System::IO::StreamWriter* a1, ::Class_1_1E6CA2B210971DAB* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_AEF59D0695F0734F(::System::String* a1, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_F684383D67CB4C47(::Class_1_1E6CA2B210971DAB* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Int64(*)(::Class_1_1E6CA2B210971DAB*, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_F684383D67CB4C47_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_F0E307B84478A272_OFFSET))();
	}
};
