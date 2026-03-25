#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapNpcType.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_64D890C466F37235;
class Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7;
class Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C;
class Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610;
class Class_2_36C95D73718D07B1;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1098C830)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_045C0D1CDFEA6CF8_OFFSET UNITYSDK_OFFSET(0x10993090)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET UNITYSDK_OFFSET(0x10998FD0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1163F192802E4946_OFFSET UNITYSDK_OFFSET(0x10991030)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10996270)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET UNITYSDK_OFFSET(0x1098FAF0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1B4006F1E2A8A72A_OFFSET UNITYSDK_OFFSET(0x10997C20)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET UNITYSDK_OFFSET(0x1098CAC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10997360)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10990E50)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_36785A8C685A7E7F_OFFSET UNITYSDK_OFFSET(0x10993CD0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10996670)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x10996DA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x109975F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x10999110)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x109979A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x10990BB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x10991490)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5A17685895E2B3F1_OFFSET UNITYSDK_OFFSET(0x1098FA30)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x109919F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET UNITYSDK_OFFSET(0x109984C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_1_OFFSET UNITYSDK_OFFSET(0x10992E80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x10992B60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x10996D10)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_1_OFFSET UNITYSDK_OFFSET(0x109966C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_OFFSET UNITYSDK_OFFSET(0x10995460)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0x10999540)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_662507FF756230C4_OFFSET UNITYSDK_OFFSET(0x10990840)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x10996E50)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_759691D502C849E6_OFFSET UNITYSDK_OFFSET(0x10990450)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x10999200)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_81AE2C6A8507033E_OFFSET UNITYSDK_OFFSET(0x10993AE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_1_OFFSET UNITYSDK_OFFSET(0x10997E80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_OFFSET UNITYSDK_OFFSET(0x10998990)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1098FD00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x109995D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_917F67D57E3EA21C_OFFSET UNITYSDK_OFFSET(0x10994620)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x109973C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10991420)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET UNITYSDK_OFFSET(0x1098FAA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A0529F9E6E9763B9_OFFSET UNITYSDK_OFFSET(0x10990F50)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x1098CEA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x109962F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x10993C60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x10991790)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AB7D4BDF27C44C86_OFFSET UNITYSDK_OFFSET(0x1098F9A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET UNITYSDK_OFFSET(0x109990A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1098CA00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BBA5B74F0EB50891_OFFSET UNITYSDK_OFFSET(0x1098FC80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET UNITYSDK_OFFSET(0x10997AB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_1_OFFSET UNITYSDK_OFFSET(0x109994D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0x10999460)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x109992A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x10999250)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x109904E0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10990740)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10990FE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10990F00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x10990DA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1098EFB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D08C85013FF6E8A5_OFFSET UNITYSDK_OFFSET(0x10993800)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D092180295618BD8_OFFSET UNITYSDK_OFFSET(0x10994460)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x10991340)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x109913D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x109993F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x10992710)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET UNITYSDK_OFFSET(0x10998630)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET UNITYSDK_OFFSET(0x109916C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_1_OFFSET UNITYSDK_OFFSET(0x10995EB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_OFFSET UNITYSDK_OFFSET(0x10995160)
#define CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET UNITYSDK_OFFSET(0x10999300)
#define CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET UNITYSDK_OFFSET(0x109992F0)
#define CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10999390)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex = 49083;

class Class_2_2F6354F2F5DDBF64 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_23()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex)->GetStaticField(0x41160);
	}
	// static const ::System::Single Field_2_9; // 0x0
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_3; // 0x10
	::RPG::GameCore::GameWorld* Field_2_8; // 0x18
	::RPG::Client::MapRotationInfo* Field_2_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_13; // 0x28
	::UnityEngine::Coroutine* Field_2_11; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_12; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C*>* Field_2_2; // 0x40
	::Class_2_36C95D73718D07B1* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_20; // 0x50
	::RPG::Client::MapDef* Field_2_6; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7*>* Field_2_14; // 0x60
	::Class_1_64D890C466F37235* Field_2_4; // 0x68
	::System::Boolean Field_2_16; // 0x70
	::System::Boolean Field_2_21; // 0x71
	::System::Int32 Field_2_1; // 0x74
	::System::Boolean Field_2_15; // 0x78
	::System::Boolean Field_2_18; // 0x79
	::System::Boolean Field_2_10; // 0x7A
	::System::Boolean Field_2_17; // 0x7B
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState Field_2_19; // 0x7C
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState Field_2_22; // 0x80
	::System::Int32 Field_2_0; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1BEA6E8E084D8523(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB7D4BDF27C44C86(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AB7D4BDF27C44C86_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A5629F2ADDD9D81(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA5B74F0EB50891(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BBA5B74F0EB50891_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_759691D502C849E6(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_759691D502C849E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0529F9E6E9763B9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A0529F9E6E9763B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_1163F192802E4946(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1163F192802E4946_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9C08076C6DB1321(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET))(this, a1);
	}

	::System::Void Method_2_045C0D1CDFEA6CF8(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_045C0D1CDFEA6CF8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D08C85013FF6E8A5(::RPG::Client::MapNpcDef* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D08C85013FF6E8A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_81AE2C6A8507033E(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_81AE2C6A8507033E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	static ::System::Boolean Method_2_D092180295618BD8(::RPG::GameCore::LevelNPCInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D092180295618BD8_OFFSET))(a1);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_1A72AC7AF2C9C69D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A17685895E2B3F1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5A17685895E2B3F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FD7B1F9050F1F3E2(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_662507FF756230C4(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_662507FF756230C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD7B1F9050F1F3E2_1(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_BC091A0885B0518A(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B4006F1E2A8A72A(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1B4006F1E2A8A72A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_64078AC0A26DD3FD(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_824D745937FC6969(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_OFFSET))(this, a1);
	}

	::System::Void Method_2_64078AC0A26DD3FD_1(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_824D745937FC6969_1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2BC66B73E52706A(::RPG::Client::MapRotation::EffectType a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F a5, ::UnityEngine::Transform* a6, ::RPG::GameCore::GameEntity* a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_5C2D2F72ACB32AEA(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_36785A8C685A7E7F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_36785A8C685A7E7F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0DAAD2EBEEA22BD4(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_AD8270226A78BAF5(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_917F67D57E3EA21C(::RPG::Client::MapNpcType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_917F67D57E3EA21C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB_1(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}
};
