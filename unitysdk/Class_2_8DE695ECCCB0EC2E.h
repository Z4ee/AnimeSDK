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
class Class_1_43BD383C98B4C0C5_64;
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

#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x1687DBF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET UNITYSDK_OFFSET(0x1687C250)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03EEA374DA3B6BA1_OFFSET UNITYSDK_OFFSET(0x1687DFA0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET UNITYSDK_OFFSET(0x1687E830)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET UNITYSDK_OFFSET(0x16879930)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET UNITYSDK_OFFSET(0x1687F160)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x1687BFF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16878CB0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET UNITYSDK_OFFSET(0x1687E680)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1687C1B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET UNITYSDK_OFFSET(0x16843570)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1687EAE0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET UNITYSDK_OFFSET(0x1687AC50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4A57A76B72CC63E2_OFFSET UNITYSDK_OFFSET(0x1687ECB0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4D4F3DEB7325FA52_OFFSET UNITYSDK_OFFSET(0x1687C430)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET UNITYSDK_OFFSET(0x1687D5E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_552FE643E1E1FAE1_OFFSET UNITYSDK_OFFSET(0x1687D4C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET UNITYSDK_OFFSET(0x1687B7F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6B648099C1DD1F91_OFFSET UNITYSDK_OFFSET(0x1687C5E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET UNITYSDK_OFFSET(0x1687A5F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET UNITYSDK_OFFSET(0x1687DAA0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_78C19489DBE9EF91_OFFSET UNITYSDK_OFFSET(0x1687DC00)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7DD0A50D5E2D9A86_OFFSET UNITYSDK_OFFSET(0x16879500)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET UNITYSDK_OFFSET(0x1687BA40)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET UNITYSDK_OFFSET(0x16879DF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8C126DB88A753E0D_OFFSET UNITYSDK_OFFSET(0x1684A440)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET UNITYSDK_OFFSET(0x1687C2C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET UNITYSDK_OFFSET(0x1687DE30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET UNITYSDK_OFFSET(0x1687B5E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET UNITYSDK_OFFSET(0x1687D350)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0x1687B060)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET UNITYSDK_OFFSET(0x1687A8F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x16878D90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET UNITYSDK_OFFSET(0x1687B750)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET UNITYSDK_OFFSET(0x168429F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0x1687D9E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A43D3604534FA49B_OFFSET UNITYSDK_OFFSET(0x168460E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x1687F070)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET UNITYSDK_OFFSET(0x1687E940)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET UNITYSDK_OFFSET(0x1687CC20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET UNITYSDK_OFFSET(0x1687D8D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET UNITYSDK_OFFSET(0x1687E5E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET UNITYSDK_OFFSET(0x1687E790)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET UNITYSDK_OFFSET(0x1687BF50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x1687CDC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1687EC10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET UNITYSDK_OFFSET(0x1687D6D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1687E090)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1687E550)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1687EC20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16878A00)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0x1687D550)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CC6442143E06ECC2_OFFSET UNITYSDK_OFFSET(0x1687C080)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x1687E930)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D0AF9F24B5EE0E65_OFFSET UNITYSDK_OFFSET(0x1687E390)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET UNITYSDK_OFFSET(0x1687A560)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x16878A40)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_1_OFFSET UNITYSDK_OFFSET(0x1687E120)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET UNITYSDK_OFFSET(0x1687B380)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_1_OFFSET UNITYSDK_OFFSET(0x1687CEA0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_OFFSET UNITYSDK_OFFSET(0x1687A9F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET UNITYSDK_OFFSET(0x1687BD00)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET UNITYSDK_OFFSET(0x1687D100)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET UNITYSDK_OFFSET(0x1687A6A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1687A9D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET UNITYSDK_OFFSET(0x1687E720)
#define CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1687A4D0)
#define CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x16878550)

inline static constexpr unsigned int Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex = 72416;

class Class_2_8DE695ECCCB0EC2E : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::Comparison_1<::System::UInt32>** StaticGet_Field_2_19()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x3E130);
	}
	static ::AkCallbackManager_EventCallback** StaticGet_Field_2_13()
	{
		return (::AkCallbackManager_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x3E138);
	}
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_9; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_14; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_16; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x40
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_2_5; // 0x48
	::AkExternalSourceInfo* Field_2_11; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Field_2_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_4; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x68
	::System::Single Field_2_18; // 0x70
	::System::Boolean Field_2_15; // 0x74
	::System::Int32 Field_2_10; // 0x78
	::System::Single Field_2_17; // 0x7C
	::Enum_3_C7980727AADFEEA1 Field_2_12; // 0x80
	::System::UInt32 Field_2_1; // 0x84

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

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
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

	::System::UInt32 Method_2_D7F88AD95414EAED(::System::String* a1, ::Class_3_848BA58F81F05F34_1* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7399778C35E185A4(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_F4E441573F5682C4(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_96CD9F065CF8AC53(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::UInt32 Method_2_F1B852D123907C25(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_3A564D5662A43279(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_F14F79029F993562(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_90690918A48E45A4(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_5CFC9F367B4D1EE0(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_3_848BA58F81F05F34_1* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Single Method_2_F4E441573F5682C4_1(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_BAA70F0841022C48(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E47A80F5343332A(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_CC6442143E06ECC2(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CC6442143E06ECC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_03759C6A1C90937C(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_4D4F3DEB7325FA52(::Class_1_43BD383C98B4C0C5_64* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_64*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4D4F3DEB7325FA52_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3FC144795A20130(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_90690918A48E45A4_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F1B852D123907C25_1(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F1B852D123907C25_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_F4E441573F5682C4_2(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_95D919A3FFE39CED(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_552FE643E1E1FAE1(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_552FE643E1E1FAE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::Enum_3_082251DE59B3F291 Method_2_4E309606BB74969D(::System::UInt32 a1)
	{
		return ((::Enum_3_082251DE59B3F291(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET))(this, a1);
	}

	::AKRESULT Method_2_C903B9A258762EA2(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_6B648099C1DD1F91(::Class_1_43BD383C98B4C0C5_64* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_64*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6B648099C1DD1F91_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9959980917CF801(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::Void Method_2_7710CA4BBA303D1F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Method_2_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::Void Method_2_78C19489DBE9EF91(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_78C19489DBE9EF91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_90690918A48E45A4_2(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_03EEA374DA3B6BA1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03EEA374DA3B6BA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2A084EE7A07D3DBF(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F14F79029F993562_1(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_D0AF9F24B5EE0E65(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D0AF9F24B5EE0E65_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Single Method_2_BAA70F0841022C48_1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_25F260E00831A836(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FF63BF165AF8032A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BAA70F0841022C48_2(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0988E2BBDE70BE12(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0456D4096F97D062(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Void Method_2_B3FC144795A20130_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_9D07F15C45300921(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_928E49D6F3186E0D(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_8258C64C691BC736(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkExternalSourceInfoArray* a3, ::Class_3_848BA58F81F05F34_1* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkExternalSourceInfoArray*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_7DD0A50D5E2D9A86(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7DD0A50D5E2D9A86_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_4A57A76B72CC63E2(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4A57A76B72CC63E2_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_8C126DB88A753E0D(::System::String* a1, ::Class_3_848BA58F81F05F34_1* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34* a4, ::System::UInt32 a5, ::AkCallbackManager_EventCallback* a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8C126DB88A753E0D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_2_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_A43D3604534FA49B(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A43D3604534FA49B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_0D302415DB249C57(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
