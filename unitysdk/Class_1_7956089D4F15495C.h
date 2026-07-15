#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_1D06CD7EA6ED349B;
class Class_1_49AB19924B4FCC28;
class Class_1_B0B12D6DE36A5AD1;
class Class_1_F08A242BEA9D3BCB;
class Class_1_FD4389532621206D;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7956089D4F15495C_METHOD_1_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x16D82160)
#define CLASS_1_7956089D4F15495C_METHOD_1_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x16D7FC70)
#define CLASS_1_7956089D4F15495C_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x16D7F730)
#define CLASS_1_7956089D4F15495C_METHOD_1_0D8FBED0B1940013_OFFSET UNITYSDK_OFFSET(0x16D81AA0)
#define CLASS_1_7956089D4F15495C_METHOD_1_16EA4D945E5A263C_OFFSET UNITYSDK_OFFSET(0x16D817A0)
#define CLASS_1_7956089D4F15495C_METHOD_1_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0x16D81470)
#define CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_1_OFFSET UNITYSDK_OFFSET(0x16D80FB0)
#define CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x16D80DB0)
#define CLASS_1_7956089D4F15495C_METHOD_1_3160EACC8F1729F2_OFFSET UNITYSDK_OFFSET(0x16D82510)
#define CLASS_1_7956089D4F15495C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16D7F8A0)
#define CLASS_1_7956089D4F15495C_METHOD_1_4AF568D4A553C0F4_OFFSET UNITYSDK_OFFSET(0x16D81090)
#define CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0x16D82450)
#define CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16D82390)
#define CLASS_1_7956089D4F15495C_METHOD_1_5A5863A8DCA1A489_OFFSET UNITYSDK_OFFSET(0x16D815C0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x16D812D0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5D43E4AD30011C0D_OFFSET UNITYSDK_OFFSET(0x16D81320)
#define CLASS_1_7956089D4F15495C_METHOD_1_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0x16D80D20)
#define CLASS_1_7956089D4F15495C_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0x16D82740)
#define CLASS_1_7956089D4F15495C_METHOD_1_816D3BAAEACF30B4_OFFSET UNITYSDK_OFFSET(0x16D80120)
#define CLASS_1_7956089D4F15495C_METHOD_1_87BC594271C2D32F_OFFSET UNITYSDK_OFFSET(0x16D822E0)
#define CLASS_1_7956089D4F15495C_METHOD_1_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0x16D81DF0)
#define CLASS_1_7956089D4F15495C_METHOD_1_948ABC3EB132D2AE_OFFSET UNITYSDK_OFFSET(0x16D81F80)
#define CLASS_1_7956089D4F15495C_METHOD_1_9E273918EE1BE07B_OFFSET UNITYSDK_OFFSET(0x16D811A0)
#define CLASS_1_7956089D4F15495C_METHOD_1_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x16D80B20)
#define CLASS_1_7956089D4F15495C_METHOD_1_AE0648FD988F6B00_OFFSET UNITYSDK_OFFSET(0x16D80850)
#define CLASS_1_7956089D4F15495C_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16D7FBD0)
#define CLASS_1_7956089D4F15495C_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x16D80E90)
#define CLASS_1_7956089D4F15495C_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x16D81EC0)
#define CLASS_1_7956089D4F15495C_METHOD_1_C7BBC380E1DD89FD_OFFSET UNITYSDK_OFFSET(0x16D80310)
#define CLASS_1_7956089D4F15495C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x16D7F820)
#define CLASS_1_7956089D4F15495C_METHOD_1_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0x16D81C20)
#define CLASS_1_7956089D4F15495C_METHOD_1_E8DDA2375FB52E85_OFFSET UNITYSDK_OFFSET(0x16D81920)
#define CLASS_1_7956089D4F15495C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D82790)
#define CLASS_1_7956089D4F15495C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7F8F0)

inline static constexpr unsigned int Class_1_7956089D4F15495C_TypeDefinitionIndex = 66146;

class Class_1_7956089D4F15495C : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x62B20);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x62B28);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x62B30);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x62B38);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x12EC0);
	}
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F08A242BEA9D3BCB*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B0B12D6DE36A5AD1*>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B0B12D6DE36A5AD1*>* Field_1_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1D06CD7EA6ED349B*>* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::Class_1_1D06CD7EA6ED349B*>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_12; // 0x40
	::RPG::Client::MapDef* Field_1_13; // 0x48
	::System::UInt32 Field_1_14; // 0x50
	::System::Boolean Field_1_15; // 0x54
	::System::Boolean Field_1_16; // 0x55

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

	::System::Void Method_1_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_1_C7BBC380E1DD89FD(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_C7BBC380E1DD89FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_63E3E26A3D57F57D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_63E3E26A3D57F57D_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE0648FD988F6B00(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_AE0648FD988F6B00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AF568D4A553C0F4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_4AF568D4A553C0F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E273918EE1BE07B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_9E273918EE1BE07B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D43E4AD30011C0D(::System::String* a1, ::Class_1_1D06CD7EA6ED349B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_1D06CD7EA6ED349B*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_5D43E4AD30011C0D_OFFSET))(this, a1, a2);
	}

	::Class_1_1D06CD7EA6ED349B* Method_1_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_1D06CD7EA6ED349B*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_19ED9DE4E1D12CB7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A5863A8DCA1A489(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_5A5863A8DCA1A489_OFFSET))(this, a1);
	}

	::System::Void Method_1_16EA4D945E5A263C(::System::String* a1, ::Class_1_F08A242BEA9D3BCB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_F08A242BEA9D3BCB*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_16EA4D945E5A263C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E8DDA2375FB52E85(::System::String* a1, ::Class_1_F08A242BEA9D3BCB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_F08A242BEA9D3BCB*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_E8DDA2375FB52E85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D8FBED0B1940013(::System::String* a1, ::Class_1_F08A242BEA9D3BCB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_F08A242BEA9D3BCB*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0D8FBED0B1940013_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_1_916B8A6B72C96F5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_916B8A6B72C96F5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_A59F33F8CA7F3A80_OFFSET))(this);
	}

	::Class_1_F08A242BEA9D3BCB* Method_1_948ABC3EB132D2AE(::Class_1_FD4389532621206D* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* a5)
	{
		return ((::Class_1_F08A242BEA9D3BCB*(*)(::PVOID, ::Class_1_FD4389532621206D*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_948ABC3EB132D2AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_07A48CE1AA24868D_OFFSET))(this, a1);
	}

	::Class_1_B0B12D6DE36A5AD1* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_B0B12D6DE36A5AD1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Void Method_1_87BC594271C2D32F(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_1_49AB19924B4FCC28*& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_49AB19924B4FCC28*&))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_87BC594271C2D32F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_3160EACC8F1729F2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_3160EACC8F1729F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_816D3BAAEACF30B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_816D3BAAEACF30B4_OFFSET))(this);
	}

	::System::Void Method_1_28F3459B67DFCFFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_28F3459B67DFCFFF_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityClassifyType Method_1_679732E46F837809(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_679732E46F837809_OFFSET))(this, a1);
	}
};
