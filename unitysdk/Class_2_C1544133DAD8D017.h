#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD.h"
#include "unitysdk/Enum_3_91322E66F4CC7ECA.h"
#include "unitysdk/Enum_3_9D7A1FBB6B28B95D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/Struct_2_105AD8F97CF5121C.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_286;
class Class_1_11A6C6850BA04D5F;
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole { class MonoSkipDitherCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_C1544133DAD8D017_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179BFB50)
#define CLASS_2_C1544133DAD8D017_METHOD_2_0B95AB08ADAE3CF8_OFFSET UNITYSDK_OFFSET(0x179C4ED0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_10DA236D7F5B18F9_OFFSET UNITYSDK_OFFSET(0x179C72F0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_19B5F2C5B5352980_OFFSET UNITYSDK_OFFSET(0x179C6300)
#define CLASS_2_C1544133DAD8D017_METHOD_2_243B47BFD2EED9E6_OFFSET UNITYSDK_OFFSET(0x179C7A20)
#define CLASS_2_C1544133DAD8D017_METHOD_2_31B9CBEA334E098A_OFFSET UNITYSDK_OFFSET(0x179C23A0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_3478CBAFE42ED8E1_OFFSET UNITYSDK_OFFSET(0x179C7A40)
#define CLASS_2_C1544133DAD8D017_METHOD_2_36E6049D537BF6AE_OFFSET UNITYSDK_OFFSET(0x179C6730)
#define CLASS_2_C1544133DAD8D017_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x179C6540)
#define CLASS_2_C1544133DAD8D017_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x179C06B0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x179C6F40)
#define CLASS_2_C1544133DAD8D017_METHOD_2_447DC2FFDD0AFE94_OFFSET UNITYSDK_OFFSET(0x179C0A70)
#define CLASS_2_C1544133DAD8D017_METHOD_2_4BDF3AD2D2C88680_OFFSET UNITYSDK_OFFSET(0x179C4000)
#define CLASS_2_C1544133DAD8D017_METHOD_2_561D8F24FFF54197_OFFSET UNITYSDK_OFFSET(0x179C6420)
#define CLASS_2_C1544133DAD8D017_METHOD_2_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0x179C0000)
#define CLASS_2_C1544133DAD8D017_METHOD_2_59BE5672A27FB4D0_OFFSET UNITYSDK_OFFSET(0x179C1980)
#define CLASS_2_C1544133DAD8D017_METHOD_2_5A449DAD1668B956_OFFSET UNITYSDK_OFFSET(0x179C6590)
#define CLASS_2_C1544133DAD8D017_METHOD_2_66625B9A7103FF67_OFFSET UNITYSDK_OFFSET(0x179C7DF0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_66A038FD5DBE6F9A_1_OFFSET UNITYSDK_OFFSET(0x179C6E10)
#define CLASS_2_C1544133DAD8D017_METHOD_2_66A038FD5DBE6F9A_OFFSET UNITYSDK_OFFSET(0x179C6090)
#define CLASS_2_C1544133DAD8D017_METHOD_2_763F898FE71EA546_OFFSET UNITYSDK_OFFSET(0x179C17A0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x179C6B80)
#define CLASS_2_C1544133DAD8D017_METHOD_2_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0x179C0260)
#define CLASS_2_C1544133DAD8D017_METHOD_2_813D2C93BFE6E56D_OFFSET UNITYSDK_OFFSET(0x179C6DA0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x179C6CE0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x179C7C30)
#define CLASS_2_C1544133DAD8D017_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x179C7A30)
#define CLASS_2_C1544133DAD8D017_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x179C5290)
#define CLASS_2_C1544133DAD8D017_METHOD_2_8DD2944EA2ADD8C7_OFFSET UNITYSDK_OFFSET(0x179C62B0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_91C49E403D4C5D47_OFFSET UNITYSDK_OFFSET(0x179C0920)
#define CLASS_2_C1544133DAD8D017_METHOD_2_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x179C5F10)
#define CLASS_2_C1544133DAD8D017_METHOD_2_9990763B5163E37F_1_OFFSET UNITYSDK_OFFSET(0x179C7280)
#define CLASS_2_C1544133DAD8D017_METHOD_2_9990763B5163E37F_OFFSET UNITYSDK_OFFSET(0x179C6FF0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_9DECD7BC1C617AF4_OFFSET UNITYSDK_OFFSET(0x179C2100)
#define CLASS_2_C1544133DAD8D017_METHOD_2_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x179C6030)
#define CLASS_2_C1544133DAD8D017_METHOD_2_A090DF776A2F09CA_OFFSET UNITYSDK_OFFSET(0x179C4D80)
#define CLASS_2_C1544133DAD8D017_METHOD_2_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x179C2590)
#define CLASS_2_C1544133DAD8D017_METHOD_2_ADAE84B98D00E7E3_OFFSET UNITYSDK_OFFSET(0x179C61C0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_B5593B8F8D0D1343_OFFSET UNITYSDK_OFFSET(0x179C7CD0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_BAA2E6A42078A6BC_OFFSET UNITYSDK_OFFSET(0x179C7060)
#define CLASS_2_C1544133DAD8D017_METHOD_2_C42C3C915376D64C_OFFSET UNITYSDK_OFFSET(0x179C6A50)
#define CLASS_2_C1544133DAD8D017_METHOD_2_D60D92AB14605D56_OFFSET UNITYSDK_OFFSET(0x179C7C40)
#define CLASS_2_C1544133DAD8D017_METHOD_2_D6C5AE0772FA5F93_OFFSET UNITYSDK_OFFSET(0x179C1D50)
#define CLASS_2_C1544133DAD8D017_METHOD_2_DB21D8D1515B47C6_OFFSET UNITYSDK_OFFSET(0x179C1EE0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_EE3A4E396E0061E4_OFFSET UNITYSDK_OFFSET(0x179C40B0)
#define CLASS_2_C1544133DAD8D017_METHOD_2_EF036CC46C57C9EA_OFFSET UNITYSDK_OFFSET(0x179C1C90)
#define CLASS_2_C1544133DAD8D017_METHOD_2_F405E1D779D61234_OFFSET UNITYSDK_OFFSET(0x179C3E70)
#define CLASS_2_C1544133DAD8D017_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x179C4C30)
#define CLASS_2_C1544133DAD8D017_ONCREATE_OFFSET UNITYSDK_OFFSET(0x179BF2C0)
#define CLASS_2_C1544133DAD8D017__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C0610)
#define CLASS_2_C1544133DAD8D017__CTOR_OFFSET UNITYSDK_OFFSET(0x179C0510)

inline static constexpr unsigned int Class_2_C1544133DAD8D017_TypeDefinitionIndex = 64311;

class Class_2_C1544133DAD8D017 : public ::Foundation::SingletonDisposable_1<::Class_2_C1544133DAD8D017*>
{
public:
	static ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>** StaticGet_Field_2_9()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1544133DAD8D017_TypeDefinitionIndex)->GetStaticField(0x42790);
	}
	static ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>** StaticGet_Field_2_10()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1544133DAD8D017_TypeDefinitionIndex)->GetStaticField(0x42798);
	}
	// static const ::System::String* Field_2_18; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* Field_2_16; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_2_2; // 0x18
	::Struct_2_105AD8F97CF5121C Field_2_0; // 0x20
	::System::String* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*>* Field_2_19; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_6; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD>* Field_2_21; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x60
	::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* Field_2_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_11A6C6850BA04D5F*>* Field_2_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* Field_2_15; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_2_17; // 0x80
	::System::Single Field_2_12; // 0x88
	::System::Int32 Field_2_4; // 0x8C
	::System::Single Field_2_11; // 0x90
	::System::Int32 Field_2_20; // 0x94
	::System::Int32 Field_2_3; // 0x98
	::System::Boolean Field_2_1; // 0x9C
	::MoleMole::Config::CameraDitherLayerData Field_2_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Int32 Method_2_91C49E403D4C5D47(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_91C49E403D4C5D47_OFFSET))(this, a1);
	}

	::System::Void Method_2_447DC2FFDD0AFE94(::UnityEngine::Collider* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_447DC2FFDD0AFE94_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D6C5AE0772FA5F93(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_D6C5AE0772FA5F93_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB21D8D1515B47C6(::System::String* a1, ::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_DB21D8D1515B47C6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_59BE5672A27FB4D0(::UnityEngine::Collider* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_59BE5672A27FB4D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DECD7BC1C617AF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_9DECD7BC1C617AF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_31B9CBEA334E098A(::UnityEngine::Material* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_31B9CBEA334E098A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A21BBA85D4EF7B41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_A21BBA85D4EF7B41_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BDF3AD2D2C88680(::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_4BDF3AD2D2C88680_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE3A4E396E0061E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_EE3A4E396E0061E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_2_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_0B95AB08ADAE3CF8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_0B95AB08ADAE3CF8_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_66A038FD5DBE6F9A(::UnityEngine::Collider* a1, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_66A038FD5DBE6F9A_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_ADAE84B98D00E7E3(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_ADAE84B98D00E7E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DD2944EA2ADD8C7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_8DD2944EA2ADD8C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_19B5F2C5B5352980(::UnityEngine::Material* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_19B5F2C5B5352980_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_561D8F24FFF54197(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_561D8F24FFF54197_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Single Method_2_5A449DAD1668B956(::UnityEngine::Vector3 a1, ::MoleMole::CharacterCameraDitheringData& a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData&))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_5A449DAD1668B956_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_36E6049D537BF6AE(::UnityEngine::Vector3 a1, ::MoleMole::CharacterCameraDitheringData a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_36E6049D537BF6AE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_C42C3C915376D64C(::UnityEngine::Collider* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_C42C3C915376D64C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_79D572573E1F9B29_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_763F898FE71EA546(::UnityEngine::Collider* a1, ::Class_0_16E4307DCC419505_286*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_286*&))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_763F898FE71EA546_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_F405E1D779D61234(::Class_1_11A6C6850BA04D5F* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A6C6850BA04D5F*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_F405E1D779D61234_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_813D2C93BFE6E56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_813D2C93BFE6E56D_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_66A038FD5DBE6F9A_1(::UnityEngine::Collider* a1, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_66A038FD5DBE6F9A_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EF036CC46C57C9EA(::UnityEngine::Collider* a1, ::MoleMole::MonoSkipDitherCollider*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::MoleMole::MonoSkipDitherCollider*&))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_EF036CC46C57C9EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9990763B5163E37F(::Enum_3_9D7A1FBB6B28B95D a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_9D7A1FBB6B28B95D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_9990763B5163E37F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAA2E6A42078A6BC(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_BAA2E6A42078A6BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_7B32E6463125895B_OFFSET))(this);
	}

	::System::Void Method_2_9990763B5163E37F_1(::Enum_3_91322E66F4CC7ECA a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_91322E66F4CC7ECA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_9990763B5163E37F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10DA236D7F5B18F9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_10DA236D7F5B18F9_OFFSET))(this, a1);
	}

	::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD Method_2_243B47BFD2EED9E6(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_243B47BFD2EED9E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_3478CBAFE42ED8E1(::MoleMole::MonoRenderHandler* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_3478CBAFE42ED8E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_A090DF776A2F09CA(::UnityEngine::Ray a1, ::System::Single a2, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_A090DF776A2F09CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D60D92AB14605D56(::Il2CppArray<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_D60D92AB14605D56_OFFSET))(this, a1);
	}

	::System::Void Method_2_B5593B8F8D0D1343(::Enum_3_9D7A1FBB6B28B95D a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_9D7A1FBB6B28B95D, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_B5593B8F8D0D1343_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_66625B9A7103FF67(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_METHOD_2_66625B9A7103FF67_OFFSET))(this, a1, a2);
	}
};
