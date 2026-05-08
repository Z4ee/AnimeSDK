#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Enum_3_082251DE59B3F291.h"
#include "unitysdk/Enum_3_C7980727AADFEEA1.h"

class AkCallbackInfo;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class AkExternalSourceInfoArray;
class Class_1_43BD383C98B4C0C5_49;
class Class_1_6B6767B6B3C7A169;
class Class_1_C9DFE5EE7107C629;
class Class_3_01E03BF53558728A;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0xF23B1F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET UNITYSDK_OFFSET(0xF237F50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET UNITYSDK_OFFSET(0xF239610)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET UNITYSDK_OFFSET(0xF236860)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET UNITYSDK_OFFSET(0xF23A740)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0E1218D48CCC3E44_OFFSET UNITYSDK_OFFSET(0xF237C80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0xF237570)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xF235C60)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET UNITYSDK_OFFSET(0xF2384F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xF23B060)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET UNITYSDK_OFFSET(0xF239E60)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xF23ABB0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET UNITYSDK_OFFSET(0xF238C90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_49630B7C71D0ECC2_OFFSET UNITYSDK_OFFSET(0xF2399E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4A57A76B72CC63E2_OFFSET UNITYSDK_OFFSET(0xF23A7F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET UNITYSDK_OFFSET(0xF239B20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_552FE643E1E1FAE1_OFFSET UNITYSDK_OFFSET(0xF23B450)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET UNITYSDK_OFFSET(0xF23A3A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_613283CD405C0C49_OFFSET UNITYSDK_OFFSET(0xF237B30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET UNITYSDK_OFFSET(0xF2381F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET UNITYSDK_OFFSET(0xF23A5F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_78C19489DBE9EF91_OFFSET UNITYSDK_OFFSET(0xF237FC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7DD0A50D5E2D9A86_OFFSET UNITYSDK_OFFSET(0xF236460)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET UNITYSDK_OFFSET(0xF239720)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET UNITYSDK_OFFSET(0xF236D20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET UNITYSDK_OFFSET(0xF2394A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET UNITYSDK_OFFSET(0xF23C0F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET UNITYSDK_OFFSET(0xF237600)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_917CFF8A8C98D17B_OFFSET UNITYSDK_OFFSET(0xF237810)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET UNITYSDK_OFFSET(0xF23A0F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0xF239180)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET UNITYSDK_OFFSET(0xF2390A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0xF235D40)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET UNITYSDK_OFFSET(0xF237770)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET UNITYSDK_OFFSET(0xF238750)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0xF23B940)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0xF23B100)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET UNITYSDK_OFFSET(0xF23BCF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET UNITYSDK_OFFSET(0xF238A10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET UNITYSDK_OFFSET(0xF23B2A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET UNITYSDK_OFFSET(0xF23B200)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET UNITYSDK_OFFSET(0xF23B3B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET UNITYSDK_OFFSET(0xF23A260)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0xF238BB0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF239710)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET UNITYSDK_OFFSET(0xF23B4E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF23A310)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xF23C260)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF235C20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0xF238980)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CC6442143E06ECC2_OFFSET UNITYSDK_OFFSET(0xF23ACE0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0xF23A300)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D0AF9F24B5EE0E65_OFFSET UNITYSDK_OFFSET(0xF238590)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET UNITYSDK_OFFSET(0xF237EC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_1_OFFSET UNITYSDK_OFFSET(0xF23BA00)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET UNITYSDK_OFFSET(0xF2378C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_1_OFFSET UNITYSDK_OFFSET(0xF23BE90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_OFFSET UNITYSDK_OFFSET(0xF23B6E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET UNITYSDK_OFFSET(0xF239C10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET UNITYSDK_OFFSET(0xF23AE10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET UNITYSDK_OFFSET(0xF2382A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xF23BC60)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET UNITYSDK_OFFSET(0xF23BC80)
#define CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET UNITYSDK_OFFSET(0xF2374E0)
#define CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0xF2357A0)

inline static constexpr unsigned int Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex = 45553;

class Class_2_8DE695ECCCB0EC2E : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::Comparison_1<::System::UInt32>** StaticGet_Field_2_18()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x44110);
	}
	static ::AkCallbackManager_EventCallback** StaticGet_Field_2_13()
	{
		return (::AkCallbackManager_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x44118);
	}
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::AkExternalSourceInfo* Field_2_11; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_15; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_4; // 0x28
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_9; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Field_2_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x60
	::System::Int32 Field_2_10; // 0x68
	::Enum_3_C7980727AADFEEA1 Field_2_12; // 0x6C
	::System::Boolean Field_2_14; // 0x70
	::System::UInt32 Field_2_1; // 0x74
	::System::Single Field_2_17; // 0x78
	::System::Single Field_2_16; // 0x7C

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::System::Void Method_2_88A16EFB891FC9EE(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_90690918A48E45A4(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_917CFF8A8C98D17B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_917CFF8A8C98D17B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_F14F79029F993562(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_D7F88AD95414EAED(::System::String* a1, ::Class_3_848BA58F81F05F34* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34_1* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_03759C6A1C90937C(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_78C19489DBE9EF91(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_78C19489DBE9EF91_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_F4E441573F5682C4(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_25F260E00831A836(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E47A80F5343332A(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3FC144795A20130(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A564D5662A43279(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET))(this, a1);
	}

	::System::Void Method_2_90690918A48E45A4_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0456D4096F97D062(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::UInt32 Method_2_8258C64C691BC736(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkExternalSourceInfoArray* a3, ::Class_3_848BA58F81F05F34* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkExternalSourceInfoArray*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Enum_3_082251DE59B3F291 Method_2_4E309606BB74969D(::System::UInt32 a1)
	{
		return ((::Enum_3_082251DE59B3F291(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET))(this, a1);
	}

	::System::Single Method_2_F4E441573F5682C4_1(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A084EE7A07D3DBF(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_928E49D6F3186E0D(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0E1218D48CCC3E44(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0E1218D48CCC3E44_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_BAA70F0841022C48(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CFC9F367B4D1EE0(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_3_848BA58F81F05F34* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_7710CA4BBA303D1F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_0D302415DB249C57(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4A57A76B72CC63E2(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4A57A76B72CC63E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0988E2BBDE70BE12(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_CC6442143E06ECC2(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CC6442143E06ECC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_F4E441573F5682C4_2(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Method_2_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::Single Method_2_BAA70F0841022C48_1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9959980917CF801(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_BAA70F0841022C48_2(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7DD0A50D5E2D9A86(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7DD0A50D5E2D9A86_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_552FE643E1E1FAE1(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_552FE643E1E1FAE1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_9D07F15C45300921(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET))(this, a1);
	}

	::AKRESULT Method_2_C903B9A258762EA2(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_613283CD405C0C49(::System::String* a1, ::Class_3_848BA58F81F05F34* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34_1* a4, ::System::UInt32 a5, ::AkCallbackManager_EventCallback* a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_613283CD405C0C49_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_2_F1B852D123907C25(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_49630B7C71D0ECC2(::Class_1_43BD383C98B4C0C5_49* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_49*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_49630B7C71D0ECC2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::Void Method_2_7399778C35E185A4(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F14F79029F993562_1(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Void Method_2_95D919A3FFE39CED(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET))(this, a1);
	}

	::System::Void Method_2_96CD9F065CF8AC53(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_2_FF63BF165AF8032A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B3FC144795A20130_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D0AF9F24B5EE0E65(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D0AF9F24B5EE0E65_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_F1B852D123907C25_1(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_90690918A48E45A4_2(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
