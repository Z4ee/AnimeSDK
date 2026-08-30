#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_95;
class Class_0_16E4307DCC419505_96;
class Class_1_1E6CA2B210971DAB;
class Class_1_24B84A23937930DB;
class Class_1_29BD82FBCCD39695;
class Class_1_3833970CC4FA195E;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET UNITYSDK_OFFSET(0xB7DC580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_02A3DB6EF685AB68_OFFSET UNITYSDK_OFFSET(0xB7E37F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET UNITYSDK_OFFSET(0xB7D9B80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET UNITYSDK_OFFSET(0xB7DB4A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0CCBC54B8A78F499_OFFSET UNITYSDK_OFFSET(0xB7D8A10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0xB7D9780)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_21CB656E854C5C60_OFFSET UNITYSDK_OFFSET(0xB7E2B80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xB7D7A50)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0xB7E0020)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0xB7DFEA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB7D8400)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0xB7E0FC0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0xB7DA540)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3EB5633778EEE94C_OFFSET UNITYSDK_OFFSET(0xB7E0430)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET UNITYSDK_OFFSET(0xB7DB160)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_52372258946A7C92_OFFSET UNITYSDK_OFFSET(0xB7D81F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xB7DF610)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET UNITYSDK_OFFSET(0xB7DC2E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5C330E987736192B_OFFSET UNITYSDK_OFFSET(0xB7DD3D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET UNITYSDK_OFFSET(0xB7E3B60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6B8DF18BAE5F99A7_OFFSET UNITYSDK_OFFSET(0xB7DDF10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0xB7E0CD0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6F2D3EE930FA728E_OFFSET UNITYSDK_OFFSET(0xB7D76E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_71DCA76EBC9A1D30_OFFSET UNITYSDK_OFFSET(0xB7D8CF0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET UNITYSDK_OFFSET(0xB7E3CF0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8356C3DF46E46E58_OFFSET UNITYSDK_OFFSET(0xB7D7D20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9018704AD7878B76_OFFSET UNITYSDK_OFFSET(0xB7DEF10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET UNITYSDK_OFFSET(0xB7DAA40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_937148BB070DC5B1_OFFSET UNITYSDK_OFFSET(0xB7D8810)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_99325ADCED5AC122_OFFSET UNITYSDK_OFFSET(0xB7DD6D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0xB7D7CA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A8A2FDDECE451EC7_OFFSET UNITYSDK_OFFSET(0xB7D78F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_1_OFFSET UNITYSDK_OFFSET(0xB7D9720)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_OFFSET UNITYSDK_OFFSET(0xB7D96C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xB7D9380)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_ACFE6D55671944C7_OFFSET UNITYSDK_OFFSET(0xB7E06E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET UNITYSDK_OFFSET(0xB7E3340)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_1_OFFSET UNITYSDK_OFFSET(0xB7DFB50)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_OFFSET UNITYSDK_OFFSET(0xB7DF800)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B08C879C309DA691_OFFSET UNITYSDK_OFFSET(0xB7DD8C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0xB7D9580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0xB7D7360)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B5255E4BA898D69B_OFFSET UNITYSDK_OFFSET(0xB7DB950)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET UNITYSDK_OFFSET(0xB7DCCB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0xB7E0900)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xB7D84C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_1_OFFSET UNITYSDK_OFFSET(0xB7DEB40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_OFFSET UNITYSDK_OFFSET(0xB7DDC30)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_C36DD7A14931FEA2_OFFSET UNITYSDK_OFFSET(0xB7E01A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0xB7DEE20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2472EA0840CCC6F_OFFSET UNITYSDK_OFFSET(0xB7D98A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2FFF6E2EB90010C_OFFSET UNITYSDK_OFFSET(0xB7E0210)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET UNITYSDK_OFFSET(0xB7E14A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0xB7DCB80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0xB7D82F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET UNITYSDK_OFFSET(0xB7E2F50)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E28059A48D6BFB33_OFFSET UNITYSDK_OFFSET(0xB7D74F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E80A587B0798C2A7_OFFSET UNITYSDK_OFFSET(0xB7DCC10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0xB7DA030)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET UNITYSDK_OFFSET(0xB7DE7D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET UNITYSDK_OFFSET(0xB7DF070)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB7D74B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0xB7E2010)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F7DCCD2DAFC0C686_OFFSET UNITYSDK_OFFSET(0xB7DBC60)
#define CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E46F0)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41_TypeDefinitionIndex = 59764;

class Class_1_6299BCD581CA4C41 : public ::System::Object
{
public:
	static ::System::String** StaticGet_HPELMOBMFNG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x49450);
	}
	static ::System::String** StaticGet_DJFFKOENHNP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x49458);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_ANAKHOOJGOB()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x49460);
	}
	static ::System::String** StaticGet_CEDHAMBMAHB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x49468);
	}
	static ::System::String** StaticGet_FNFEAAOFBPK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x49470);
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

	static ::System::Void Method_1_6F2D3EE930FA728E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6F2D3EE930FA728E_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_A8A2FDDECE451EC7()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_A8A2FDDECE451EC7_OFFSET))();
	}

	static ::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_2566AD459572DFC3_OFFSET))();
	}

	static ::System::Boolean Method_1_A53E39B066D9F108(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET))(a1);
	}

	static ::System::Void Method_1_8356C3DF46E46E58(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_8356C3DF46E46E58_OFFSET))(a1);
	}

	static ::System::Void Method_1_52372258946A7C92(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_52372258946A7C92_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E0B5F030178926C9()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_0CCBC54B8A78F499(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0CCBC54B8A78F499_OFFSET))(a1);
	}

	static ::System::Void Method_1_71DCA76EBC9A1D30(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_71DCA76EBC9A1D30_OFFSET))(a1);
	}

	static ::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_AC7CD4175E0A3EF8_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B3230B844F55FD00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET))();
	}

	static ::System::Void Method_1_AA8C2676333BF9A1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA8C2676333BF9A1_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_1_OFFSET))(a1);
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

	static ::System::Void Method_1_B5255E4BA898D69B(::Class_1_1E6CA2B210971DAB* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B5255E4BA898D69B_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_24B84A23937930DB*>* Method_1_58FA3EBB6B7ED514(::Class_1_3833970CC4FA195E* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_24B84A23937930DB*>*(*)(::Class_1_3833970CC4FA195E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_00CAAD2C58A780C1(::System::Collections::Generic::IReadOnlyList_1<::Class_1_24B84A23937930DB*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_1_24B84A23937930DB*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6E9C8027C54BFC7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E80A587B0798C2A7(::System::String* a1, ::Class_1_3833970CC4FA195E* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_3833970CC4FA195E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E80A587B0798C2A7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B8341974FD7C6543(::Class_1_3833970CC4FA195E* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_3833970CC4FA195E*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET))(a1, a2);
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

	static ::System::Int64 Method_1_B9C1BACC809F6A45(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_B9C1BACC809F6A45_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CC8AA229C980F42D()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET))();
	}

	static ::System::Boolean Method_1_9018704AD7878B76(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9018704AD7878B76_OFFSET))(a1);
	}

	static ::System::Void Method_1_937148BB070DC5B1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_937148BB070DC5B1_OFFSET))(a1, a2);
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

	static ::System::Int64 Method_1_6B8DF18BAE5F99A7(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6B8DF18BAE5F99A7_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_EA2FAB4A1FE22F8B(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_B063840EE1E88AB0(::Class_1_1E6CA2B210971DAB* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_B063840EE1E88AB0_1(::Class_1_29BD82FBCCD39695* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_29BD82FBCCD39695*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_1_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_ACFE6D55671944C7(::Class_1_1E6CA2B210971DAB* a1, ::Class_1_29BD82FBCCD39695* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::Class_1_29BD82FBCCD39695*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_ACFE6D55671944C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET))();
	}

	static ::System::Void Method_1_EFD189BCF595DA9C(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_1E6CA2B210971DAB* a2, ::Class_1_29BD82FBCCD39695* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::Class_1_29BD82FBCCD39695*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_6D3986FA20CF419D(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_1E6CA2B210971DAB* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_380699992F9CB7F3(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_29BD82FBCCD39695* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_29BD82FBCCD39695*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0898FF7F607087FA_1(::Class_0_16E4307DCC419505_95* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_95*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>* Method_1_21CB656E854C5C60(::Class_0_16E4307DCC419505_95* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_96*>*(*)(::Class_0_16E4307DCC419505_95*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_21CB656E854C5C60_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_D2472EA0840CCC6F(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D2472EA0840CCC6F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_63ABA549BEAB770C(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8264C0EBBB2C977F(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_1E6CA2B210971DAB* a2, ::Class_1_29BD82FBCCD39695* a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_1E6CA2B210971DAB*, ::Class_1_29BD82FBCCD39695*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET))(a1, a2, a3);
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
