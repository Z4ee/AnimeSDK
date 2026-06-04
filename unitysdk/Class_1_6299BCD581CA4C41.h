#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_76;
class Class_0_16E4307DCC419505_77;
class Class_1_1E6CA2B210971DAB;
class Class_1_211A5BA20F9E6E38;
class Class_1_42A5121F85009164;
class Class_1_52242588807D4112;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET UNITYSDK_OFFSET(0xA690580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET UNITYSDK_OFFSET(0xA692580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET UNITYSDK_OFFSET(0xA691CA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_1_OFFSET UNITYSDK_OFFSET(0xA6950B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0A2F556DCCB6DB03_OFFSET UNITYSDK_OFFSET(0xA694DB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0FE222A5A6E891D2_OFFSET UNITYSDK_OFFSET(0xA41D1B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0xA41E140)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0xA695520)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0xA6953A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2DDD6838EA5BB297_OFFSET UNITYSDK_OFFSET(0xA41D670)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA41D290)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0xA696470)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_1_OFFSET UNITYSDK_OFFSET(0xA693530)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_38FF6E7ACD0247FC_OFFSET UNITYSDK_OFFSET(0xA692020)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0xA6948B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3EB5633778EEE94C_OFFSET UNITYSDK_OFFSET(0xA695910)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_45BA6CA15DD1A5DE_OFFSET UNITYSDK_OFFSET(0xA691520)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET UNITYSDK_OFFSET(0xA691690)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_50E64BD6C4C3104B_1_OFFSET UNITYSDK_OFFSET(0xA41D8F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_50E64BD6C4C3104B_OFFSET UNITYSDK_OFFSET(0xA41CDA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5507399F8E5EB3BF_OFFSET UNITYSDK_OFFSET(0xA41C7F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xA6941B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET UNITYSDK_OFFSET(0xA6902E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5A7DA1B7B5934235_1_OFFSET UNITYSDK_OFFSET(0xA41E0E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5A7DA1B7B5934235_OFFSET UNITYSDK_OFFSET(0xA41E080)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5C330E987736192B_OFFSET UNITYSDK_OFFSET(0xA691250)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5DE431C7F7C7CDC1_OFFSET UNITYSDK_OFFSET(0xA698840)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_606F8F5F540A3406_OFFSET UNITYSDK_OFFSET(0xA695B90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET UNITYSDK_OFFSET(0xA698B40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6ADEDD41C8D1A09E_OFFSET UNITYSDK_OFFSET(0xA690A90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6B8DF18BAE5F99A7_OFFSET UNITYSDK_OFFSET(0xA692900)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0xA696180)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6ED3CDBBEB5D3F89_OFFSET UNITYSDK_OFFSET(0xA41D0D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET UNITYSDK_OFFSET(0xA698CD0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0xA6938D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET UNITYSDK_OFFSET(0xA41E260)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_92782C20450F6B91_OFFSET UNITYSDK_OFFSET(0xA6939F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9DDA31CE09FFD8C6_OFFSET UNITYSDK_OFFSET(0xA697E20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9DF6CB371F89B944_OFFSET UNITYSDK_OFFSET(0xA41C600)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A2C759BF8D393FD9_OFFSET UNITYSDK_OFFSET(0xA68FB20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0xA41CD20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET UNITYSDK_OFFSET(0xA6984C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0xA41C9D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0xA41C4B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET UNITYSDK_OFFSET(0xA690B30)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xA41CB00)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0xA695DB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xA41D350)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_BA5C55504E896D92_OFFSET UNITYSDK_OFFSET(0xA68FFF0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_C36DD7A14931FEA2_OFFSET UNITYSDK_OFFSET(0xA6956A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0xA6937E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D24E815385FAB86D_OFFSET UNITYSDK_OFFSET(0xA6919A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2FFF6E2EB90010C_OFFSET UNITYSDK_OFFSET(0xA695710)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET UNITYSDK_OFFSET(0xA696950)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0xA690A00)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA41DDA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0xA41DF70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET UNITYSDK_OFFSET(0xA698130)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E7CA3FF0DE82570B_OFFSET UNITYSDK_OFFSET(0xA6922D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0xA6943A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET UNITYSDK_OFFSET(0xA6931C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET UNITYSDK_OFFSET(0xA693C00)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA693BC0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0xA6972B0)
#define CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET UNITYSDK_OFFSET(0xA699460)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41_TypeDefinitionIndex = 55739;

class Class_1_6299BCD581CA4C41 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x45E80);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x45E88);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x45E90);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x45E98);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x45EA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B3F94C095ACAE0B6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET))(a1);
	}

	static ::System::Void Method_1_9DF6CB371F89B944(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9DF6CB371F89B944_OFFSET))(a1);
	}

	static ::System::Void Method_1_5507399F8E5EB3BF(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_5507399F8E5EB3BF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B3230B844F55FD00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET))();
	}

	static ::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_B961D33AD47A2113_OFFSET))();
	}

	static ::System::Boolean Method_1_A53E39B066D9F108(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET))(a1);
	}

	static ::System::Void Method_1_50E64BD6C4C3104B(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_50E64BD6C4C3104B_OFFSET))(a1);
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

	static ::System::Void Method_1_50E64BD6C4C3104B_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_50E64BD6C4C3104B_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D9EF75A2D048B8A1_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E0B5F030178926C9()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET))();
	}

	static ::System::Void Method_1_5A7DA1B7B5934235(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_5A7DA1B7B5934235_OFFSET))(a1);
	}

	static ::System::Void Method_1_5A7DA1B7B5934235_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_5A7DA1B7B5934235_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_1752A6C5315501DC(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_9232DFA7EDA62BD8(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A2C759BF8D393FD9(::Class_1_1E6CA2B210971DAB* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_1_1E6CA2B210971DAB*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_A2C759BF8D393FD9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BA5C55504E896D92(::Class_1_1E6CA2B210971DAB* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_BA5C55504E896D92_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_42A5121F85009164*>* Method_1_58FA3EBB6B7ED514(::Class_1_52242588807D4112* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_42A5121F85009164*>*(*)(::Class_1_52242588807D4112*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_00CAAD2C58A780C1(::System::Collections::Generic::IReadOnlyList_1<::Class_1_42A5121F85009164*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_1_42A5121F85009164*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_45BA6CA15DD1A5DE(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_45BA6CA15DD1A5DE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_492B3CAEB882C200(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0898FF7F607087FA(::Class_0_16E4307DCC419505_76* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_76*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D24E815385FAB86D(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D24E815385FAB86D_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(a1);
	}

	static ::System::Void Method_1_92782C20450F6B91(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_92782C20450F6B91_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_606F8F5F540A3406(::Class_1_1E6CA2B210971DAB* a1, ::Class_1_211A5BA20F9E6E38* a2)
	{
		return ((::System::Void(*)(::Class_1_1E6CA2B210971DAB*, ::Class_1_211A5BA20F9E6E38*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_606F8F5F540A3406_OFFSET))(a1, a2);
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

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_0898FF7F607087FA_1(::Class_0_16E4307DCC419505_76* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_76*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>* Method_1_9DDA31CE09FFD8C6(::Class_0_16E4307DCC419505_76* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>*(*)(::Class_0_16E4307DCC419505_76*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_9DDA31CE09FFD8C6_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_5DE431C7F7C7CDC1(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_5DE431C7F7C7CDC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1F17B1C85276758(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>* a3, ::System::Int64& a4)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D553EA241067CFD8(::System::IO::StreamWriter* a1, ::Class_1_1E6CA2B210971DAB* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::Class_1_1E6CA2B210971DAB*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_AEF59D0695F0734F(::System::String* a1, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_77*>*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET))(a1, a2);
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
