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

#define CLASS_1_6299BCD581CA4C41_METHOD_1_00CAAD2C58A780C1_OFFSET UNITYSDK_OFFSET(0x198BBC40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_02A3DB6EF685AB68_OFFSET UNITYSDK_OFFSET(0x198C2E60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_1_OFFSET UNITYSDK_OFFSET(0x198B9240)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0898FF7F607087FA_OFFSET UNITYSDK_OFFSET(0x198BAB60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_0CCBC54B8A78F499_OFFSET UNITYSDK_OFFSET(0x198B80D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0x198B8E40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2150FF2EBB71FBE0_OFFSET UNITYSDK_OFFSET(0x198BD5D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_21CB656E854C5C60_OFFSET UNITYSDK_OFFSET(0x198C21F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x198B7110)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0x198BF690)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0x198BF510)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x198B7AC0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0x198C0630)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0x198B9C00)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_3EB5633778EEE94C_OFFSET UNITYSDK_OFFSET(0x198BFAA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_492B3CAEB882C200_OFFSET UNITYSDK_OFFSET(0x198BA820)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_52372258946A7C92_OFFSET UNITYSDK_OFFSET(0x198B78B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x198BEC80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_58FA3EBB6B7ED514_OFFSET UNITYSDK_OFFSET(0x198BB9A0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_5C330E987736192B_OFFSET UNITYSDK_OFFSET(0x198BCA90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_63ABA549BEAB770C_OFFSET UNITYSDK_OFFSET(0x198C31D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6ADEDD41C8D1A09E_OFFSET UNITYSDK_OFFSET(0x198BC2D0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0x198C0340)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_6F2D3EE930FA728E_OFFSET UNITYSDK_OFFSET(0x198B6DA0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_71DCA76EBC9A1D30_OFFSET UNITYSDK_OFFSET(0x198B83B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8264C0EBBB2C977F_OFFSET UNITYSDK_OFFSET(0x198C3360)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_8356C3DF46E46E58_OFFSET UNITYSDK_OFFSET(0x198B73E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9018704AD7878B76_OFFSET UNITYSDK_OFFSET(0x198BE580)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_9232DFA7EDA62BD8_OFFSET UNITYSDK_OFFSET(0x198BA100)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_937148BB070DC5B1_OFFSET UNITYSDK_OFFSET(0x198B7ED0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_99325ADCED5AC122_OFFSET UNITYSDK_OFFSET(0x198BCD90)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0x198B7360)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_A8A2FDDECE451EC7_OFFSET UNITYSDK_OFFSET(0x198B6FB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_1_OFFSET UNITYSDK_OFFSET(0x198B8DE0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AA8C2676333BF9A1_OFFSET UNITYSDK_OFFSET(0x198B8D80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x198B8A40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_ACFE6D55671944C7_OFFSET UNITYSDK_OFFSET(0x198BFD50)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_AEF59D0695F0734F_OFFSET UNITYSDK_OFFSET(0x198C29B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_1_OFFSET UNITYSDK_OFFSET(0x198BF1C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B063840EE1E88AB0_OFFSET UNITYSDK_OFFSET(0x198BEE70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B08C879C309DA691_OFFSET UNITYSDK_OFFSET(0x198BCF80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0x198B8C40)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0x198B6A20)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B5255E4BA898D69B_OFFSET UNITYSDK_OFFSET(0x198BB010)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B8341974FD7C6543_OFFSET UNITYSDK_OFFSET(0x198BC370)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x198BFF70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x198B7B80)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_1_OFFSET UNITYSDK_OFFSET(0x198BE1B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_B9C1BACC809F6A45_OFFSET UNITYSDK_OFFSET(0x198BD2F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_C36DD7A14931FEA2_OFFSET UNITYSDK_OFFSET(0x198BF810)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0x198BE490)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2472EA0840CCC6F_OFFSET UNITYSDK_OFFSET(0x198B8F60)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D2FFF6E2EB90010C_OFFSET UNITYSDK_OFFSET(0x198BF880)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D553EA241067CFD8_OFFSET UNITYSDK_OFFSET(0x198C0B10)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0x198BC240)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0x198B79B0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E1F17B1C85276758_OFFSET UNITYSDK_OFFSET(0x198C25C0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E28059A48D6BFB33_OFFSET UNITYSDK_OFFSET(0x198B6BB0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0x198B96F0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EA2FAB4A1FE22F8B_OFFSET UNITYSDK_OFFSET(0x198BDE70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_EFD189BCF595DA9C_OFFSET UNITYSDK_OFFSET(0x198BE6E0)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x198B6B70)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0x198C1680)
#define CLASS_1_6299BCD581CA4C41_METHOD_1_F7DCCD2DAFC0C686_OFFSET UNITYSDK_OFFSET(0x198BB320)
#define CLASS_1_6299BCD581CA4C41__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C3D60)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41_TypeDefinitionIndex = 59764;

class Class_1_6299BCD581CA4C41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_ANAKHOOJGOB()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x51490);
	}
	static ::System::String** StaticGet_CEDHAMBMAHB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x51498);
	}
	static ::System::String** StaticGet_FNFEAAOFBPK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x514A0);
	}
	static ::System::String** StaticGet_HPELMOBMFNG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x514A8);
	}
	static ::System::String** StaticGet_DJFFKOENHNP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41_TypeDefinitionIndex)->GetStaticField(0x514B0);
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

	static ::System::Boolean Method_1_6ADEDD41C8D1A09E(::System::String* a1, ::Class_1_3833970CC4FA195E* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_3833970CC4FA195E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_6ADEDD41C8D1A09E_OFFSET))(a1, a2, a3);
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

	static ::System::Int64 Method_1_2150FF2EBB71FBE0(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41_METHOD_1_2150FF2EBB71FBE0_OFFSET))(a1, a2);
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
