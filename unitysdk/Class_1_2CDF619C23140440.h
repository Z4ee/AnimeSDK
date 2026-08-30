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
class Class_2_31D39E0B0ADFB12E;
class Class_2_B8E38BF47138A2E5;
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

#define CLASS_1_2CDF619C23140440_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C35D6D0)
#define CLASS_1_2CDF619C23140440_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C35DC60)
#define CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1C35DC40)
#define CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1C35DC20)
#define CLASS_1_2CDF619C23140440_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C35DE40)
#define CLASS_1_2CDF619C23140440_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1C35DB20)
#define CLASS_1_2CDF619C23140440_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x1C35DEC0)
#define CLASS_1_2CDF619C23140440_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C35DD60)
#define CLASS_1_2CDF619C23140440_METHOD_1_35DC9B290E018EE0_OFFSET UNITYSDK_OFFSET(0x1C35DFB0)
#define CLASS_1_2CDF619C23140440_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x1C35DC00)
#define CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1C35DDE0)
#define CLASS_1_2CDF619C23140440_METHOD_1_60617AB51AF08115_OFFSET UNITYSDK_OFFSET(0x1C35E4C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_7564F72947381311_OFFSET UNITYSDK_OFFSET(0x1C35E300)
#define CLASS_1_2CDF619C23140440_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x1C35E790)
#define CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x1C35DAC0)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET UNITYSDK_OFFSET(0x1C35DBE0)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x1C35DBC0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C35DDD0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_1_OFFSET UNITYSDK_OFFSET(0x1C35E3D0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_2_OFFSET UNITYSDK_OFFSET(0x1C35E570)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_3_OFFSET UNITYSDK_OFFSET(0x1C35E660)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_OFFSET UNITYSDK_OFFSET(0x1C35E210)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0x1C35DBA0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x1C35DB80)
#define CLASS_1_2CDF619C23140440_METHOD_1_CE662E09FB9A3F60_OFFSET UNITYSDK_OFFSET(0x1C35E150)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1C35E770)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1C35E750)
#define CLASS_1_2CDF619C23140440_METHOD_1_DAA252606584AD2D_OFFSET UNITYSDK_OFFSET(0x1C35E0A0)
#define CLASS_1_2CDF619C23140440_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1C35D680)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C35DDF0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C35DDC0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1C35DE20)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C35DE00)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1C35DF70)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1C35DEA0)
#define CLASS_1_2CDF619C23140440_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1C35DF90)
#define CLASS_1_2CDF619C23140440_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x1C35DC80)
#define CLASS_1_2CDF619C23140440_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C35DC70)
#define CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1C35DC50)
#define CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1C35DC30)
#define CLASS_1_2CDF619C23140440__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C35E820)
#define CLASS_1_2CDF619C23140440__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35D3E0)

inline static constexpr unsigned int Class_1_2CDF619C23140440_TypeDefinitionIndex = 40531;

class Class_1_2CDF619C23140440 : public ::System::Object
{
public:
	static ::System::String** StaticGet_PCHBOBPGDLL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17440);
	}
	static ::System::String** StaticGet_KMJMKPJCMLO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17448);
	}
	static ::System::String** StaticGet_FGOFKOOPMDH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17450);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_DMCFFNFGKAE()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17458);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_HJGEDPFGHIC()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17460);
	}
	static ::UnityEngine::GameObject** StaticGet_DAIJNJECBLM()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17468);
	}
	static ::System::String** StaticGet_FAJEIJBBJGI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17470);
	}
	static ::System::String** StaticGet_PFLAJLEJLKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17478);
	}
	static ::System::String** StaticGet_ENAGAHHDOAL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17480);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LBEOHCOMJBH()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17488);
	}
	static ::System::String** StaticGet_CMOLDKJPOOA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17490);
	}
	static ::System::String** StaticGet_GPMGBPEPDNM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x17498);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_DNHKMMNJFOM()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174A0);
	}
	static ::System::String** StaticGet_EOCOBCIEPHD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174A8);
	}
	static ::System::String** StaticGet_GPGBELEHIIB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174B0);
	}
	static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_CHFHMFODDON()
	{
		return (::RPG::GameCore::FiveDimAvatarConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174B8);
	}
	static ::System::String** StaticGet_NDJKLDDGGOA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174C0);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_JHEJDOKNGGG()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174C8);
	}
	static ::System::String** StaticGet_BCHFLFKLEOJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174D0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_DMJHAANEAEL()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174D8);
	}
	static ::System::String** StaticGet_KGOONLJPKDA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x174E0);
	}
	// static const ::System::String* ELCALOLOFEK; // 0x0
	// static const ::System::String* JFMMAEPKFEG; // 0x0
	// static const ::System::String* AIFLAECOIEF; // 0x0
	// static const ::System::String* BAHLOPBKNKA; // 0x0
	// static const ::System::String* AFPKOAJCKAH; // 0x0
	::Class_2_B8E38BF47138A2E5* PFIOEGEPLLH; // 0x10
	::UnityEngine::GameObject* FDFBDBKGIHH; // 0x18
	::Class_1_7F2D8932FAEE066D* BDEAGPENILK; // 0x20
	::System::String* KIPDNLCHAJI; // 0x28
	::Class_2_B8E38BF47138A2E5* FOHDAENLBFG; // 0x30
	::System::String* KGGGONDAHDL; // 0x38
	::Class_2_B8E38BF47138A2E5* EKMEHBCMOLC; // 0x40
	::Class_1_86D6A61A4F68A5B8* CLJIMLMCJJO; // 0x48
	::System::String* DHMFLAILLJI; // 0x50
	::Class_2_31D39E0B0ADFB12E* _FourRotateVoxelGame_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* KDDLHEAOPOJ; // 0x60
	::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x68
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x70
	::RPG::GameCore::FourRotateVoxelAnimalConfig* OCFNOMADICJ; // 0x78
	::Class_1_0C0D3AB5675C3420* LAAABDCPJEG; // 0x80
	::Class_2_B8E38BF47138A2E5* PLPFIOHDBOH; // 0x88
	::RPG::GameCore::FourRotateVoxelGameModeConfig* BNFCFHBIJKD; // 0x90
	::System::String* CKPKHDCLLID; // 0x98
	::UnityEngine::Mesh* JGDGLKLJEAC; // 0xA0
	::RPG::GameCore::FourRotateVoxelLevelSettings* NGIGEMJBLKK; // 0xA8
	::System::String* JNHHIALBKEG; // 0xB0
	::Class_2_B8E38BF47138A2E5* ODPDOBEGCOE; // 0xB8
	::UnityEngine::Vector3 BCNGLPELJJP; // 0xC0
	::System::Boolean FABOGACKPMD; // 0xCC
	::System::Boolean KIPMHMMDPID; // 0xCD
	::System::Boolean DJILFHHCBKG; // 0xCE
	::System::Boolean CNKGKDHBPPL; // 0xCF
	::System::Single KGLIEBAAAMP; // 0xD0
	::UnityEngine::Vector3 FHIJBONKEEI; // 0xD4
	::System::Single BBACGKBCPND; // 0xE0
	::UnityEngine::Quaternion IOLNLPDFJFL; // 0xE4
	::UnityEngine::Quaternion JDOHKCAJEKO; // 0xF4
	::System::Single NNFLEAKLBLC; // 0x104
	::System::Boolean NGELIKBAFCO; // 0x108
	::System::Boolean IKFCFMHBBGF; // 0x109
	::System::Boolean JJBJAGEJCMB; // 0x10A
	::System::Boolean GOOKGBHALHJ; // 0x10B
	::System::Boolean NGAIOLLMLNI; // 0x10C
	::System::Boolean IBDONJBEMNK; // 0x10D
	::System::Boolean PGEELBIPJON; // 0x10E
	::System::Int32 BJODLJHNLNE; // 0x110
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord LLFNHGBICJI; // 0x114
	::UnityEngine::Vector3 GCHPCPCPHBE; // 0x12C
	::System::Single HDCLMLOCNNC; // 0x138
	::System::Boolean EEGMCLHEDAO; // 0x13C
	::System::Boolean KPAAGEIPAGC; // 0x13D
	::System::Boolean MCLOBDBBANM; // 0x13E
	::System::Boolean KJMIADGNLLP; // 0x13F
	::UnityEngine::Vector3 JPBPFFBHJNJ; // 0x140
	::UnityEngine::Vector3 MAKIIIJGLBP; // 0x14C
	::RPG::GameCore::FourRotateVoxelAnimalType CIKNIALOAEA; // 0x158
	::UnityEngine::Vector3 FKJOOKKNHBL; // 0x15C
	::RPG::GameCore::FourRotateVoxelGameModeType AOKPEABPPGH; // 0x168
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord NBBEJJOCCEN; // 0x16C
	::System::Single ELBMFKAGNBH; // 0x184

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

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET))(this, a1);
	}

	::Class_2_31D39E0B0ADFB12E* get_FourRotateVoxelGame()
	{
		return ((::Class_2_31D39E0B0ADFB12E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_FourRotateVoxelGame(::Class_2_31D39E0B0ADFB12E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET))(this, a1);
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

	::Class_2_B8E38BF47138A2E5* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
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
