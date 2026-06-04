#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_08C6C0ABAF0F06B3;
class Class_1_1D06CD7EA6ED349B;
class Class_1_49AB19924B4FCC28;
class Class_1_B0B12D6DE36A5AD1;
class Class_1_F08A242BEA9D3BCB;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7956089D4F15495C_METHOD_1_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0xCEB7680)
#define CLASS_1_7956089D4F15495C_METHOD_1_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xCEB54B0)
#define CLASS_1_7956089D4F15495C_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xCEB4F70)
#define CLASS_1_7956089D4F15495C_METHOD_1_0D8FBED0B1940013_OFFSET UNITYSDK_OFFSET(0xCEB6FC0)
#define CLASS_1_7956089D4F15495C_METHOD_1_0FE9BC9FD3183AA5_OFFSET UNITYSDK_OFFSET(0xCEB5EB0)
#define CLASS_1_7956089D4F15495C_METHOD_1_16EA4D945E5A263C_OFFSET UNITYSDK_OFFSET(0xCEB6CC0)
#define CLASS_1_7956089D4F15495C_METHOD_1_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0xCEB6990)
#define CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_1_OFFSET UNITYSDK_OFFSET(0xCEB6520)
#define CLASS_1_7956089D4F15495C_METHOD_1_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xCEB6320)
#define CLASS_1_7956089D4F15495C_METHOD_1_3160EACC8F1729F2_OFFSET UNITYSDK_OFFSET(0xCEB7A30)
#define CLASS_1_7956089D4F15495C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCEB50E0)
#define CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0xCEB7970)
#define CLASS_1_7956089D4F15495C_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xCEB78B0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5A5863A8DCA1A489_OFFSET UNITYSDK_OFFSET(0xCEB6AE0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xCEB67F0)
#define CLASS_1_7956089D4F15495C_METHOD_1_5D43E4AD30011C0D_OFFSET UNITYSDK_OFFSET(0xCEB6840)
#define CLASS_1_7956089D4F15495C_METHOD_1_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0xCEB6290)
#define CLASS_1_7956089D4F15495C_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0xCEB7C60)
#define CLASS_1_7956089D4F15495C_METHOD_1_6D19BB7866DAB074_OFFSET UNITYSDK_OFFSET(0xCEB6600)
#define CLASS_1_7956089D4F15495C_METHOD_1_816D3BAAEACF30B4_OFFSET UNITYSDK_OFFSET(0xCEB5960)
#define CLASS_1_7956089D4F15495C_METHOD_1_87BC594271C2D32F_OFFSET UNITYSDK_OFFSET(0xCEB7800)
#define CLASS_1_7956089D4F15495C_METHOD_1_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0xCEB7310)
#define CLASS_1_7956089D4F15495C_METHOD_1_948ABC3EB132D2AE_OFFSET UNITYSDK_OFFSET(0xCEB74A0)
#define CLASS_1_7956089D4F15495C_METHOD_1_9E273918EE1BE07B_OFFSET UNITYSDK_OFFSET(0xCEB66C0)
#define CLASS_1_7956089D4F15495C_METHOD_1_A41007EBE94BB03F_OFFSET UNITYSDK_OFFSET(0xCEB5B50)
#define CLASS_1_7956089D4F15495C_METHOD_1_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0xCEB6090)
#define CLASS_1_7956089D4F15495C_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCEB5410)
#define CLASS_1_7956089D4F15495C_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0xCEB6400)
#define CLASS_1_7956089D4F15495C_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0xCEB73E0)
#define CLASS_1_7956089D4F15495C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xCEB5060)
#define CLASS_1_7956089D4F15495C_METHOD_1_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0xCEB7140)
#define CLASS_1_7956089D4F15495C_METHOD_1_E8DDA2375FB52E85_OFFSET UNITYSDK_OFFSET(0xCEB6E40)
#define CLASS_1_7956089D4F15495C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEB7CB0)
#define CLASS_1_7956089D4F15495C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB5130)

inline static constexpr unsigned int Class_1_7956089D4F15495C_TypeDefinitionIndex = 64745;

class Class_1_7956089D4F15495C : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x68C60);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x68C68);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x68C70);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x68C78);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7956089D4F15495C_TypeDefinitionIndex)->GetStaticField(0x14200);
	}
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B0B12D6DE36A5AD1*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1D06CD7EA6ED349B*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B0B12D6DE36A5AD1*>* Field_1_8; // 0x20
	::System::Collections::Generic::List_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F08A242BEA9D3BCB*>* Field_1_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1D06CD7EA6ED349B*>* Field_1_11; // 0x38
	::RPG::Client::MapDef* Field_1_12; // 0x40
	::System::Collections::Generic::List_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_13; // 0x48
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

	::System::Void Method_1_A41007EBE94BB03F(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_A41007EBE94BB03F_OFFSET))(this, a1);
	}

	::System::Void Method_1_63E3E26A3D57F57D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_63E3E26A3D57F57D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FE9BC9FD3183AA5(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_0FE9BC9FD3183AA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D19BB7866DAB074(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_6D19BB7866DAB074_OFFSET))(this, a1);
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

	::Class_1_F08A242BEA9D3BCB* Method_1_948ABC3EB132D2AE(::Class_1_08C6C0ABAF0F06B3* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* a5)
	{
		return ((::Class_1_F08A242BEA9D3BCB*(*)(::PVOID, ::Class_1_08C6C0ABAF0F06B3*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>*))((::PBYTE)hIl2Cpp + CLASS_1_7956089D4F15495C_METHOD_1_948ABC3EB132D2AE_OFFSET))(this, a1, a2, a3, a4, a5);
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
