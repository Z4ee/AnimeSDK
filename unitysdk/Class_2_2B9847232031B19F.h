#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2B9847232031B19F_PlayerMotionUnreliableReason.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_20D743894CDF214D_1;
class Class_1_314B32ACA2E06A03;
class Class_1_3AD2528CD53B1639_8;
class Class_1_D17272E82AE804C2_649;
class Class_1_EA5A5E4D07C4CF2B_1;
class Class_2_2B9847232031B19F_Class_1_0D3C66B0B1393417;
class Class_2_2B9847232031B19F_Class_1_7CCDA79C3C7B8577;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class MapRotationGlobalConfig; }
namespace RPG::GameCore { class MapRotationTextConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_2B9847232031B19F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA738F0)
#define CLASS_2_2B9847232031B19F_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xFA79960)
#define CLASS_2_2B9847232031B19F_GET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0xFA79980)
#define CLASS_2_2B9847232031B19F_GET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xFA79A90)
#define CLASS_2_2B9847232031B19F_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0xFA79A70)
#define CLASS_2_2B9847232031B19F_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xFA79940)
#define CLASS_2_2B9847232031B19F_GET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xFA79AD0)
#define CLASS_2_2B9847232031B19F_GET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xFA79AB0)
#define CLASS_2_2B9847232031B19F_GET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xFA79AF0)
#define CLASS_2_2B9847232031B19F_GET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0xFA799A0)
#define CLASS_2_2B9847232031B19F_INIT_OFFSET UNITYSDK_OFFSET(0xFA731B0)
#define CLASS_2_2B9847232031B19F_METHOD_2_0026760CB903CA2F_OFFSET UNITYSDK_OFFSET(0xFA73E70)
#define CLASS_2_2B9847232031B19F_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xFA79080)
#define CLASS_2_2B9847232031B19F_METHOD_2_0342EFB2444704A2_1_OFFSET UNITYSDK_OFFSET(0xFA73D70)
#define CLASS_2_2B9847232031B19F_METHOD_2_0342EFB2444704A2_OFFSET UNITYSDK_OFFSET(0xFA73CE0)
#define CLASS_2_2B9847232031B19F_METHOD_2_10A853A706D7EDFA_OFFSET UNITYSDK_OFFSET(0xFA74CD0)
#define CLASS_2_2B9847232031B19F_METHOD_2_1172C6546F81D6D5_OFFSET UNITYSDK_OFFSET(0xFA74C40)
#define CLASS_2_2B9847232031B19F_METHOD_2_1244532A4A5AE85B_OFFSET UNITYSDK_OFFSET(0xFA77850)
#define CLASS_2_2B9847232031B19F_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xFA799C0)
#define CLASS_2_2B9847232031B19F_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xFA79620)
#define CLASS_2_2B9847232031B19F_METHOD_2_2FCC455AECFF7EE3_OFFSET UNITYSDK_OFFSET(0xFA78600)
#define CLASS_2_2B9847232031B19F_METHOD_2_3039A15BEA0F4A48_OFFSET UNITYSDK_OFFSET(0xFA78490)
#define CLASS_2_2B9847232031B19F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFA79A20)
#define CLASS_2_2B9847232031B19F_METHOD_2_3AB3FFEDDC3B0462_OFFSET UNITYSDK_OFFSET(0xFA762C0)
#define CLASS_2_2B9847232031B19F_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xFA73B10)
#define CLASS_2_2B9847232031B19F_METHOD_2_50DDC384D99AC5A6_OFFSET UNITYSDK_OFFSET(0xFA761B0)
#define CLASS_2_2B9847232031B19F_METHOD_2_5872B7D97A4CCD96_OFFSET UNITYSDK_OFFSET(0xFA76030)
#define CLASS_2_2B9847232031B19F_METHOD_2_5CBD1A3583FE9FDC_OFFSET UNITYSDK_OFFSET(0xFA74F30)
#define CLASS_2_2B9847232031B19F_METHOD_2_5E354778507BDF06_OFFSET UNITYSDK_OFFSET(0xFA79450)
#define CLASS_2_2B9847232031B19F_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xFA74400)
#define CLASS_2_2B9847232031B19F_METHOD_2_6D269210CE9D83A1_OFFSET UNITYSDK_OFFSET(0xFA73440)
#define CLASS_2_2B9847232031B19F_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xFA73AB0)
#define CLASS_2_2B9847232031B19F_METHOD_2_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0xFA77390)
#define CLASS_2_2B9847232031B19F_METHOD_2_925B6EF9634A264B_OFFSET UNITYSDK_OFFSET(0xFA76E20)
#define CLASS_2_2B9847232031B19F_METHOD_2_96347D126BE5AFBC_OFFSET UNITYSDK_OFFSET(0xFA79730)
#define CLASS_2_2B9847232031B19F_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xFA73510)
#define CLASS_2_2B9847232031B19F_METHOD_2_9D32F43806FEE5B9_OFFSET UNITYSDK_OFFSET(0xFA750C0)
#define CLASS_2_2B9847232031B19F_METHOD_2_A0C3CBCD03F493F8_OFFSET UNITYSDK_OFFSET(0xFA740B0)
#define CLASS_2_2B9847232031B19F_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xFA74690)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0xFA76EB0)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_2_OFFSET UNITYSDK_OFFSET(0xFA77120)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_3_OFFSET UNITYSDK_OFFSET(0xFA77BB0)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_4_OFFSET UNITYSDK_OFFSET(0xFA77DD0)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_5_OFFSET UNITYSDK_OFFSET(0xFA78040)
#define CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xFA76BA0)
#define CLASS_2_2B9847232031B19F_METHOD_2_AA770B0DE6E11683_OFFSET UNITYSDK_OFFSET(0xFA74FD0)
#define CLASS_2_2B9847232031B19F_METHOD_2_B35B6EE597C3E17C_OFFSET UNITYSDK_OFFSET(0xFA73E00)
#define CLASS_2_2B9847232031B19F_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0xFA75340)
#define CLASS_2_2B9847232031B19F_METHOD_2_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0xFA74BA0)
#define CLASS_2_2B9847232031B19F_METHOD_2_CE74B05EA918B9A4_OFFSET UNITYSDK_OFFSET(0xFA778A0)
#define CLASS_2_2B9847232031B19F_METHOD_2_D703086135204BFA_OFFSET UNITYSDK_OFFSET(0xFA77800)
#define CLASS_2_2B9847232031B19F_METHOD_2_D7FF0156F8337FCF_OFFSET UNITYSDK_OFFSET(0xFA74160)
#define CLASS_2_2B9847232031B19F_METHOD_2_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xFA780C0)
#define CLASS_2_2B9847232031B19F_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0xFA78230)
#define CLASS_2_2B9847232031B19F_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xFA79190)
#define CLASS_2_2B9847232031B19F_METHOD_2_E9073F732A163499_OFFSET UNITYSDK_OFFSET(0xFA76110)
#define CLASS_2_2B9847232031B19F_METHOD_2_EC01C67B16F49E30_OFFSET UNITYSDK_OFFSET(0xFA79680)
#define CLASS_2_2B9847232031B19F_METHOD_2_F8926E6C3A21631F_OFFSET UNITYSDK_OFFSET(0xFA74770)
#define CLASS_2_2B9847232031B19F_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xFA739B0)
#define CLASS_2_2B9847232031B19F_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xFA76470)
#define CLASS_2_2B9847232031B19F_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xFA79970)
#define CLASS_2_2B9847232031B19F_SET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0xFA79990)
#define CLASS_2_2B9847232031B19F_SET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xFA79AA0)
#define CLASS_2_2B9847232031B19F_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0xFA79A80)
#define CLASS_2_2B9847232031B19F_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xFA79950)
#define CLASS_2_2B9847232031B19F_SET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xFA79AE0)
#define CLASS_2_2B9847232031B19F_SET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xFA79AC0)
#define CLASS_2_2B9847232031B19F_SET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xFA79B00)
#define CLASS_2_2B9847232031B19F_SET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0xFA799B0)
#define CLASS_2_2B9847232031B19F__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xFA78FE0)
#define CLASS_2_2B9847232031B19F__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xFA764E0)
#define CLASS_2_2B9847232031B19F__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA79B30)
#define CLASS_2_2B9847232031B19F__CTOR_OFFSET UNITYSDK_OFFSET(0xFA79B10)

inline static constexpr unsigned int Class_2_2B9847232031B19F_TypeDefinitionIndex = 65852;

class Class_2_2B9847232031B19F : public ::RPG::Client::BaseModule
{
public:
	static ::System::String** StaticGet_IHCCAHJHKCL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B9847232031B19F_TypeDefinitionIndex)->GetStaticField(0x194B0);
	}
	::RPG::Client::AchievementData* FKKABMHODDP; // 0x10
	::Class_2_2B9847232031B19F_Class_1_0D3C66B0B1393417* NFPGKGHMFGF; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _MonsterEffectConfigs_k__BackingField; // 0x20
	::RPG::Client::AchievementData* JBPCLHHEIFA; // 0x28
	::RPG::GameCore::MapRotationGlobalConfig* _GlobalConfig_k__BackingField; // 0x30
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _EmptyChargerSet_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* _UsedVolumeInfo_k__BackingField; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* NFDFFHELMDH; // 0x48
	::RPG::GameCore::MapRotationEntityEffectConfig* _NpcEffectConfig_k__BackingField; // 0x50
	::RPG::Client::AchievementData* LKNFGJELIPI; // 0x58
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* NLOOAKCDFMI; // 0x60
	::Class_2_2B9847232031B19F_Class_1_7CCDA79C3C7B8577* PFFOHHPEJAJ; // 0x68
	::RPG::Client::MapDef* DJKBENNBHNG; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _SpecialNpcEffectConfigs_k__BackingField; // 0x78
	::RPG::GameCore::MapRotationEnergyState LNOCABDAFHN; // 0x80
	::System::Int32 _MaxEnergy_k__BackingField; // 0x84
	::System::Int32 _CurrentEnergy_k__BackingField; // 0x88
	::System::Boolean ACGPEMMMPBL; // 0x8C
	::System::Boolean _LeaveRotatableRegionOnEnterMap_k__BackingField; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F__CCTOR_OFFSET))();
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_0342EFB2444704A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_0342EFB2444704A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0342EFB2444704A2_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_0342EFB2444704A2_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B35B6EE597C3E17C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_B35B6EE597C3E17C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0026760CB903CA2F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_0026760CB903CA2F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_F8926E6C3A21631F(::System::UInt32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_F8926E6C3A21631F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5CBD1A3583FE9FDC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_5CBD1A3583FE9FDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA770B0DE6E11683(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_AA770B0DE6E11683_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9D32F43806FEE5B9(::System::Boolean a1, ::Class_2_2B9847232031B19F_PlayerMotionUnreliableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_2B9847232031B19F_PlayerMotionUnreliableReason))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_9D32F43806FEE5B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_50DDC384D99AC5A6(::Class_1_3AD2528CD53B1639_8* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_50DDC384D99AC5A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AB3FFEDDC3B0462(::System::Int32& a1, ::System::UInt32& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::UInt32&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_3AB3FFEDDC3B0462_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnReconnect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_ONRECONNECT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CE74B05EA918B9A4(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_CE74B05EA918B9A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_3(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_4(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_5(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A7E8B52E9ABB8DB9_5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2FCC455AECFF7EE3(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_2FCC455AECFF7EE3_OFFSET))(this, a1, a2);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean Method_2_D7FF0156F8337FCF(::Class_1_20D743894CDF214D_1*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D743894CDF214D_1*&))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_D7FF0156F8337FCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E354778507BDF06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_20D743894CDF214D_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_5E354778507BDF06_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_EA5A5E4D07C4CF2B_1* Method_2_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::Class_1_314B32ACA2E06A03* Method_2_1172C6546F81D6D5(::UnityEngine::Quaternion a1)
	{
		return ((::Class_1_314B32ACA2E06A03*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_1172C6546F81D6D5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_E9073F732A163499(::Class_1_EA5A5E4D07C4CF2B_1* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_1*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_E9073F732A163499_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5872B7D97A4CCD96(::Class_1_314B32ACA2E06A03* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_1_314B32ACA2E06A03*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_5872B7D97A4CCD96_OFFSET))(this, a1);
	}

	::System::Void Method_2_925B6EF9634A264B(::Class_1_D17272E82AE804C2_649* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_649*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_925B6EF9634A264B_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_10A853A706D7EDFA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_10A853A706D7EDFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96347D126BE5AFBC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_96347D126BE5AFBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3039A15BEA0F4A48(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_3039A15BEA0F4A48_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_EC01C67B16F49E30(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_EC01C67B16F49E30_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapRotationInfo* Method_2_A0C3CBCD03F493F8()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_A0C3CBCD03F493F8_OFFSET))(this);
	}

	::System::Int32 get_MaxEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_MAXENERGY_OFFSET))(this);
	}

	::System::Void set_MaxEnergy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_MAXENERGY_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_CURRENTENERGY_OFFSET))(this);
	}

	::System::Void set_CurrentEnergy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_CURRENTENERGY_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEnergyState Method_2_D703086135204BFA()
	{
		return ((::RPG::GameCore::MapRotationEnergyState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_D703086135204BFA_OFFSET))(this);
	}

	::System::Void Method_2_6D269210CE9D83A1(::RPG::GameCore::MapRotationEnergyState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEnergyState))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_6D269210CE9D83A1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* get_EmptyChargerSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_EMPTYCHARGERSET_OFFSET))(this);
	}

	::System::Void set_EmptyChargerSet(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_EMPTYCHARGERSET_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* get_UsedVolumeInfo()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_USEDVOLUMEINFO_OFFSET))(this);
	}

	::System::Void set_UsedVolumeInfo(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_USEDVOLUMEINFO_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean get_LeaveRotatableRegionOnEnterMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this);
	}

	::System::Void set_LeaveRotatableRegionOnEnterMap(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationGlobalConfig* get_GlobalConfig()
	{
		return ((::RPG::GameCore::MapRotationGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_GLOBALCONFIG_OFFSET))(this);
	}

	::System::Void set_GlobalConfig(::RPG::GameCore::MapRotationGlobalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationGlobalConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_GLOBALCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* get_NpcEffectConfig()
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_NPCEFFECTCONFIG_OFFSET))(this);
	}

	::System::Void set_NpcEffectConfig(::RPG::GameCore::MapRotationEntityEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_NPCEFFECTCONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_MonsterEffectConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_MONSTEREFFECTCONFIGS_OFFSET))(this);
	}

	::System::Void set_MonsterEffectConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_MONSTEREFFECTCONFIGS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_SpecialNpcEffectConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_GET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this);
	}

	::System::Void set_SpecialNpcEffectConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_SET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationTextConfig* Method_2_1244532A4A5AE85B()
	{
		return ((::RPG::GameCore::MapRotationTextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B9847232031B19F_METHOD_2_1244532A4A5AE85B_OFFSET))(this);
	}
};
