#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9.h"
#include "unitysdk/Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88.h"
#include "unitysdk/Enum_3_C771CD387F0482D9.h"
#include "unitysdk/Enum_3_ECCA5279390647E2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/InLevelAvatarDataItem_InLevelAvatarDataType.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F;
class Class_1_EC6BF1DF2ADA817C;
class Class_2_47BA9561E39BFE8D_Class_3_487EE6B302AC50B7_2;
class Class_2_CD42631606067E6B;
class Class_3_4E22895815E0F387;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_47BA9561E39BFE8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105B8760)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_01ED1C1F22416698_OFFSET UNITYSDK_OFFSET(0x105BF560)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_040B376D8D5FBACC_OFFSET UNITYSDK_OFFSET(0x105B8600)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_04543F50D3FF1D85_OFFSET UNITYSDK_OFFSET(0x105B8C30)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x105B9DE0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_0CCBED40E4FE805E_OFFSET UNITYSDK_OFFSET(0x105BFFD0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x105BF9C0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x105B8240)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_189803FFC1D3100D_OFFSET UNITYSDK_OFFSET(0x105BBD90)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x105BD4A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1D307F06088D1FD4_OFFSET UNITYSDK_OFFSET(0x105BB2F0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x105C17F0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1E9A353D2D03E901_OFFSET UNITYSDK_OFFSET(0x105BC830)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_276C25BEC74B8AC7_OFFSET UNITYSDK_OFFSET(0x105C0A40)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_2A0A086E8B523EC0_OFFSET UNITYSDK_OFFSET(0x105C07E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_2C3FA33400511E4C_OFFSET UNITYSDK_OFFSET(0x105BA4E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0x105BBA60)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x105B8E40)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_39C610783335FB8A_OFFSET UNITYSDK_OFFSET(0x105BB050)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x105BAB20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_49895916DDD18478_OFFSET UNITYSDK_OFFSET(0x105BCF90)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x105BD5D0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x105BD5F0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_562010E9BAD7A1CF_OFFSET UNITYSDK_OFFSET(0x105BFA20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x105C1010)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x105B8EF0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_6E793FBF97533BC3_OFFSET UNITYSDK_OFFSET(0x105BD310)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x105BF880)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_7E876EAD5AF192FC_OFFSET UNITYSDK_OFFSET(0x105BE700)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_8037BED5A99279E1_OFFSET UNITYSDK_OFFSET(0x105BA010)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x105BF4E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_842A5EF81A43BB67_OFFSET UNITYSDK_OFFSET(0x105B9260)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x105BF6C0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_992FBE3DE20958FD_OFFSET UNITYSDK_OFFSET(0x105BFDE0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_996800F5017E11C2_OFFSET UNITYSDK_OFFSET(0x105BFB60)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x105BAA70)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x105BFDD0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x105B85A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B94ED07A4ECA7458_OFFSET UNITYSDK_OFFSET(0x105BD600)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_1_OFFSET UNITYSDK_OFFSET(0x105BFDC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x105BD5B0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_BA77AC20D3473157_OFFSET UNITYSDK_OFFSET(0x105BD050)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x105BE680)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_C0D23376F9EA2B81_OFFSET UNITYSDK_OFFSET(0x105BDC00)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x105BC2A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x105B8B40)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105BCF50)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CBFAC8CBDC8A6B11_OFFSET UNITYSDK_OFFSET(0x105C1020)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CE0A9F9763D4569D_OFFSET UNITYSDK_OFFSET(0x105BF720)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CF1284BAAEF5280D_OFFSET UNITYSDK_OFFSET(0x105BABC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x105B9240)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D393A4CD5F6D8D34_OFFSET UNITYSDK_OFFSET(0x105BD430)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D58ED5725A850C08_OFFSET UNITYSDK_OFFSET(0x105BA150)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D5DB67F578B91749_OFFSET UNITYSDK_OFFSET(0x105BD440)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D5F9349C0344266B_OFFSET UNITYSDK_OFFSET(0x105B8B50)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x105B9BF0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x105BC160)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x105BB450)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x105C1850)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x105BD5C0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_EB7A7FABD82F88FB_OFFSET UNITYSDK_OFFSET(0x105BCEE0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_EE6915754C382F3A_OFFSET UNITYSDK_OFFSET(0x105BA210)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x105B8B30)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F557F3A4C6D8221E_OFFSET UNITYSDK_OFFSET(0x105B8CA0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x105BAAC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x105B8C40)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_FE06A89EDCA5D340_OFFSET UNITYSDK_OFFSET(0x105C0E50)
#define CLASS_2_47BA9561E39BFE8D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x105B8130)
#define CLASS_2_47BA9561E39BFE8D_UPDATE_OFFSET UNITYSDK_OFFSET(0x105B8330)
#define CLASS_2_47BA9561E39BFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x105B8060)

inline static constexpr unsigned int Class_2_47BA9561E39BFE8D_TypeDefinitionIndex = 47498;

class Class_2_47BA9561E39BFE8D : public ::Foundation::SingletonDisposable_1<::Class_2_47BA9561E39BFE8D*>
{
public:
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet_Field_2_10()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0x3D680);
	}
	static ::System::Action** StaticGet_Field_2_9()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0x3D688);
	}
	static ::System::Int64* StaticGet_Field_2_22()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0xEFD0);
	}
	// static const ::System::String* Field_2_26; // 0x0
	::MoleMole::Battle::Entity* Field_2_8; // 0x10
	::MoleMole::Battle::Entity* Field_2_11; // 0x18
	::System::Action* Field_2_6; // 0x20
	::System::Action* Field_2_2; // 0x28
	::Class_1_EC6BF1DF2ADA817C* Field_2_24; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_17; // 0x38
	::System::Action* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_1; // 0x48
	::System::String* Field_2_18; // 0x50
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* Field_2_21; // 0x58
	::System::Action* Field_2_3; // 0x60
	::System::Collections::Generic::List_1<::Class_1_EC6BF1DF2ADA817C*>* Field_2_23; // 0x68
	::Class_2_47BA9561E39BFE8D_Class_3_487EE6B302AC50B7_2* Field_2_5; // 0x70
	::Class_2_CD42631606067E6B* Field_2_0; // 0x78
	::System::Collections::Generic::Dictionary_2<::Enum_3_C771CD387F0482D9, ::Class_1_EC6BF1DF2ADA817C*>* Field_2_25; // 0x80
	::System::Boolean Field_2_19; // 0x88
	::System::Boolean Field_2_16; // 0x89
	::System::Boolean Field_2_31; // 0x8A
	::System::Int32 Field_2_7; // 0x8C
	::UnityEngine::RigidbodyInterpolation Field_2_29; // 0x90
	::System::UInt32 Field_2_14; // 0x94
	::System::Single Field_2_13; // 0x98
	::System::Int32 Field_2_27; // 0x9C
	::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 Field_2_20; // 0xA0
	::Enum_3_ECCA5279390647E2 Field_2_15; // 0xA4
	::UnityEngine::Vector3 Field_2_12; // 0xA8
	::System::UInt32 Field_2_28; // 0xB4
	::UnityEngine::RigidbodyConstraints Field_2_30; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88 Method_2_D5F9349C0344266B(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D5F9349C0344266B_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_04543F50D3FF1D85(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_04543F50D3FF1D85_OFFSET))(a1);
	}

	static ::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F8C7231308CD2C82_OFFSET))();
	}

	::System::Void Method_2_F557F3A4C6D8221E(::System::Boolean a1, ::System::Int64 a2, ::Enum_3_C771CD387F0482D9 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::Enum_3_C771CD387F0482D9, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F557F3A4C6D8221E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_2_842A5EF81A43BB67(::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_842A5EF81A43BB67_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_8037BED5A99279E1(::System::Boolean a1, ::MoleMole::Config::StageEntry* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_8037BED5A99279E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D58ED5725A850C08(::MoleMole::InLevelAvatarDataItem* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D58ED5725A850C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Boolean Method_2_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_189803FFC1D3100D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_189803FFC1D3100D_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_39C610783335FB8A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_39C610783335FB8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C3FA33400511E4C(::MoleMole::InLevelAvatarDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_2C3FA33400511E4C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C38AA259F0B46320()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_C38AA259F0B46320_OFFSET))(this);
	}

	::System::Boolean Method_2_EE6915754C382F3A(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_EE6915754C382F3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EB7A7FABD82F88FB(::Class_1_EC6BF1DF2ADA817C* a1, ::Class_1_EC6BF1DF2ADA817C* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_EB7A7FABD82F88FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_49895916DDD18478(::MoleMole::InLevelAvatarDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_49895916DDD18478_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E793FBF97533BC3(::System::Boolean a1, ::System::Int64 a2, ::Enum_3_C771CD387F0482D9 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::Enum_3_C771CD387F0482D9, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_6E793FBF97533BC3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1E9A353D2D03E901(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1E9A353D2D03E901_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Action_1<::MoleMole::Battle::Entity*>* Method_2_D393A4CD5F6D8D34()
	{
		return ((::System::Action_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D393A4CD5F6D8D34_OFFSET))();
	}

	::System::Void Method_2_D5DB67F578B91749(::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 a1, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D5DB67F578B91749_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1A54E3DF1B02B1B9(::Class_1_EC6BF1DF2ADA817C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	static ::System::Action* Method_2_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_E98A23CC3682A5D1_OFFSET))();
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	static ::System::Boolean Method_2_B94ED07A4ECA7458(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Single a9)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B94ED07A4ECA7458_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_2_C0D23376F9EA2B81(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Single a9)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_C0D23376F9EA2B81_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Boolean Method_2_7E876EAD5AF192FC(::MoleMole::TeamGroupDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_7E876EAD5AF192FC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_01ED1C1F22416698(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_01ED1C1F22416698_OFFSET))(this, a1);
	}

	::System::Void Method_2_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D307F06088D1FD4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1D307F06088D1FD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE0A9F9763D4569D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CE0A9F9763D4569D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Boolean Method_2_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_996800F5017E11C2(::Class_3_4E22895815E0F387* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4E22895815E0F387*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_996800F5017E11C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6815AD8D97959763(::Class_1_EC6BF1DF2ADA817C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF1284BAAEF5280D(::System::Int64 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CF1284BAAEF5280D_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0_1()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_BA77AC20D3473157(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_BA77AC20D3473157_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_9EF9C4C2711D220E_OFFSET))(a1);
	}

	::System::Boolean Method_2_992FBE3DE20958FD(::MoleMole::TeamGroupDataItem* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_992FBE3DE20958FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_2_562010E9BAD7A1CF(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_562010E9BAD7A1CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0CCBED40E4FE805E(::MoleMole::InLevelAvatarDataItem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_0CCBED40E4FE805E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2A0A086E8B523EC0(::System::Boolean a1, ::Enum_3_C771CD387F0482D9 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_C771CD387F0482D9, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_2A0A086E8B523EC0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_FE06A89EDCA5D340(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_FE06A89EDCA5D340_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_276C25BEC74B8AC7(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_276C25BEC74B8AC7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CBFAC8CBDC8A6B11(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3, ::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CBFAC8CBDC8A6B11_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_040B376D8D5FBACC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_040B376D8D5FBACC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
