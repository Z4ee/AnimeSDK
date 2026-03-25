#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C0D3AB5675C3420;
class Class_1_7F2D8932FAEE066D;
class Class_1_86D6A61A4F68A5B8;
class Class_2_0C58AD91B0F4D809;
class Class_2_AF4E89503EBBCCA0;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_867B6CE75953535A_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x168132C0)
#define CLASS_1_867B6CE75953535A_1_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x16813820)
#define CLASS_1_867B6CE75953535A_1_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x16813800)
#define CLASS_1_867B6CE75953535A_1_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x168137E0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0x16813F60)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16813A00)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x168136E0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16813920)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0x16814440)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x168137C0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x168139A0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0x16813270)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_1_OFFSET UNITYSDK_OFFSET(0x16814040)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_2_OFFSET UNITYSDK_OFFSET(0x16814200)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_3_OFFSET UNITYSDK_OFFSET(0x16814300)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_OFFSET UNITYSDK_OFFSET(0x16813E60)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_80198D8600EF2CA7_OFFSET UNITYSDK_OFFSET(0x16813B90)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_B58F8A5CC656A24C_OFFSET UNITYSDK_OFFSET(0x16814140)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x16813680)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET UNITYSDK_OFFSET(0x168137A0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x16813780)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_C20E2BB25B76A888_OFFSET UNITYSDK_OFFSET(0x16813A80)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16813990)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0x16813760)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x16813740)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x16814420)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x16814400)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_EEA9DEC9868720E9_OFFSET UNITYSDK_OFFSET(0x16813D50)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x168139B0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16813980)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x168139E0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x168139C0)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x16813B50)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x16813A60)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x16813B70)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_FD45D690D3312D92_OFFSET UNITYSDK_OFFSET(0x16813C90)
#define CLASS_1_867B6CE75953535A_1_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x16813840)
#define CLASS_1_867B6CE75953535A_1_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x16813830)
#define CLASS_1_867B6CE75953535A_1_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x16813810)
#define CLASS_1_867B6CE75953535A_1_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x168137F0)
#define CLASS_1_867B6CE75953535A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x168144F0)
#define CLASS_1_867B6CE75953535A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16812FF0)

inline static constexpr unsigned int Class_1_867B6CE75953535A_1_TypeDefinitionIndex = 32387;

class Class_1_867B6CE75953535A_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_23()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181A0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_22()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181A8);
	}
	static ::System::String** StaticGet_Field_1_65()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181B0);
	}
	static ::System::String** StaticGet_Field_1_66()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181B8);
	}
	static ::System::String** StaticGet_Field_1_58()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181C0);
	}
	static ::System::String** StaticGet_Field_1_62()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181C8);
	}
	static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_Field_1_39()
	{
		return (::RPG::GameCore::FiveDimAvatarConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181D0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_32()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181D8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_28()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181E0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_27()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181E8);
	}
	static ::System::String** StaticGet_Field_1_57()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181F0);
	}
	static ::System::String** StaticGet_Field_1_61()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x181F8);
	}
	static ::System::String** StaticGet_Field_1_63()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18200);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_Field_1_25()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18208);
	}
	static ::System::String** StaticGet_Field_1_67()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18210);
	}
	static ::System::String** StaticGet_Field_1_59()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18218);
	}
	static ::System::String** StaticGet_Field_1_60()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18220);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_Field_1_24()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18228);
	}
	static ::System::String** StaticGet_Field_1_68()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18230);
	}
	static ::System::String** StaticGet_Field_1_64()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_1_TypeDefinitionIndex)->GetStaticField(0x18238);
	}
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	::System::String* Field_1_41; // 0x10
	::Class_2_AF4E89503EBBCCA0* _FourRotateVoxelGame_k__BackingField; // 0x18
	::System::String* Field_1_42; // 0x20
	::Class_1_86D6A61A4F68A5B8* Field_1_16; // 0x28
	::Class_2_0C58AD91B0F4D809* Field_1_11; // 0x30
	::RPG::GameCore::FourRotateVoxelLevelSettings* Field_1_48; // 0x38
	::RPG::GameCore::FourRotateVoxelGameModeConfig* Field_1_47; // 0x40
	::System::String* Field_1_44; // 0x48
	::Class_2_0C58AD91B0F4D809* Field_1_4; // 0x50
	::Class_1_7F2D8932FAEE066D* Field_1_35; // 0x58
	::UnityEngine::GameObject* Field_1_33; // 0x60
	::RPG::GameCore::FourRotateVoxelAnimalConfig* Field_1_50; // 0x68
	::Class_2_0C58AD91B0F4D809* Field_1_31; // 0x70
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x78
	::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x80
	::System::String* Field_1_45; // 0x88
	::Class_1_0C0D3AB5675C3420* Field_1_18; // 0x90
	::System::String* Field_1_43; // 0x98
	::UnityEngine::Mesh* Field_1_56; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_0C58AD91B0F4D809*>* Field_1_38; // 0xA8
	::Class_2_0C58AD91B0F4D809* Field_1_3; // 0xB0
	::System::Single Field_1_37; // 0xB8
	::UnityEngine::Vector3 Field_1_13; // 0xBC
	::RPG::GameCore::FourRotateVoxelAnimalType Field_1_49; // 0xC8
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_14; // 0xCC
	::UnityEngine::Vector3 Field_1_5; // 0xE4
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_17; // 0xF0
	::UnityEngine::Vector3 Field_1_29; // 0x108
	::UnityEngine::Vector3 Field_1_36; // 0x114
	::UnityEngine::Quaternion Field_1_26; // 0x120
	::System::Single Field_1_30; // 0x130
	::System::Single Field_1_20; // 0x134
	::UnityEngine::Vector3 Field_1_6; // 0x138
	::System::Int32 Field_1_8; // 0x144
	::RPG::GameCore::FourRotateVoxelGameModeType Field_1_46; // 0x148
	::System::Boolean Field_1_9; // 0x14C
	::System::Boolean Field_1_10; // 0x14D
	::System::Boolean Field_1_7; // 0x14E
	::System::Boolean Field_1_21; // 0x14F
	::System::Boolean Field_1_12; // 0x150
	::System::Boolean Field_1_34; // 0x151
	::System::Boolean Field_1_40; // 0x152
	::System::Boolean Field_1_15; // 0x153
	::System::Single Field_1_19; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_6A61469FD94C414E_OFFSET))(this);
	}

	::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_SET_GAMECONFIG_OFFSET))(this, value);
	}

	::Class_2_AF4E89503EBBCCA0* get_FourRotateVoxelGame()
	{
		return ((::Class_2_AF4E89503EBBCCA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_FourRotateVoxelGame(::Class_2_AF4E89503EBBCCA0* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF4E89503EBBCCA0*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_SET_FOURROTATEVOXELGAME_OFFSET))(this, value);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_GET_ALLCONTEXTS_OFFSET))(this);
	}

	::System::Void set_allContexts(::Il2CppArray<::Entitas::IContext*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Entitas::IContext*>*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_SET_ALLCONTEXTS_OFFSET))(this, value);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_0C58AD91B0F4D809* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_C91E5170F9E36EED_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_BBDDAAF43A9AD89B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C20E2BB25B76A888(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_C20E2BB25B76A888_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_80198D8600EF2CA7(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_80198D8600EF2CA7_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_FD45D690D3312D92(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_FD45D690D3312D92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EEA9DEC9868720E9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_EEA9DEC9868720E9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_153DB45DA48D91A6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_1_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_B58F8A5CC656A24C()
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_B58F8A5CC656A24C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_7564F72947381311_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_2F2B436D8A949630()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_1_METHOD_1_2F2B436D8A949630_OFFSET))(this);
	}
};
