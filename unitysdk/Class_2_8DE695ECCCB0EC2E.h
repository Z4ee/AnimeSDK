#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Enum_3_C7980727AADFEEA1.h"
#include "unitysdk/Enum_3_DD3AE3B6968036D4.h"

class AkCallbackInfo;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class AkExternalSourceInfoArray;
class Class_1_43BD383C98B4C0C5_51;
class Class_1_C9DFE5EE7107C629_1;
class Class_1_D6F39883402F739C;
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

#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x16193540)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET UNITYSDK_OFFSET(0x161913F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03E6884BF89AAD84_OFFSET UNITYSDK_OFFSET(0x1618F1C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03EEA374DA3B6BA1_OFFSET UNITYSDK_OFFSET(0x161918C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET UNITYSDK_OFFSET(0x161929D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_09B765ED30BA31D1_OFFSET UNITYSDK_OFFSET(0x16191170)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET UNITYSDK_OFFSET(0x1618FB10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x1618FBC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1618B1F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_12B3ECEFB802222A_OFFSET UNITYSDK_OFFSET(0x1618D1A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1F84617E5669C898_OFFSET UNITYSDK_OFFSET(0x161919B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25023068AEAA3AFC_OFFSET UNITYSDK_OFFSET(0x16191A20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16192AE0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x161928A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET UNITYSDK_OFFSET(0x16190440)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3B302FAB878477D9_OFFSET UNITYSDK_OFFSET(0x1618DB30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3D5C93264E75DCCC_OFFSET UNITYSDK_OFFSET(0x1618C540)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_41F165193FD543BE_OFFSET UNITYSDK_OFFSET(0x16190970)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_44F64BAB38B34576_OFFSET UNITYSDK_OFFSET(0x1618DC90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4C61ABC7B37171EC_OFFSET UNITYSDK_OFFSET(0x1618E210)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET UNITYSDK_OFFSET(0x16191CF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5262415FF4A9D1DD_OFFSET UNITYSDK_OFFSET(0x16191DE0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET UNITYSDK_OFFSET(0x16192F50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_634BCF4C65B50CBB_OFFSET UNITYSDK_OFFSET(0x1618B2D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_64AAA9BC982250CA_OFFSET UNITYSDK_OFFSET(0x1618FEC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6529F9B596F1957F_OFFSET UNITYSDK_OFFSET(0x1618D620)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6EADA3E23C3D0D9B_OFFSET UNITYSDK_OFFSET(0x1618E810)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET UNITYSDK_OFFSET(0x16191760)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7ED3F9A51CDFA91B_OFFSET UNITYSDK_OFFSET(0x161900F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET UNITYSDK_OFFSET(0x16192370)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET UNITYSDK_OFFSET(0x1618CA30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET UNITYSDK_OFFSET(0x16192730)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET UNITYSDK_OFFSET(0x16191460)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET UNITYSDK_OFFSET(0x16191000)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_924327E5602228EE_OFFSET UNITYSDK_OFFSET(0x16192CC0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET UNITYSDK_OFFSET(0x1618D4B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET UNITYSDK_OFFSET(0x16190890)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET UNITYSDK_OFFSET(0x1618EED0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0x161902F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A5305D29E780C345_OFFSET UNITYSDK_OFFSET(0x1618BE80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x16191670)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET UNITYSDK_OFFSET(0x16193550)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET UNITYSDK_OFFSET(0x1618DEE0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B765513E96DE6299_OFFSET UNITYSDK_OFFSET(0x1618E8D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET UNITYSDK_OFFSET(0x16192620)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET UNITYSDK_OFFSET(0x161915D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET UNITYSDK_OFFSET(0x16192C20)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET UNITYSDK_OFFSET(0x1618E520)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x1618E080)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16192C10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET UNITYSDK_OFFSET(0x16190E00)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1618E180)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x161903B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x16192B80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1618AF10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0x161931A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x16193530)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7D6C1F91C9B3DDE_1_OFFSET UNITYSDK_OFFSET(0x16193230)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7D6C1F91C9B3DDE_OFFSET UNITYSDK_OFFSET(0x1618FC50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET UNITYSDK_OFFSET(0x161934A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D867384D54FBC6C7_OFFSET UNITYSDK_OFFSET(0x1618F250)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D87355262E48A27D_OFFSET UNITYSDK_OFFSET(0x16190190)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DEB2666960E10B26_OFFSET UNITYSDK_OFFSET(0x1618F370)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x1618AF50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET UNITYSDK_OFFSET(0x1618D8D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET UNITYSDK_OFFSET(0x1618F8C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET UNITYSDK_OFFSET(0x1618E5C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET UNITYSDK_OFFSET(0x1618EF70)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1618E160)
#define CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1618D110)
#define CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1618AA10)

inline static constexpr unsigned int Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex = 44022;

class Class_2_8DE695ECCCB0EC2E : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::Comparison_1<::System::UInt32>** StaticGet_Field_2_21()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x45F90);
	}
	static ::AkCallbackManager_EventCallback** StaticGet_Field_2_19()
	{
		return (::AkCallbackManager_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x45F98);
	}
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_10; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_27; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_18; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_16; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D6F39883402F739C*>* Field_2_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_9; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_20; // 0x58
	::AkExternalSourceInfo* Field_2_13; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_15; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_5; // 0x70
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_2_11; // 0x78
	::Enum_3_C7980727AADFEEA1 Field_2_12; // 0x80
	::System::Single Field_2_23; // 0x84
	::System::UInt32 Field_2_7; // 0x88
	::System::Boolean Field_2_17; // 0x8C
	::System::Single Field_2_22; // 0x90
	::System::Int32 Field_2_14; // 0x94

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_634BCF4C65B50CBB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_634BCF4C65B50CBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_88A16EFB891FC9EE(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12B3ECEFB802222A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_12B3ECEFB802222A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_F14F79029F993562(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F14F79029F993562_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B3FC144795A20130(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_44F64BAB38B34576(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_44F64BAB38B34576_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_BAA70F0841022C48(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET))(this, a1);
	}

	::System::Void Method_2_6EADA3E23C3D0D9B(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6EADA3E23C3D0D9B_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_4C61ABC7B37171EC(::Class_1_43BD383C98B4C0C5_51* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_51*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4C61ABC7B37171EC_OFFSET))(this, a1);
	}

	::Class_1_D6F39883402F739C* Method_2_9D07F15C45300921(::System::UInt32 a1)
	{
		return ((::Class_1_D6F39883402F739C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET))(this, a1);
	}

	::System::Single Method_2_F4E441573F5682C4(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_03E6884BF89AAD84(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03E6884BF89AAD84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DEB2666960E10B26(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DEB2666960E10B26_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_F4E441573F5682C4_1(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0D302415DB249C57(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_D7D6C1F91C9B3DDE(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7D6C1F91C9B3DDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_64AAA9BC982250CA(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_64AAA9BC982250CA_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_3B302FAB878477D9(::System::String* a1, ::Class_3_848BA58F81F05F34* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34_1* a4, ::System::UInt32 a5, ::AkCallbackManager_EventCallback* a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3B302FAB878477D9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_7ED3F9A51CDFA91B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7ED3F9A51CDFA91B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D87355262E48A27D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D87355262E48A27D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_6529F9B596F1957F(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_6529F9B596F1957F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A564D5662A43279(::Class_1_D6F39883402F739C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D6F39883402F739C*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET))(this, a1);
	}

	::AKRESULT Method_2_C903B9A258762EA2(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C903B9A258762EA2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_90690918A48E45A4(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D867384D54FBC6C7(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D867384D54FBC6C7_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_09B765ED30BA31D1(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_09B765ED30BA31D1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_03759C6A1C90937C(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03759C6A1C90937C_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BAA70F0841022C48_1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F165193FD543BE(::Class_1_D6F39883402F739C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D6F39883402F739C*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_41F165193FD543BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7710CA4BBA303D1F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3D5C93264E75DCCC(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3D5C93264E75DCCC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96CD9F065CF8AC53(::Class_1_D6F39883402F739C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D6F39883402F739C*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_96CD9F065CF8AC53_OFFSET))(this, a1);
	}

	::System::Void Method_2_03EEA374DA3B6BA1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_03EEA374DA3B6BA1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1F84617E5669C898(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1F84617E5669C898_OFFSET))(this, a1, a2);
	}

	::Enum_3_DD3AE3B6968036D4 Method_2_4E309606BB74969D(::System::UInt32 a1)
	{
		return ((::Enum_3_DD3AE3B6968036D4(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A5305D29E780C345(::Class_1_D6F39883402F739C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D6F39883402F739C*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A5305D29E780C345_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_8258C64C691BC736(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkExternalSourceInfoArray* a3, ::Class_3_848BA58F81F05F34* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkExternalSourceInfoArray*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8258C64C691BC736_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_B9959980917CF801(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B9959980917CF801_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_90690918A48E45A4_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_25023068AEAA3AFC(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25023068AEAA3AFC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_90690918A48E45A4_2(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_90690918A48E45A4_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0456D4096F97D062(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0456D4096F97D062_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_2_F4E441573F5682C4_2(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_B765513E96DE6299(::Class_1_43BD383C98B4C0C5_51* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_51*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B765513E96DE6299_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BAA70F0841022C48_2(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_928E49D6F3186E0D(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET))(this, a1);
	}

	::Class_1_D6F39883402F739C* Method_2_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_D6F39883402F739C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Void Method_2_924327E5602228EE(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_924327E5602228EE_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_5CFC9F367B4D1EE0(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_3_848BA58F81F05F34* a4, ::Class_3_01E03BF53558728A* a5, ::Class_3_848BA58F81F05F34_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_D7D6C1F91C9B3DDE_1(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7D6C1F91C9B3DDE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_D7F88AD95414EAED(::System::String* a1, ::Class_3_848BA58F81F05F34* a2, ::Class_3_01E03BF53558728A* a3, ::Class_3_848BA58F81F05F34_1* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_5262415FF4A9D1DD(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5262415FF4A9D1DD_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D6F39883402F739C*>* Method_2_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D6F39883402F739C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::Void Method_2_B3FC144795A20130_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B3FC144795A20130_1_OFFSET))(this, a1, a2, a3);
	}
};
