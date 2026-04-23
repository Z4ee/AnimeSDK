#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_0DC3FBBD8450D96E;
class Class_1_49AB19924B4FCC28;
class Class_1_4E263D610E3B4DC1;
class Class_1_EC8C41D270800CDD;
class Class_1_FF2AAF78D6EA9B0C;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7956089D4F15495C_METHOD_1_016C8341F6A3521E_OFFSET UNITYSDK_OFFSET(0xB22A230)
#define CLASS_1_7956089D4F15495C_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xB227E90)
#define CLASS_1_7956089D4F15495C_METHOD_1_0BC942C41895B4DC_OFFSET UNITYSDK_OFFSET(0xB22A460)
#define CLASS_1_7956089D4F15495C_METHOD_1_0C50FA78EC347DEB_OFFSET UNITYSDK_OFFSET(0xB228CF0)
#define CLASS_1_7956089D4F15495C_METHOD_1_0C6D78F7FB2736C2_OFFSET UNITYSDK_OFFSET(0xB228EB0)
#define CLASS_1_7956089D4F15495C_METHOD_1_1B1834151802612D_OFFSET UNITYSDK_OFFSET(0xB229B40)
#define CLASS_1_7956089D4F15495C_METHOD_1_1B3BFD2994634DD8_OFFSET UNITYSDK_OFFSET(0xB2295B0)
#define CLASS_1_7956089D4F15495C_METHOD_1_2A2B1F94744D1D84_OFFSET UNITYSDK_OFFSET(0xB229EF0)
#define CLASS_1_7956089D4F15495C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB228000)
#define CLASS_1_7956089D4F15495C_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xB2287D0)
#define CLASS_1_7956089D4F15495C_METHOD_1_4D70E3D849E4E16D_1_OFFSET UNITYSDK_OFFSET(0xB2296B0)
#define CLASS_1_7956089D4F15495C_METHOD_1_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xB229500)
#define CLASS_1_7956089D4F15495C_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xB2283A0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xB229930)
#define CLASS_1_7956089D4F15495C_METHOD_1_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0xB22A010)
#define CLASS_1_7956089D4F15495C_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0xB22A930)
#define CLASS_1_7956089D4F15495C_METHOD_1_75D1D80E6A514E21_OFFSET UNITYSDK_OFFSET(0xB229760)
#define CLASS_1_7956089D4F15495C_METHOD_1_7F7793441B14EE76_OFFSET UNITYSDK_OFFSET(0xB229CB0)
#define CLASS_1_7956089D4F15495C_METHOD_1_87BC594271C2D32F_OFFSET UNITYSDK_OFFSET(0xB22A570)
#define CLASS_1_7956089D4F15495C_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xB22A160)
#define CLASS_1_7956089D4F15495C_METHOD_1_9879FF951B7059E0_OFFSET UNITYSDK_OFFSET(0xB229820)
#define CLASS_1_7956089D4F15495C_METHOD_1_A41007EBE94BB03F_OFFSET UNITYSDK_OFFSET(0xB228950)
#define CLASS_1_7956089D4F15495C_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB228300)
#define CLASS_1_7956089D4F15495C_METHOD_1_C2559166E4C1AF3D_OFFSET UNITYSDK_OFFSET(0xB22A2E0)
#define CLASS_1_7956089D4F15495C_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0xB229A60)
#define CLASS_1_7956089D4F15495C_METHOD_1_D24E9462CB66A8C5_OFFSET UNITYSDK_OFFSET(0xB229980)
#define CLASS_1_7956089D4F15495C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xB227F80)
#define CLASS_1_7956089D4F15495C_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xB22A760)
#define CLASS_1_7956089D4F15495C_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xB22A6C0)
#define CLASS_1_7956089D4F15495C_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB22A620)
#define CLASS_1_7956089D4F15495C_METHOD_1_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0xB229470)
#define CLASS_1_7956089D4F15495C_METHOD_1_F23F13E618A6D9CD_OFFSET UNITYSDK_OFFSET(0xB229DD0)
#define CLASS_1_7956089D4F15495C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB22A980)
#define CLASS_1_7956089D4F15495C__CTOR_OFFSET UNITYSDK_OFFSET(0xB228050)

inline static constexpr unsigned int Class_1_7956089D4F15495C_TypeDefinitionIndex = 63824;

class Class_1_7956089D4F15495C : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_14()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x67570);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x67578);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_16()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x67580);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_15()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x67588);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x11370);
	}
	// static const ::System::Int32 Field_1_12 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4E263D610E3B4DC1*>* Field_1_6; // 0x10
	::RPG::Client::MapDef* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4E263D610E3B4DC1*>* Field_1_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_FF2AAF78D6EA9B0C*>* Field_1_10; // 0x28
	::System::Collections::Generic::List_1<::Class_1_FF2AAF78D6EA9B0C*>* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::Class_1_4E263D610E3B4DC1*>* Field_1_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0DC3FBBD8450D96E*>* Field_1_4; // 0x40
	::System::Collections::Generic::List_1<::Class_1_0DC3FBBD8450D96E*>* Field_1_5; // 0x48
	::System::UInt32 Field_1_2; // 0x50
	::System::Boolean Field_1_1; // 0x54
	::System::Boolean Field_1_11; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_A41007EBE94BB03F(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_A41007EBE94BB03F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F07840BBC25636A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_F07840BBC25636A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C50FA78EC347DEB(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0C50FA78EC347DEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_75D1D80E6A514E21(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_75D1D80E6A514E21_OFFSET))(this, a1);
	}

	::System::Void Method_1_9879FF951B7059E0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_9879FF951B7059E0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_1B3BFD2994634DD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_1B3BFD2994634DD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_D24E9462CB66A8C5(::System::String* a1, ::Class_1_FF2AAF78D6EA9B0C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_FF2AAF78D6EA9B0C*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_D24E9462CB66A8C5_OFFSET))(this, a1, a2);
	}

	::Class_1_FF2AAF78D6EA9B0C* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_FF2AAF78D6EA9B0C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1B1834151802612D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_1B1834151802612D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F7793441B14EE76(::System::String* a1, ::Class_1_4E263D610E3B4DC1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_4E263D610E3B4DC1*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_7F7793441B14EE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F23F13E618A6D9CD(::System::String* a1, ::Class_1_4E263D610E3B4DC1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_4E263D610E3B4DC1*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_F23F13E618A6D9CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A2B1F94744D1D84(::System::String* a1, ::Class_1_4E263D610E3B4DC1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_4E263D610E3B4DC1*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_2A2B1F94744D1D84_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66746A96792CE392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_66746A96792CE392_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C6D78F7FB2736C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0C6D78F7FB2736C2_OFFSET))(this);
	}

	::Class_1_4E263D610E3B4DC1* Method_1_C2559166E4C1AF3D(::Class_1_EC8C41D270800CDD* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_4E263D610E3B4DC1*>* a5)
	{
		return ((::Class_1_4E263D610E3B4DC1*(*)(::PVOID, ::Class_1_EC8C41D270800CDD*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_4E263D610E3B4DC1*>*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_C2559166E4C1AF3D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0BC942C41895B4DC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0BC942C41895B4DC_OFFSET))(this, a1);
	}

	::Class_1_0DC3FBBD8450D96E* Method_1_016C8341F6A3521E(::System::UInt32 a1)
	{
		return ((::Class_1_0DC3FBBD8450D96E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_016C8341F6A3521E_OFFSET))(this, a1);
	}

	::System::Void Method_1_87BC594271C2D32F(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_1_49AB19924B4FCC28*& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_49AB19924B4FCC28*&))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_87BC594271C2D32F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D70E3D849E4E16D_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_4D70E3D849E4E16D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityClassifyType Method_1_679732E46F837809(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_679732E46F837809_OFFSET))(this, a1);
	}
};
