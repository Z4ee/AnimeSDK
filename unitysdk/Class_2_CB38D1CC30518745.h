#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_CB38D1CC30518745_Phase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueAdventureRoomRayProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_CB38D1CC30518745_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EAC5A0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x17EADB40)
#define CLASS_2_CB38D1CC30518745_METHOD_2_0565989F8FB37195_OFFSET UNITYSDK_OFFSET(0x17EB18E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x17EB1C80)
#define CLASS_2_CB38D1CC30518745_METHOD_2_196BDF44D1C18E8B_OFFSET UNITYSDK_OFFSET(0x17EAF9B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x17EB1160)
#define CLASS_2_CB38D1CC30518745_METHOD_2_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x17EAF8C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x17EACFD0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_49251DF5FE47D833_OFFSET UNITYSDK_OFFSET(0x17EB0890)
#define CLASS_2_CB38D1CC30518745_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x17EB0A70)
#define CLASS_2_CB38D1CC30518745_METHOD_2_6CDDFD3936DE35AA_OFFSET UNITYSDK_OFFSET(0x17EB1E40)
#define CLASS_2_CB38D1CC30518745_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x17EAD050)
#define CLASS_2_CB38D1CC30518745_METHOD_2_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x17EAE4A0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17EAF870)
#define CLASS_2_CB38D1CC30518745_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x17EADD50)
#define CLASS_2_CB38D1CC30518745_METHOD_2_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x17EB2110)
#define CLASS_2_CB38D1CC30518745_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17EAF6F0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9D16F90644F98754_OFFSET UNITYSDK_OFFSET(0x17EB1B80)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9E49294C33DF47C3_OFFSET UNITYSDK_OFFSET(0x17EAF690)
#define CLASS_2_CB38D1CC30518745_METHOD_2_A53AFDE39B8880EB_OFFSET UNITYSDK_OFFSET(0x17EB03C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_1_OFFSET UNITYSDK_OFFSET(0x17EB15E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0x17EB0830)
#define CLASS_2_CB38D1CC30518745_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x17EAEAE0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17EAEA90)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CAD679C27D807B20_OFFSET UNITYSDK_OFFSET(0x17EB16B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_D9F6AAE1EA9F3DF7_OFFSET UNITYSDK_OFFSET(0x17EB24E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DB5B319D44B0143C_OFFSET UNITYSDK_OFFSET(0x17EB2480)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DBB3752363FFFC3B_OFFSET UNITYSDK_OFFSET(0x17EACBB0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DE9BF6622E55909A_OFFSET UNITYSDK_OFFSET(0x17EB21A0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x17EB09B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17EAF940)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x17EAF230)
#define CLASS_2_CB38D1CC30518745_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EAEBB0)
#define CLASS_2_CB38D1CC30518745_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EAF640)
#define CLASS_2_CB38D1CC30518745_TICK_OFFSET UNITYSDK_OFFSET(0x17EACD40)
#define CLASS_2_CB38D1CC30518745__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EB2780)
#define CLASS_2_CB38D1CC30518745__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAC210)

inline static constexpr unsigned int Class_2_CB38D1CC30518745_TypeDefinitionIndex = 58591;

class Class_2_CB38D1CC30518745 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_GLFPCKGAGOJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x47F0);
	}
	static ::System::String** StaticGet_DIDLAOFLEKM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x47F8);
	}
	static ::System::Int32* StaticGet_OAKFIOAPCIB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x1720);
	}
	static ::System::Int32* StaticGet_KHDIGAJEMCD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x1724);
	}
	::System::Collections::Generic::List_1<::System::Int32>* FGBNJBEJLOO; // 0x18
	::RPG::GameCore::RogueAdventureRoomRayProcess* OFKGLJOAMLD; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* EMNFEOGDDPI; // 0x28
	::RPG::Client::IAssetOperation* JNKMGGMDODJ; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* LFFCFJPBEEK; // 0x38
	::RPG::GameCore::AnchorInfo* HFPCNDADGEC; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLNHICGMAPM; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* PDIDGNNPLBF; // 0x50
	::System::Collections::Generic::List_1<::Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A*>* ONAOJJNEHLL; // 0x58
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* FPMGOBMOALB; // 0x68
	::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x70
	::UnityEngine::Object* EHJPMODMCAP; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* DGNHPGJKIPF; // 0x80
	::System::UInt32 BDHIKCHLFPI; // 0x88
	::System::Single GDJNIFPJMAI; // 0x8C
	::System::Single BEGAAMAGBMI; // 0x90
	::System::Single LEOMCIJNLEH; // 0x94
	::System::Int32 ALBOBJPJCBI; // 0x98
	::System::Single CMAKNCPLKPC; // 0x9C
	::System::Single JLMIBGOJAKB; // 0xA0
	::UnityEngine::Vector3 EDJCMAJJKFE; // 0xA4
	::UnityEngine::Vector3 AGLILIOBMMK; // 0xB0
	::System::Single LGEJGMBAAHG; // 0xBC
	::System::Single DAOBJOHLCOK; // 0xC0
	::System::Single DFJMGHEHNME; // 0xC4
	::System::Int32 KHDPKKBEGKM; // 0xC8
	::System::Single OAIMKFHIDPN; // 0xCC
	::System::Int32 AMCJFFELDDD; // 0xD0
	::UnityEngine::Vector3 PFBGBJGHDAA; // 0xD4
	::System::Boolean AKLHCNDKDKL; // 0xE0
	::System::Boolean EGJCEKJMILA; // 0xE1
	::System::Boolean CMEJOPAKPCC; // 0xE2
	::System::Boolean NDIBBONOCKF; // 0xE3
	::System::Single PGMIOKKLHIE; // 0xE4
	::System::Boolean EIHCACPPKDO; // 0xE8
	::System::Boolean KCCNIPHIBEO; // 0xE9
	::System::Boolean POMMABEILHD; // 0xEA
	::System::Int32 KEJGKEEBMII; // 0xEC
	::System::Single CIIFPAOJIPE; // 0xF0
	::UnityEngine::Vector3 GHMJLCBLADJ; // 0xF4
	::System::Single BHJLDGPJINP; // 0x100
	::System::Int32 CDPDJBHCAAP; // 0x104
	::System::Single OJCAPLGCJMM; // 0x108
	::System::Single JOIPFIKDAMJ; // 0x10C
	::System::Single BKDLKNHIHOB; // 0x110
	::Class_2_CB38D1CC30518745_Phase NOHNKAIALPJ; // 0x114
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x118
	::System::Single PHFDPBCLODD; // 0x124

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdventureRoomRayProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdventureRoomRayProcess*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_9E49294C33DF47C3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_9E49294C33DF47C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_37D641371E4C8F58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_37D641371E4C8F58_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_196BDF44D1C18E8B(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_196BDF44D1C18E8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A53AFDE39B8880EB(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_A53AFDE39B8880EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_2_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Void Method_2_B7CCB99AAB7A4C8B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_1_OFFSET))(this);
	}

	::System::Void Method_2_49251DF5FE47D833(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_49251DF5FE47D833_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_2_9D16F90644F98754(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_9D16F90644F98754_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CAD679C27D807B20(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_CAD679C27D807B20_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_171A4D4799D0DC21(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_6CDDFD3936DE35AA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_6CDDFD3936DE35AA_OFFSET))(this);
	}

	::System::Single Method_2_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0565989F8FB37195(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_0565989F8FB37195_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Boolean Method_2_DE9BF6622E55909A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_DE9BF6622E55909A_OFFSET))(this, a1);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Boolean Method_2_DB5B319D44B0143C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureHitConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_DB5B319D44B0143C_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_D9F6AAE1EA9F3DF7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_D9F6AAE1EA9F3DF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DBB3752363FFFC3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_DBB3752363FFFC3B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
};
