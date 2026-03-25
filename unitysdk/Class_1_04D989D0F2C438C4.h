#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_77;
class Class_0_16E4307DCC419505_78;
class Class_1_99337DDD16B17366;
class Class_1_F077E55B6446752D;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_04D989D0F2C438C4_METHOD_1_00AB706E91CC1231_OFFSET UNITYSDK_OFFSET(0x8CFD0D0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_095873C28EE02501_OFFSET UNITYSDK_OFFSET(0x8CFA290)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_0BB88B96DFFF0881_OFFSET UNITYSDK_OFFSET(0x8CFD3E0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0x8CF5720)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_1C79D2D76F58E5A0_OFFSET UNITYSDK_OFFSET(0x8CF6FB0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2581C7C18C4336EC_OFFSET UNITYSDK_OFFSET(0x8CFADE0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8CF5370)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0x8CFA700)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0x8CFA580)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8CF4690)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0x8CFB6C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0x8CF63A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3CE08948B7B08957_OFFSET UNITYSDK_OFFSET(0x8CFA910)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3ED06AA76F8F19C2_OFFSET UNITYSDK_OFFSET(0x8CF8F70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3F3E4145E35053CD_OFFSET UNITYSDK_OFFSET(0x8CFD790)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_45BA6CA15DD1A5DE_OFFSET UNITYSDK_OFFSET(0x8CF7DF0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_4BB817D9C82AC31E_OFFSET UNITYSDK_OFFSET(0x8CF8550)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_1_OFFSET UNITYSDK_OFFSET(0x8CF4EC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_OFFSET UNITYSDK_OFFSET(0x8CF41D0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_52372258946A7C92_OFFSET UNITYSDK_OFFSET(0x8CF44F0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_583F5BF4187B6510_OFFSET UNITYSDK_OFFSET(0x8CFA880)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_5DE431C7F7C7CDC1_OFFSET UNITYSDK_OFFSET(0x8CFDB30)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_5F9A6B24C3DAF2D5_OFFSET UNITYSDK_OFFSET(0x8CFDE30)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_1_OFFSET UNITYSDK_OFFSET(0x8CF5AD0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_OFFSET UNITYSDK_OFFSET(0x8CF72A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_62D17ECA69A08EF4_OFFSET UNITYSDK_OFFSET(0x8CF4C40)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_68A37D9B80DCB4F0_OFFSET UNITYSDK_OFFSET(0x8CF9D50)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0x8CFB3D0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_709D6F75F7C64865_OFFSET UNITYSDK_OFFSET(0x8CF97C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_1_OFFSET UNITYSDK_OFFSET(0x8CF56C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_OFFSET UNITYSDK_OFFSET(0x8CF5660)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x8CF96A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_9E20E2F68065EB73_OFFSET UNITYSDK_OFFSET(0x8CF68C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_A5125E83776D3C64_OFFSET UNITYSDK_OFFSET(0x8CFDFC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0x8CF4150)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_A8A2FDDECE451EC7_OFFSET UNITYSDK_OFFSET(0x8CF3E00)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x8CF3F30)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0x8CF5550)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0x8CF38A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x8CFB000)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x8CF4750)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_1_OFFSET UNITYSDK_OFFSET(0x8CF9300)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_OFFSET UNITYSDK_OFFSET(0x8CF82A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_BA5C55504E896D92_OFFSET UNITYSDK_OFFSET(0x8CF7620)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_C2964C522310C84E_OFFSET UNITYSDK_OFFSET(0x8CF7920)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_C99D0F8C0BD68108_OFFSET UNITYSDK_OFFSET(0x8CF4A70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0x8CF95B0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_CF84D53F2A6F5836_OFFSET UNITYSDK_OFFSET(0x8CF5840)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D24E815385FAB86D_OFFSET UNITYSDK_OFFSET(0x8CF7F90)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D4DAFE0DCB70C076_OFFSET UNITYSDK_OFFSET(0x8CF3A30)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D9276CC0AAF87054_OFFSET UNITYSDK_OFFSET(0x8CF9F90)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0x8CF45C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E28059A48D6BFB33_OFFSET UNITYSDK_OFFSET(0x8CF3C20)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0x8CF5E50)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E987538FCD88C815_OFFSET UNITYSDK_OFFSET(0x8CFAB40)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8CF39F0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0x8CFC5D0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_FF1AFA9E6B3F7101_OFFSET UNITYSDK_OFFSET(0x8CFBB70)
#define CLASS_1_04D989D0F2C438C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CFE800)

inline static constexpr unsigned int Class_1_04D989D0F2C438C4_TypeDefinitionIndex = 48260;

class Class_1_04D989D0F2C438C4 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0xF230);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0xF238);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0xF240);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0xF248);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0xF250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B3F94C095ACAE0B6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B3F94C095ACAE0B6_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4DAFE0DCB70C076(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D4DAFE0DCB70C076_OFFSET))(a1);
	}

	static ::System::Void Method_1_E28059A48D6BFB33(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E28059A48D6BFB33_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_A8A2FDDECE451EC7()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_A8A2FDDECE451EC7_OFFSET))();
	}

	static ::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_AC7CD4175E0A3EF8_OFFSET))();
	}

	static ::System::Boolean Method_1_A53E39B066D9F108(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_A53E39B066D9F108_OFFSET))(a1);
	}

	static ::System::Void Method_1_50E64BD6C4C3104B(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_OFFSET))(a1);
	}

	static ::System::Void Method_1_52372258946A7C92(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_52372258946A7C92_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E0B5F030178926C9()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E0B5F030178926C9_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_62D17ECA69A08EF4(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_62D17ECA69A08EF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_50E64BD6C4C3104B_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_283DA224BE06DA9F_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B3230B844F55FD00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B3230B844F55FD00_OFFSET))();
	}

	static ::System::Void Method_1_7A9E441FB10507A3(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_7A9E441FB10507A3_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_1752A6C5315501DC(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_1752A6C5315501DC_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_9E20E2F68065EB73(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_9E20E2F68065EB73_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C2964C522310C84E(::Class_1_F077E55B6446752D* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_1_F077E55B6446752D*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_C2964C522310C84E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BA5C55504E896D92(::Class_1_F077E55B6446752D* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_F077E55B6446752D*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_BA5C55504E896D92_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_45BA6CA15DD1A5DE(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_45BA6CA15DD1A5DE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_1C79D2D76F58E5A0(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_1C79D2D76F58E5A0_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_60606FD5427CA543(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D24E815385FAB86D(::Class_0_16E4307DCC419505_78* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_78*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D24E815385FAB86D_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_B9C1BACC809F6A45(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_B9C1BACC809F6A45_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CC8AA229C980F42D()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_CC8AA229C980F42D_OFFSET))();
	}

	static ::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(a1);
	}

	static ::System::Void Method_1_C99D0F8C0BD68108(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_C99D0F8C0BD68108_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_68A37D9B80DCB4F0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_68A37D9B80DCB4F0_OFFSET))();
	}

	static ::System::Int64 Method_1_E95AE92E0F406667(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E95AE92E0F406667_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_3A9DAF7F101E5980(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3A9DAF7F101E5980_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_4BB817D9C82AC31E(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_4BB817D9C82AC31E_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_3ED06AA76F8F19C2(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3ED06AA76F8F19C2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_D9276CC0AAF87054(::Class_1_F077E55B6446752D* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_F077E55B6446752D*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D9276CC0AAF87054_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_095873C28EE02501(::Class_1_99337DDD16B17366* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_99337DDD16B17366*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_095873C28EE02501_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515_1(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_583F5BF4187B6510(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_583F5BF4187B6510_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3CE08948B7B08957(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3CE08948B7B08957_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E987538FCD88C815(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E987538FCD88C815_OFFSET))(a1);
	}

	static ::System::Void Method_1_2581C7C18C4336EC(::Class_1_F077E55B6446752D* a1, ::Class_1_99337DDD16B17366* a2)
	{
		return ((::System::Void(*)(::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2581C7C18C4336EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_1_OFFSET))();
	}

	static ::System::Void Method_1_709D6F75F7C64865(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_F077E55B6446752D* a2, ::Class_1_99337DDD16B17366* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_709D6F75F7C64865_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_6D3986FA20CF419D(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_F077E55B6446752D* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_6D3986FA20CF419D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_380699992F9CB7F3(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_99337DDD16B17366* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_99337DDD16B17366*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_380699992F9CB7F3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_60606FD5427CA543_1(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* Method_1_00AB706E91CC1231(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_00AB706E91CC1231_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_CF84D53F2A6F5836(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_CF84D53F2A6F5836_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5F9A6B24C3DAF2D5(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_5F9A6B24C3DAF2D5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A5125E83776D3C64(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_F077E55B6446752D* a2, ::Class_1_99337DDD16B17366* a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_A5125E83776D3C64_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5DE431C7F7C7CDC1(::Class_0_16E4307DCC419505_78* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_78*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_5DE431C7F7C7CDC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BB88B96DFFF0881(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* a3, ::System::Int64& a4)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_0BB88B96DFFF0881_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FF1AFA9E6B3F7101(::System::IO::StreamWriter* a1, ::Class_1_F077E55B6446752D* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::Class_1_F077E55B6446752D*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_FF1AFA9E6B3F7101_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_3F3E4145E35053CD(::System::String* a1, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3F3E4145E35053CD_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_F684383D67CB4C47(::Class_1_F077E55B6446752D* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Int64(*)(::Class_1_F077E55B6446752D*, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_F684383D67CB4C47_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_F0E307B84478A272_OFFSET))();
	}
};
