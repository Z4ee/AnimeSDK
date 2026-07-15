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
class Class_2_566E5C710244EEC1;
class Class_2_56DCA1B58073717B;
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

#define CLASS_1_2CDF619C23140440_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A0181F0)
#define CLASS_1_2CDF619C23140440_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A018760)
#define CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1A018740)
#define CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A018720)
#define CLASS_1_2CDF619C23140440_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A018940)
#define CLASS_1_2CDF619C23140440_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1A018620)
#define CLASS_1_2CDF619C23140440_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x1A0189C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A018860)
#define CLASS_1_2CDF619C23140440_METHOD_1_35DC9B290E018EE0_OFFSET UNITYSDK_OFFSET(0x1A018AB0)
#define CLASS_1_2CDF619C23140440_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x1A018700)
#define CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1A0188E0)
#define CLASS_1_2CDF619C23140440_METHOD_1_60617AB51AF08115_OFFSET UNITYSDK_OFFSET(0x1A018FA0)
#define CLASS_1_2CDF619C23140440_METHOD_1_7564F72947381311_OFFSET UNITYSDK_OFFSET(0x1A018DF0)
#define CLASS_1_2CDF619C23140440_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1A0181A0)
#define CLASS_1_2CDF619C23140440_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x1A019250)
#define CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x1A0185C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET UNITYSDK_OFFSET(0x1A0186E0)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x1A0186C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A0188D0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_1_OFFSET UNITYSDK_OFFSET(0x1A018EC0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_2_OFFSET UNITYSDK_OFFSET(0x1A019050)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_3_OFFSET UNITYSDK_OFFSET(0x1A019130)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_OFFSET UNITYSDK_OFFSET(0x1A018D10)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0x1A0186A0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x1A018680)
#define CLASS_1_2CDF619C23140440_METHOD_1_CE662E09FB9A3F60_OFFSET UNITYSDK_OFFSET(0x1A018C50)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1A019230)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1A019210)
#define CLASS_1_2CDF619C23140440_METHOD_1_DAA252606584AD2D_OFFSET UNITYSDK_OFFSET(0x1A018BA0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A0188F0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A0188C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1A018920)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A018900)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1A018A70)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A0189A0)
#define CLASS_1_2CDF619C23140440_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1A018A90)
#define CLASS_1_2CDF619C23140440_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x1A018780)
#define CLASS_1_2CDF619C23140440_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A018770)
#define CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1A018750)
#define CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A018730)
#define CLASS_1_2CDF619C23140440__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0192E0)
#define CLASS_1_2CDF619C23140440__CTOR_OFFSET UNITYSDK_OFFSET(0x1A017F10)

inline static constexpr unsigned int Class_1_2CDF619C23140440_TypeDefinitionIndex = 39658;

class Class_1_2CDF619C23140440 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x211E0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x211E8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x211F0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x211F8);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21200);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21208);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21210);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21218);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21220);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21228);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21230);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21238);
	}
	static ::System::String** StaticGet_Field_1_12()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21240);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_13()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21248);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21250);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21258);
	}
	static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_Field_1_16()
	{
		return (::RPG::GameCore::FiveDimAvatarConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21260);
	}
	static ::System::String** StaticGet_Field_1_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21268);
	}
	static ::System::String** StaticGet_Field_1_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21270);
	}
	static ::System::String** StaticGet_Field_1_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21278);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21280);
	}
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	::Class_2_56DCA1B58073717B* Field_1_26; // 0x10
	::System::String* Field_1_27; // 0x18
	::UnityEngine::Mesh* Field_1_28; // 0x20
	::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x28
	::RPG::GameCore::FourRotateVoxelAnimalConfig* Field_1_30; // 0x30
	::System::String* Field_1_31; // 0x38
	::Class_2_56DCA1B58073717B* Field_1_32; // 0x40
	::RPG::GameCore::FourRotateVoxelLevelSettings* Field_1_33; // 0x48
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x50
	::System::String* Field_1_35; // 0x58
	::System::String* Field_1_36; // 0x60
	::Class_2_56DCA1B58073717B* Field_1_37; // 0x68
	::Class_1_0C0D3AB5675C3420* Field_1_38; // 0x70
	::System::Collections::Generic::List_1<::Class_2_56DCA1B58073717B*>* Field_1_39; // 0x78
	::Class_2_56DCA1B58073717B* Field_1_40; // 0x80
	::RPG::GameCore::FourRotateVoxelGameModeConfig* Field_1_41; // 0x88
	::Class_2_566E5C710244EEC1* _FourRotateVoxelGame_k__BackingField; // 0x90
	::UnityEngine::GameObject* Field_1_43; // 0x98
	::System::String* Field_1_44; // 0xA0
	::Class_1_86D6A61A4F68A5B8* Field_1_45; // 0xA8
	::Class_1_7F2D8932FAEE066D* Field_1_46; // 0xB0
	::UnityEngine::Quaternion Field_1_47; // 0xB8
	::System::Int32 Field_1_48; // 0xC8
	::System::Single Field_1_49; // 0xCC
	::System::Boolean Field_1_50; // 0xD0
	::System::Boolean Field_1_51; // 0xD1
	::System::Boolean Field_1_52; // 0xD2
	::UnityEngine::Vector3 Field_1_53; // 0xD4
	::System::Boolean Field_1_54; // 0xE0
	::System::Boolean Field_1_55; // 0xE1
	::System::Boolean Field_1_56; // 0xE2
	::System::Boolean Field_1_57; // 0xE3
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_58; // 0xE4
	::UnityEngine::Vector3 Field_1_59; // 0xFC
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_60; // 0x108
	::UnityEngine::Vector3 Field_1_61; // 0x120
	::RPG::GameCore::FourRotateVoxelGameModeType Field_1_62; // 0x12C
	::System::Boolean Field_1_63; // 0x130
	::System::Boolean Field_1_64; // 0x131
	::System::Boolean Field_1_65; // 0x132
	::System::Boolean Field_1_66; // 0x133
	::UnityEngine::Vector3 Field_1_67; // 0x134
	::System::Boolean Field_1_68; // 0x140
	::System::Boolean Field_1_69; // 0x141
	::System::Boolean Field_1_70; // 0x142
	::System::Boolean Field_1_71; // 0x143
	::RPG::GameCore::FourRotateVoxelAnimalType Field_1_72; // 0x144
	::UnityEngine::Quaternion Field_1_73; // 0x148
	::System::Single Field_1_74; // 0x158
	::UnityEngine::Vector3 Field_1_75; // 0x15C
	::System::Single Field_1_76; // 0x168
	::System::Single Field_1_77; // 0x16C
	::System::Single Field_1_78; // 0x170
	::UnityEngine::Vector3 Field_1_79; // 0x174

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET))(this, a1);
	}

	::Class_2_566E5C710244EEC1* get_FourRotateVoxelGame()
	{
		return ((::Class_2_566E5C710244EEC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_FourRotateVoxelGame(::Class_2_566E5C710244EEC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_566E5C710244EEC1*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_ALLCONTEXTS_OFFSET))(this);
	}

	::System::Void set_allContexts(::Il2CppArray<::Entitas::IContext*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Entitas::IContext*>*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_ALLCONTEXTS_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_56DCA1B58073717B* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_35DC9B290E018EE0(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_35DC9B290E018EE0_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_DAA252606584AD2D(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_DAA252606584AD2D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CE662E09FB9A3F60(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_CE662E09FB9A3F60_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_7564F72947381311_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_1_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_60617AB51AF08115()
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_60617AB51AF08115_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_B7BFE5D35A542E8B_OFFSET))(this);
	}
};
