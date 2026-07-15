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

#define CLASS_2_CB38D1CC30518745_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A873D0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x17A88980)
#define CLASS_2_CB38D1CC30518745_METHOD_2_0565989F8FB37195_OFFSET UNITYSDK_OFFSET(0x17A8C6E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x17A8CA80)
#define CLASS_2_CB38D1CC30518745_METHOD_2_196BDF44D1C18E8B_OFFSET UNITYSDK_OFFSET(0x17A8A7B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x17A8BF60)
#define CLASS_2_CB38D1CC30518745_METHOD_2_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x17A8A6C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x17A87E10)
#define CLASS_2_CB38D1CC30518745_METHOD_2_49251DF5FE47D833_OFFSET UNITYSDK_OFFSET(0x17A8B690)
#define CLASS_2_CB38D1CC30518745_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x17A8B870)
#define CLASS_2_CB38D1CC30518745_METHOD_2_6CDDFD3936DE35AA_OFFSET UNITYSDK_OFFSET(0x17A8CC40)
#define CLASS_2_CB38D1CC30518745_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x17A87E90)
#define CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17A8A670)
#define CLASS_2_CB38D1CC30518745_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x17A88B90)
#define CLASS_2_CB38D1CC30518745_METHOD_2_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x17A8CF10)
#define CLASS_2_CB38D1CC30518745_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17A8A4C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9D16F90644F98754_OFFSET UNITYSDK_OFFSET(0x17A8C980)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9E49294C33DF47C3_OFFSET UNITYSDK_OFFSET(0x17A8A460)
#define CLASS_2_CB38D1CC30518745_METHOD_2_A53AFDE39B8880EB_OFFSET UNITYSDK_OFFSET(0x17A8B1C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_1_OFFSET UNITYSDK_OFFSET(0x17A8C3E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0x17A8B630)
#define CLASS_2_CB38D1CC30518745_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x17A89870)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A89820)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CAD679C27D807B20_OFFSET UNITYSDK_OFFSET(0x17A8C4B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_D9F6AAE1EA9F3DF7_OFFSET UNITYSDK_OFFSET(0x17A8D2E0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DB5B319D44B0143C_OFFSET UNITYSDK_OFFSET(0x17A8D280)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DBB3752363FFFC3B_OFFSET UNITYSDK_OFFSET(0x17A879F0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DE9BF6622E55909A_OFFSET UNITYSDK_OFFSET(0x17A8CFA0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x17A8B7B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17A8A740)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x17A89FE0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x17A892E0)
#define CLASS_2_CB38D1CC30518745_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A89940)
#define CLASS_2_CB38D1CC30518745_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A8A410)
#define CLASS_2_CB38D1CC30518745_TICK_OFFSET UNITYSDK_OFFSET(0x17A87B80)
#define CLASS_2_CB38D1CC30518745__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A8D580)
#define CLASS_2_CB38D1CC30518745__CTOR_OFFSET UNITYSDK_OFFSET(0x17A87030)

inline static constexpr unsigned int Class_2_CB38D1CC30518745_TypeDefinitionIndex = 55825;

class Class_2_CB38D1CC30518745 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x26C50);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x26C58);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x7520);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x7524);
	}
	::UnityEngine::Object* Field_2_4; // 0x18
	::RPG::GameCore::AnchorInfo* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_8; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_9; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_10; // 0x48
	::RPG::GameCore::TaskContext* Field_2_11; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_12; // 0x58
	::RPG::GameCore::AdventureHitConfig* Field_2_13; // 0x60
	::System::Collections::Generic::List_1<::Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A*>* Field_2_14; // 0x68
	::RPG::Client::IAssetOperation* Field_2_15; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_16; // 0x78
	::RPG::GameCore::RogueAdventureRoomRayProcess* Field_2_17; // 0x80
	::System::Boolean Field_2_18; // 0x88
	::System::Boolean Field_2_19; // 0x89
	::System::Boolean Field_2_20; // 0x8A
	::System::Boolean Field_2_21; // 0x8B
	::Class_2_CB38D1CC30518745_Phase Field_2_22; // 0x8C
	::System::Single Field_2_23; // 0x90
	::System::Single Field_2_24; // 0x94
	::System::Int32 Field_2_25; // 0x98
	::System::Single Field_2_26; // 0x9C
	::System::Int32 Field_2_27; // 0xA0
	::System::Int32 Field_2_28; // 0xA4
	::System::Single Field_2_29; // 0xA8
	::System::Single Field_2_30; // 0xAC
	::System::Single Field_2_31; // 0xB0
	::System::Boolean Field_2_32; // 0xB4
	::System::Boolean Field_2_33; // 0xB5
	::System::Boolean Field_2_34; // 0xB6
	::System::Single Field_2_35; // 0xB8
	::UnityEngine::Vector3 Field_2_36; // 0xBC
	::System::Single Field_2_37; // 0xC8
	::UnityEngine::Vector3 Field_2_38; // 0xCC
	::System::Single Field_2_39; // 0xD8
	::System::Single Field_2_40; // 0xDC
	::System::Single Field_2_41; // 0xE0
	::System::Single Field_2_42; // 0xE4
	::System::UInt32 Field_2_43; // 0xE8
	::System::Int32 Field_2_44; // 0xEC
	::System::Single Field_2_45; // 0xF0
	::System::Single Field_2_46; // 0xF4
	::UnityEngine::Vector3 Field_2_47; // 0xF8
	::UnityEngine::Vector3 Field_2_48; // 0x104
	::System::Int32 Field_2_49; // 0x110
	::UnityEngine::Vector3 Field_2_50; // 0x114
	::System::Single Field_2_51; // 0x120
	::System::Single Field_2_52; // 0x124

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

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
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
