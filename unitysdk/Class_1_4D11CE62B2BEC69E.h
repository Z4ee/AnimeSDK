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

#define CLASS_1_4D11CE62B2BEC69E_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3C7B0)
#define CLASS_1_4D11CE62B2BEC69E_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x17E3CD40)
#define CLASS_1_4D11CE62B2BEC69E_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x17E3CD20)
#define CLASS_1_4D11CE62B2BEC69E_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x17E3CD00)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_02EE124CC2280A9E_OFFSET UNITYSDK_OFFSET(0x17E3D090)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_1_OFFSET UNITYSDK_OFFSET(0x17E3D490)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_2_OFFSET UNITYSDK_OFFSET(0x17E3D610)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_3_OFFSET UNITYSDK_OFFSET(0x17E3D6D0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0x17E3D320)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17E3CF20)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x17E3CC00)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x17E3CFA0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17E3CE40)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x17E3CCE0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x17E3CEC0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x17E3C760)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0x17E3D3E0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_B58F8A5CC656A24C_OFFSET UNITYSDK_OFFSET(0x17E3D550)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x17E3D7D0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x17E3CBA0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET UNITYSDK_OFFSET(0x17E3CCC0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x17E3CCA0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E3CEB0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0x17E3CC80)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x17E3CC60)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x17E3D7B0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x17E3D790)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_EEA9DEC9868720E9_OFFSET UNITYSDK_OFFSET(0x17E3D210)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17E3CED0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E3CEA0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x17E3CF00)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17E3CEE0)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x17E3D050)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x17E3CF80)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x17E3D070)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_FD45D690D3312D92_OFFSET UNITYSDK_OFFSET(0x17E3D150)
#define CLASS_1_4D11CE62B2BEC69E_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x17E3CD60)
#define CLASS_1_4D11CE62B2BEC69E_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x17E3CD50)
#define CLASS_1_4D11CE62B2BEC69E_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x17E3CD30)
#define CLASS_1_4D11CE62B2BEC69E_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x17E3CD10)
#define CLASS_1_4D11CE62B2BEC69E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3D860)
#define CLASS_1_4D11CE62B2BEC69E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3C4D0)

inline static constexpr unsigned int Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex = 38108;

class Class_1_4D11CE62B2BEC69E : public ::System::Object
{
public:
	static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_Field_1_44()
	{
		return (::RPG::GameCore::FiveDimAvatarConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB690);
	}
	static ::System::String** StaticGet_Field_1_70()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB698);
	}
	static ::System::String** StaticGet_Field_1_69()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6A0);
	}
	static ::System::String** StaticGet_Field_1_72()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6A8);
	}
	static ::System::String** StaticGet_Field_1_68()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6B0);
	}
	static ::System::String** StaticGet_Field_1_67()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6B8);
	}
	static ::System::String** StaticGet_Field_1_66()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6C0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_32()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6C8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_Field_1_25()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6D0);
	}
	static ::System::String** StaticGet_Field_1_64()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6D8);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_Field_1_24()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6E0);
	}
	static ::System::String** StaticGet_Field_1_63()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6E8);
	}
	static ::System::String** StaticGet_Field_1_73()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6F0);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_23()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB6F8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_22()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB700);
	}
	static ::System::String** StaticGet_Field_1_71()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB708);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_27()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB710);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_28()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB718);
	}
	static ::System::String** StaticGet_Field_1_65()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB720);
	}
	static ::System::String** StaticGet_Field_1_74()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D11CE62B2BEC69E_TypeDefinitionIndex)->GetStaticField(0xB728);
	}
	// static const ::System::String* Field_1_56; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	// static const ::System::String* Field_1_58; // 0x0
	// static const ::System::String* Field_1_59; // 0x0
	// static const ::System::String* Field_1_60; // 0x0
	::UnityEngine::GameObject* Field_1_33; // 0x10
	::Class_2_0C58AD91B0F4D809* Field_1_31; // 0x18
	::System::String* Field_1_47; // 0x20
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x28
	::Class_2_0C58AD91B0F4D809* Field_1_11; // 0x30
	::RPG::GameCore::FourRotateVoxelAnimalConfig* Field_1_55; // 0x38
	::System::String* Field_1_48; // 0x40
	::Class_2_0C58AD91B0F4D809* Field_1_3; // 0x48
	::System::String* Field_1_49; // 0x50
	::System::String* Field_1_46; // 0x58
	::Class_1_0C0D3AB5675C3420* Field_1_18; // 0x60
	::Class_2_0C58AD91B0F4D809* Field_1_4; // 0x68
	::UnityEngine::Mesh* Field_1_61; // 0x70
	::System::String* Field_1_50; // 0x78
	::Class_1_7F2D8932FAEE066D* Field_1_39; // 0x80
	::System::Collections::Generic::List_1<::Class_2_0C58AD91B0F4D809*>* Field_1_43; // 0x88
	::RPG::GameCore::FourRotateVoxelLevelSettings* Field_1_53; // 0x90
	::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x98
	::RPG::GameCore::FourRotateVoxelGameModeConfig* Field_1_52; // 0xA0
	::Class_2_AF4E89503EBBCCA0* _FourRotateVoxelGame_k__BackingField; // 0xA8
	::Class_1_86D6A61A4F68A5B8* Field_1_16; // 0xB0
	::RPG::GameCore::FourRotateVoxelAnimalType Field_1_54; // 0xB8
	::System::Single Field_1_20; // 0xBC
	::UnityEngine::Vector3 Field_1_29; // 0xC0
	::UnityEngine::Quaternion Field_1_37; // 0xCC
	::System::Boolean Field_1_12; // 0xDC
	::System::Boolean Field_1_9; // 0xDD
	::System::Boolean Field_1_21; // 0xDE
	::System::Single Field_1_41; // 0xE0
	::UnityEngine::Vector3 Field_1_40; // 0xE4
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_17; // 0xF0
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_14; // 0x108
	::RPG::GameCore::FourRotateVoxelGameModeType Field_1_51; // 0x120
	::System::Single Field_1_30; // 0x124
	::UnityEngine::Vector3 Field_1_13; // 0x128
	::UnityEngine::Quaternion Field_1_26; // 0x134
	::System::Single Field_1_42; // 0x144
	::UnityEngine::Vector3 Field_1_6; // 0x148
	::System::Single Field_1_19; // 0x154
	::UnityEngine::Vector3 Field_1_36; // 0x158
	::System::Boolean Field_1_10; // 0x164
	::System::Boolean Field_1_62; // 0x165
	::System::Boolean Field_1_35; // 0x166
	::System::Boolean Field_1_34; // 0x167
	::System::Int32 Field_1_8; // 0x168
	::System::Boolean Field_1_38; // 0x16C
	::System::Boolean Field_1_7; // 0x16D
	::System::Boolean Field_1_15; // 0x16E
	::System::Boolean Field_1_45; // 0x16F
	::UnityEngine::Vector3 Field_1_5; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_SET_GAMECONFIG_OFFSET))(this, value);
	}

	::Class_2_AF4E89503EBBCCA0* get_FourRotateVoxelGame()
	{
		return ((::Class_2_AF4E89503EBBCCA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_FourRotateVoxelGame(::Class_2_AF4E89503EBBCCA0* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF4E89503EBBCCA0*))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_SET_FOURROTATEVOXELGAME_OFFSET))(this, value);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_GET_ALLCONTEXTS_OFFSET))(this);
	}

	::System::Void set_allContexts(::Il2CppArray<::Entitas::IContext*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Entitas::IContext*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_SET_ALLCONTEXTS_OFFSET))(this, value);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_0C58AD91B0F4D809* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_C91E5170F9E36EED_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_BBDDAAF43A9AD89B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_02EE124CC2280A9E(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_02EE124CC2280A9E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_FD45D690D3312D92(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_FD45D690D3312D92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EEA9DEC9868720E9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_EEA9DEC9868720E9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_939383CFABF4988F()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_939383CFABF4988F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_1_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_B58F8A5CC656A24C()
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_B58F8A5CC656A24C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_153DB45DA48D91A6_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D11CE62B2BEC69E_METHOD_1_B7BFE5D35A542E8B_OFFSET))(this);
	}
};
