#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_36C95D73718D07B1_PlayerMotionUnreliableReason.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_32044B0173B87B04_2;
class Class_1_3AD2528CD53B1639_11;
class Class_1_3DE734113B1E313B_2;
class Class_1_F7C690251CDD3A9D;
class Class_1_FA4F4A67B1C04320_513;
class Class_2_36C95D73718D07B1_Class_1_0D3C66B0B1393417;
class Class_2_36C95D73718D07B1_Class_1_20D6296419A54D3C;
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

#define CLASS_2_36C95D73718D07B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87BD4E0)
#define CLASS_2_36C95D73718D07B1_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0x87C2E60)
#define CLASS_2_36C95D73718D07B1_GET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0x87C2E90)
#define CLASS_2_36C95D73718D07B1_GET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x87C2F50)
#define CLASS_2_36C95D73718D07B1_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0x87C2F30)
#define CLASS_2_36C95D73718D07B1_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0x87C2E40)
#define CLASS_2_36C95D73718D07B1_GET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x87C2F90)
#define CLASS_2_36C95D73718D07B1_GET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x87C2F70)
#define CLASS_2_36C95D73718D07B1_GET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x87C2FB0)
#define CLASS_2_36C95D73718D07B1_GET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0x87C2EB0)
#define CLASS_2_36C95D73718D07B1_INIT_OFFSET UNITYSDK_OFFSET(0x87BCC90)
#define CLASS_2_36C95D73718D07B1_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x87C2BD0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x87C2680)
#define CLASS_2_36C95D73718D07B1_METHOD_2_158400796A525B0C_OFFSET UNITYSDK_OFFSET(0x87BE6E0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x87C2ED0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x87C2B70)
#define CLASS_2_36C95D73718D07B1_METHOD_2_20E3FD844F131456_OFFSET UNITYSDK_OFFSET(0x87C2E80)
#define CLASS_2_36C95D73718D07B1_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x87BD670)
#define CLASS_2_36C95D73718D07B1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x87BDF60)
#define CLASS_2_36C95D73718D07B1_METHOD_2_313383AB02AE4B9A_OFFSET UNITYSDK_OFFSET(0x87C1D30)
#define CLASS_2_36C95D73718D07B1_METHOD_2_318BD8054B6AF494_OFFSET UNITYSDK_OFFSET(0x87BD8B0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_3AB3FFEDDC3B0462_OFFSET UNITYSDK_OFFSET(0x87BFC90)
#define CLASS_2_36C95D73718D07B1_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x87BD6D0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_4358B7A5A0106CB5_OFFSET UNITYSDK_OFFSET(0x87C1B50)
#define CLASS_2_36C95D73718D07B1_METHOD_2_47F9467DB31B598C_OFFSET UNITYSDK_OFFSET(0x87BE790)
#define CLASS_2_36C95D73718D07B1_METHOD_2_4E2C9CAA463A3709_OFFSET UNITYSDK_OFFSET(0x87BEAF0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_534761CA6322A6B3_OFFSET UNITYSDK_OFFSET(0x87BD9D0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_53B3BE3FFC0C12EF_OFFSET UNITYSDK_OFFSET(0x87BDBA0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_5872B7D97A4CCD96_OFFSET UNITYSDK_OFFSET(0x87BFA00)
#define CLASS_2_36C95D73718D07B1_METHOD_2_5E354778507BDF06_OFFSET UNITYSDK_OFFSET(0x87C29A0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_66D6C12A9642D63E_OFFSET UNITYSDK_OFFSET(0x87BEBD0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_6D269210CE9D83A1_OFFSET UNITYSDK_OFFSET(0x87BCFF0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x87C27B0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_89B69F825094A993_OFFSET UNITYSDK_OFFSET(0x87BE2F0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_92048492E2D38637_OFFSET UNITYSDK_OFFSET(0x87BD940)
#define CLASS_2_36C95D73718D07B1_METHOD_2_925B6EF9634A264B_OFFSET UNITYSDK_OFFSET(0x87C0430)
#define CLASS_2_36C95D73718D07B1_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x87BD0C0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x87BE210)
#define CLASS_2_36C95D73718D07B1_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x87C1740)
#define CLASS_2_36C95D73718D07B1_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x87C11B0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x87BE640)
#define CLASS_2_36C95D73718D07B1_METHOD_2_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x87BEE60)
#define CLASS_2_36C95D73718D07B1_METHOD_2_D7FF0156F8337FCF_OFFSET UNITYSDK_OFFSET(0x87BDCC0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DC8592C913491D4B_1_OFFSET UNITYSDK_OFFSET(0x87C17C0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0x87C0F00)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x87C04B0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x87C0810)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_3_OFFSET UNITYSDK_OFFSET(0x87C0B80)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_4_OFFSET UNITYSDK_OFFSET(0x87C13D0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_5_OFFSET UNITYSDK_OFFSET(0x87C1930)
#define CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x87C00C0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_E6001A2BA3E9CF69_OFFSET UNITYSDK_OFFSET(0x87C0EE0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_E6B1BFE2113EBA48_OFFSET UNITYSDK_OFFSET(0x87BEA50)
#define CLASS_2_36C95D73718D07B1_METHOD_2_E8ECEA463C992804_OFFSET UNITYSDK_OFFSET(0x87BDA40)
#define CLASS_2_36C95D73718D07B1_METHOD_2_E9073F732A163499_OFFSET UNITYSDK_OFFSET(0x87BFAF0)
#define CLASS_2_36C95D73718D07B1_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x87BFB90)
#define CLASS_2_36C95D73718D07B1_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x87BD570)
#define CLASS_2_36C95D73718D07B1_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0x87C2E70)
#define CLASS_2_36C95D73718D07B1_SET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0x87C2EA0)
#define CLASS_2_36C95D73718D07B1_SET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x87C2F60)
#define CLASS_2_36C95D73718D07B1_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0x87C2F40)
#define CLASS_2_36C95D73718D07B1_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0x87C2E50)
#define CLASS_2_36C95D73718D07B1_SET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x87C2FA0)
#define CLASS_2_36C95D73718D07B1_SET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x87C2F80)
#define CLASS_2_36C95D73718D07B1_SET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x87C2FC0)
#define CLASS_2_36C95D73718D07B1_SET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0x87C2EC0)
#define CLASS_2_36C95D73718D07B1__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x87C2610)
#define CLASS_2_36C95D73718D07B1__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x87BFE30)
#define CLASS_2_36C95D73718D07B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x87C2FF0)
#define CLASS_2_36C95D73718D07B1__CTOR_OFFSET UNITYSDK_OFFSET(0x87C2FD0)
#define CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87C30A0)
#define CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x87C3010)
#define CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x87C30B0)
#define CLASS_2_36C95D73718D07B1___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x87C3170)
#define CLASS_2_36C95D73718D07B1___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x87C3110)

inline static constexpr unsigned int Class_2_36C95D73718D07B1_TypeDefinitionIndex = 53427;

class Class_2_36C95D73718D07B1 : public ::RPG::Client::BaseModule
{
public:
	static ::System::String** StaticGet_Field_2_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36C95D73718D07B1_TypeDefinitionIndex)->GetStaticField(0x352C0);
	}
	::RPG::GameCore::MapRotationEntityEffectConfig* _NpcEffectConfig_k__BackingField; // 0x10
	::RPG::Client::AchievementData* Field_2_16; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _MonsterEffectConfigs_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Field_2_17; // 0x28
	::Class_2_36C95D73718D07B1_Class_1_0D3C66B0B1393417* Field_2_12; // 0x30
	::RPG::Client::AchievementData* Field_2_14; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _SpecialNpcEffectConfigs_k__BackingField; // 0x40
	::RPG::GameCore::MapRotationGlobalConfig* _GlobalConfig_k__BackingField; // 0x48
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _EmptyChargerSet_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* _UsedVolumeInfo_k__BackingField; // 0x58
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_2_18; // 0x60
	::Class_2_36C95D73718D07B1_Class_1_20D6296419A54D3C* Field_2_11; // 0x68
	::RPG::Client::MapDef* Field_2_13; // 0x70
	::RPG::Client::AchievementData* Field_2_15; // 0x78
	::System::Boolean _LeaveRotatableRegionOnEnterMap_k__BackingField; // 0x80
	::System::Int32 _CurrentEnergy_k__BackingField; // 0x84
	::System::Int32 _MaxEnergy_k__BackingField; // 0x88
	::RPG::GameCore::MapRotationEnergyState Field_2_10; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1__CCTOR_OFFSET))();
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_318BD8054B6AF494(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_318BD8054B6AF494_OFFSET))(this, a1);
	}

	::System::Void Method_2_92048492E2D38637(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_92048492E2D38637_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_534761CA6322A6B3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_534761CA6322A6B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E8ECEA463C992804(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_E8ECEA463C992804_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_89B69F825094A993(::System::UInt32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_89B69F825094A993_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E6B1BFE2113EBA48(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_E6B1BFE2113EBA48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E2C9CAA463A3709(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_4E2C9CAA463A3709_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_66D6C12A9642D63E(::System::Boolean a1, ::Class_2_36C95D73718D07B1_PlayerMotionUnreliableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_36C95D73718D07B1_PlayerMotionUnreliableReason))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_66D6C12A9642D63E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3AD2528CD53B1639_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_11*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AB3FFEDDC3B0462(::System::Int32& a1, ::System::UInt32& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::UInt32&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_3AB3FFEDDC3B0462_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_3(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_4(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DC8592C913491D4B_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DC8592C913491D4B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_5(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_DE1C1F4DF5D06882_5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_313383AB02AE4B9A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_313383AB02AE4B9A_OFFSET))(this, a1, a2);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean Method_2_D7FF0156F8337FCF(::Class_1_3DE734113B1E313B_2*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*&))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_D7FF0156F8337FCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E354778507BDF06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_3DE734113B1E313B_2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_5E354778507BDF06_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_32044B0173B87B04_2* Method_2_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::Class_1_F7C690251CDD3A9D* Method_2_158400796A525B0C(::UnityEngine::Quaternion a1)
	{
		return ((::Class_1_F7C690251CDD3A9D*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_158400796A525B0C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_E9073F732A163499(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_E9073F732A163499_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5872B7D97A4CCD96(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_5872B7D97A4CCD96_OFFSET))(this, a1);
	}

	::System::Void Method_2_925B6EF9634A264B(::Class_1_FA4F4A67B1C04320_513* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_513*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_925B6EF9634A264B_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_2_47F9467DB31B598C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_47F9467DB31B598C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4358B7A5A0106CB5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_4358B7A5A0106CB5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapRotationInfo* Method_2_53B3BE3FFC0C12EF()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_53B3BE3FFC0C12EF_OFFSET))(this);
	}

	::System::Int32 get_MaxEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_MAXENERGY_OFFSET))(this);
	}

	::System::Void set_MaxEnergy(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_MAXENERGY_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_CURRENTENERGY_OFFSET))(this);
	}

	::System::Void set_CurrentEnergy(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_CURRENTENERGY_OFFSET))(this, value);
	}

	::RPG::GameCore::MapRotationEnergyState Method_2_20E3FD844F131456()
	{
		return ((::RPG::GameCore::MapRotationEnergyState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_20E3FD844F131456_OFFSET))(this);
	}

	::System::Void Method_2_6D269210CE9D83A1(::RPG::GameCore::MapRotationEnergyState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEnergyState))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_6D269210CE9D83A1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* get_EmptyChargerSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_EMPTYCHARGERSET_OFFSET))(this);
	}

	::System::Void set_EmptyChargerSet(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_EMPTYCHARGERSET_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* get_UsedVolumeInfo()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_USEDVOLUMEINFO_OFFSET))(this);
	}

	::System::Void set_UsedVolumeInfo(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_USEDVOLUMEINFO_OFFSET))(this, value);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean get_LeaveRotatableRegionOnEnterMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this);
	}

	::System::Void set_LeaveRotatableRegionOnEnterMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this, value);
	}

	::RPG::GameCore::MapRotationGlobalConfig* get_GlobalConfig()
	{
		return ((::RPG::GameCore::MapRotationGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_GLOBALCONFIG_OFFSET))(this);
	}

	::System::Void set_GlobalConfig(::RPG::GameCore::MapRotationGlobalConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationGlobalConfig*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_GLOBALCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* get_NpcEffectConfig()
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_NPCEFFECTCONFIG_OFFSET))(this);
	}

	::System::Void set_NpcEffectConfig(::RPG::GameCore::MapRotationEntityEffectConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_NPCEFFECTCONFIG_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_MonsterEffectConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_MONSTEREFFECTCONFIGS_OFFSET))(this);
	}

	::System::Void set_MonsterEffectConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_MONSTEREFFECTCONFIGS_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_SpecialNpcEffectConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_GET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this);
	}

	::System::Void set_SpecialNpcEffectConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_SET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this, value);
	}

	::RPG::GameCore::MapRotationTextConfig* Method_2_E6001A2BA3E9CF69()
	{
		return ((::RPG::GameCore::MapRotationTextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1_METHOD_2_E6001A2BA3E9CF69_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C95D73718D07B1___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
