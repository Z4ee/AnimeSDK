#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01CE0B13E11F09E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_6C2E46293F2AE988;
class Class_2_A9A857AD270B9CE1;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1A39E1B51756BF41_CLEAN_OFFSET UNITYSDK_OFFSET(0x1477B470)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_0224BA31D8CF4F03_OFFSET UNITYSDK_OFFSET(0x1477DD80)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x1477DBB0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1477E560)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x1477B590)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1477DD70)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_260A35D9FE494ED5_OFFSET UNITYSDK_OFFSET(0x1477D3D0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_36379395234B1A4B_OFFSET UNITYSDK_OFFSET(0x1477C750)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0x1477E500)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_3B715A5BDC8D2777_OFFSET UNITYSDK_OFFSET(0x14755D20)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_3DE76049F295E746_OFFSET UNITYSDK_OFFSET(0x1477C680)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_3F9B81340AF3920D_OFFSET UNITYSDK_OFFSET(0x1477DC70)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x1477E3C0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_463E3811061BC127_OFFSET UNITYSDK_OFFSET(0x1477E2F0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x1477BA30)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_51DA1CFE53F39BEE_OFFSET UNITYSDK_OFFSET(0x1477C5F0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x1477DB30)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_6DBFA13CB9E897E0_OFFSET UNITYSDK_OFFSET(0x1477D350)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_70EC476DADA4E786_OFFSET UNITYSDK_OFFSET(0x1477C6A0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_89E373C22B290800_OFFSET UNITYSDK_OFFSET(0x1477D870)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1477DB20)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1477CCD0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_9B0CDEC02D602F84_OFFSET UNITYSDK_OFFSET(0x1477DDE0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x1477E3B0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x1477C4A0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_A73B8662804238D6_1_OFFSET UNITYSDK_OFFSET(0x1477CE50)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_A73B8662804238D6_OFFSET UNITYSDK_OFFSET(0x1477BBA0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_AE7FCE81F1E9DC9B_OFFSET UNITYSDK_OFFSET(0x1477C7B0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_AF0383B32411EDFF_OFFSET UNITYSDK_OFFSET(0x1477B290)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1477E5F0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_AFEB0530F4ADCDCF_OFFSET UNITYSDK_OFFSET(0x1477D980)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_B1E3EF67E57221AF_OFFSET UNITYSDK_OFFSET(0x1477D170)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_B8A5492DD2AC8FB2_OFFSET UNITYSDK_OFFSET(0x1477C280)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1477C0B0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1477BB10)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_D4B3608B292F0A4E_OFFSET UNITYSDK_OFFSET(0x1477C550)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x1477D800)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_E02678853480F0D2_OFFSET UNITYSDK_OFFSET(0x1477D090)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_E6419B7F33F6364C_OFFSET UNITYSDK_OFFSET(0x1477BE90)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_E78871CB5AF125C0_OFFSET UNITYSDK_OFFSET(0x1477BDE0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x1477E4D0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_EDB6F2F040E5B085_OFFSET UNITYSDK_OFFSET(0x1477DE00)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1477E5C0)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1477D960)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x1477C010)
#define CLASS_2_1A39E1B51756BF41_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1477E5D0)
#define CLASS_2_1A39E1B51756BF41__CCTOR_OFFSET UNITYSDK_OFFSET(0x1477B970)
#define CLASS_2_1A39E1B51756BF41__CTOR_OFFSET UNITYSDK_OFFSET(0x1477B910)

inline static constexpr unsigned int Class_2_1A39E1B51756BF41_TypeDefinitionIndex = 75772;

class Class_2_1A39E1B51756BF41 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_1A39E1B51756BF41*>** StaticGet_Field_2_8()
	{
		return (::Foundation::ObjectPool_1<::Class_2_1A39E1B51756BF41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A39E1B51756BF41_TypeDefinitionIndex)->GetStaticField(0x39BB0);
	}
	static ::System::Single* StaticGet_Field_2_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A39E1B51756BF41_TypeDefinitionIndex)->GetStaticField(0xE370);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A39E1B51756BF41_TypeDefinitionIndex)->GetStaticField(0xE374);
	}
	static ::System::Single* StaticGet_Field_2_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A39E1B51756BF41_TypeDefinitionIndex)->GetStaticField(0xE378);
	}
	::UnityEngine::CanvasGroup* Field_2_3; // 0x20
	::Class_1_6C2E46293F2AE988* Field_2_6; // 0x28
	::UnityEngine::Material* Field_2_12; // 0x30
	::UnityEngine::Material* Field_2_14; // 0x38
	::Foundation::AssetPath Field_2_4; // 0x40
	::UnityEngine::Material* Field_2_9; // 0x50
	::UnityEngine::Material* Field_2_11; // 0x58
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::UnityEngine::Material* Field_2_13; // 0x68
	::Foundation::AssetRequestHandle Field_2_5; // 0x70
	::Class_2_A9A857AD270B9CE1* Field_2_1; // 0x90
	::Foundation::AssetPath Field_2_10; // 0x98
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0xA8
	::System::Boolean Field_2_16; // 0xAC
	::System::Boolean Field_2_15; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41__CCTOR_OFFSET))();
	}

	::System::Void Method_2_AF0383B32411EDFF(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_AF0383B32411EDFF_OFFSET))(this, a1, a2);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_CLEAN_OFFSET))(this);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A73B8662804238D6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_A73B8662804238D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E78871CB5AF125C0(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_E78871CB5AF125C0_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_1A39E1B51756BF41* Method_2_3B715A5BDC8D2777(::Class_2_A9A857AD270B9CE1* a1, ::UnityEngine::UI::Image* a2)
	{
		return ((::Class_2_1A39E1B51756BF41*(*)(::Class_2_A9A857AD270B9CE1*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_3B715A5BDC8D2777_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_B8A5492DD2AC8FB2(::Foundation::AssetPath a1, ::System::Action_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_B8A5492DD2AC8FB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_2_D4B3608B292F0A4E(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_D4B3608B292F0A4E_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_2_3DE76049F295E746()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_3DE76049F295E746_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_70EC476DADA4E786_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_36379395234B1A4B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_36379395234B1A4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE7FCE81F1E9DC9B(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_AE7FCE81F1E9DC9B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A73B8662804238D6_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_A73B8662804238D6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E02678853480F0D2(::UnityEngine::Sprite* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_E02678853480F0D2_OFFSET))(this, a1);
	}

	::System::Single Method_2_B1E3EF67E57221AF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_B1E3EF67E57221AF_OFFSET))(this);
	}

	::System::Boolean Method_2_6DBFA13CB9E897E0(::Foundation::AssetPath a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_6DBFA13CB9E897E0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_2_51DA1CFE53F39BEE(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_51DA1CFE53F39BEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_89E373C22B290800(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_89E373C22B290800_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_AFEB0530F4ADCDCF(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_AFEB0530F4ADCDCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_6C2E46293F2AE988* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C2E46293F2AE988*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6419B7F33F6364C(::Class_2_A9A857AD270B9CE1* a1, ::UnityEngine::UI::Image* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_E6419B7F33F6364C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::String* Method_2_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_6929C20FCC70C1A3_OFFSET))(this);
	}

	static ::Class_2_1A39E1B51756BF41* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_1A39E1B51756BF41*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	::System::Boolean Method_2_3F9B81340AF3920D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_3F9B81340AF3920D_OFFSET))(this, a1, a2);
	}

	::Class_1_6C2E46293F2AE988* Method_2_24748FC20F375725()
	{
		return ((::Class_1_6C2E46293F2AE988*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_0224BA31D8CF4F03()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_0224BA31D8CF4F03_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_2_9B0CDEC02D602F84()
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_9B0CDEC02D602F84_OFFSET))(this);
	}

	::System::Boolean Method_2_EDB6F2F040E5B085(::Foundation::AssetPath a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_EDB6F2F040E5B085_OFFSET))(this, a1);
	}

	::System::Void Method_2_463E3811061BC127(::System::String* a1, ::System::Action_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_463E3811061BC127_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_9CC926D36F34DBFF_OFFSET))(this);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Boolean Method_2_260A35D9FE494ED5(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_260A35D9FE494ED5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_E8024D1B75A10789_OFFSET))(this);
	}

	::System::Void Method_2_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_3B01BE9C2045A2D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}
};
