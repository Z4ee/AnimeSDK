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

class Class_0_16E4307DCC419505_425;
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

#define CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177DFC40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_00E112308978DB48_OFFSET UNITYSDK_OFFSET(0x177E7710)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET UNITYSDK_OFFSET(0x177ECCC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_134D95D2F00E61B8_OFFSET UNITYSDK_OFFSET(0x177E78B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x177E6B00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x177E9EC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x177E68E0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET UNITYSDK_OFFSET(0x177E3B20)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET UNITYSDK_OFFSET(0x177DFF00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x177EB050)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x177E2CB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_2ED6111B0EB9470A_OFFSET UNITYSDK_OFFSET(0x177E7460)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_31CEAEA85228E6A1_OFFSET UNITYSDK_OFFSET(0x177E6CC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x177EA2C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x177E5710)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x177EB5F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x177E4B60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET UNITYSDK_OFFSET(0x177EC140)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x177EA9B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_662507FF756230C4_OFFSET UNITYSDK_OFFSET(0x177E47F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_1_OFFSET UNITYSDK_OFFSET(0x177EA310)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_OFFSET UNITYSDK_OFFSET(0x177E9080)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_70FCFB0CD184ECB9_OFFSET UNITYSDK_OFFSET(0x177E4ED0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_73E6A16DFD2BF055_OFFSET UNITYSDK_OFFSET(0x177E3C30)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7AE92F99828462A7_OFFSET UNITYSDK_OFFSET(0x177E81D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x177ECEE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_82BBBFD923AE553D_OFFSET UNITYSDK_OFFSET(0x177EB880)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x177EB2C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET UNITYSDK_OFFSET(0x177E3AD0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x177E9F40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_1_OFFSET UNITYSDK_OFFSET(0x177EAAF0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x177E3CB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x177E7840)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x177E64F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET UNITYSDK_OFFSET(0x177ECD90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_1_OFFSET UNITYSDK_OFFSET(0x177EBAA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_OFFSET UNITYSDK_OFFSET(0x177EC620)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x177DFE40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x177E4DF0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_1_OFFSET UNITYSDK_OFFSET(0x177E3A60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_OFFSET UNITYSDK_OFFSET(0x177E39D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET UNITYSDK_OFFSET(0x177EB700)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC9E4C554813F750_OFFSET UNITYSDK_OFFSET(0x177E7F90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x177E5980)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x177ECF80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x177ECF30)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x177E46F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x177E4F60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x177E4E80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x177E4D50)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0x177E4470)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x177E5200)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x177E5290)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x177E0300)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D32D68A1483B0B2A_OFFSET UNITYSDK_OFFSET(0x177ECE20)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD6F3773C471C755_OFFSET UNITYSDK_OFFSET(0x177E43E0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x177EAA40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DEBE5B36ADFFDD79_OFFSET UNITYSDK_OFFSET(0x177E4FB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x177EB0B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x177E52E0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET UNITYSDK_OFFSET(0x177EC2B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x177E5380)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET UNITYSDK_OFFSET(0x177E5640)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_1_OFFSET UNITYSDK_OFFSET(0x177E9B10)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_OFFSET UNITYSDK_OFFSET(0x177E8D90)
#define CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET UNITYSDK_OFFSET(0x177ECFE0)
#define CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECFD0)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex = 57879;

class Class_2_2F6354F2F5DDBF64 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex)->GetStaticField(0xED20);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_2; // 0x10
	::RPG::Client::MapDef* Field_2_3; // 0x18
	::Class_2_36C95D73718D07B1* Field_2_4; // 0x20
	::RPG::GameCore::GameWorld* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7*>* Field_2_7; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_8; // 0x40
	::UnityEngine::Coroutine* Field_2_9; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_10; // 0x50
	::RPG::Client::MapRotationInfo* Field_2_11; // 0x58
	::Class_1_64D890C466F37235* Field_2_12; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C*>* Field_2_13; // 0x68
	::System::Boolean Field_2_14; // 0x70
	::System::Boolean Field_2_15; // 0x71
	::System::Boolean Field_2_16; // 0x72
	::System::Boolean Field_2_17; // 0x73
	::System::Int32 Field_2_18; // 0x74
	::System::Int32 Field_2_19; // 0x78
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState Field_2_20; // 0x7C
	::System::Boolean Field_2_21; // 0x80
	::System::Boolean Field_2_22; // 0x81
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState Field_2_23; // 0x84

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

	::System::Void Method_2_B87CC65A270B9A62(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A5629F2ADDD9D81(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_73E6A16DFD2BF055(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_73E6A16DFD2BF055_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD6F3773C471C755(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD6F3773C471C755_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CCF7A015FEFCDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CCF7A015FEFCDABD_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_70FCFB0CD184ECB9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_70FCFB0CD184ECB9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEBE5B36ADFFDD79(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_DEBE5B36ADFFDD79_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9C08076C6DB1321(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET))(this, a1);
	}

	::System::Void Method_2_31CEAEA85228E6A1(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_31CEAEA85228E6A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2ED6111B0EB9470A(::RPG::Client::MapNpcDef* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_2ED6111B0EB9470A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_00E112308978DB48(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_00E112308978DB48_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	static ::System::Boolean Method_2_BC9E4C554813F750(::RPG::GameCore::LevelNPCInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC9E4C554813F750_OFFSET))(a1);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_1A72AC7AF2C9C69D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B87CC65A270B9A62_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_1_OFFSET))(this, a1);
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

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_OFFSET))(this);
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

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_BC091A0885B0518A(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET))(this, a1);
	}

	::System::Void Method_2_82BBBFD923AE553D(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_82BBBFD923AE553D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_69EA537FF2142C99(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF9D19DD7E16D925(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_OFFSET))(this, a1);
	}

	::System::Void Method_2_69EA537FF2142C99_1(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF9D19DD7E16D925_1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2BC66B73E52706A(::RPG::Client::MapRotation::EffectType a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F a5, ::UnityEngine::Transform* a6, ::RPG::GameCore::GameEntity* a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_5C2D2F72ACB32AEA(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_134D95D2F00E61B8(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_134D95D2F00E61B8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0DAAD2EBEEA22BD4(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_AD8270226A78BAF5(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_7AE92F99828462A7(::RPG::Client::MapNpcType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7AE92F99828462A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D32D68A1483B0B2A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D32D68A1483B0B2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
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
};
