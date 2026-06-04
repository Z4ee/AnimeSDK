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

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD505E0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_00E112308978DB48_OFFSET UNITYSDK_OFFSET(0xAD578C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET UNITYSDK_OFFSET(0xAD5CEA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_134D95D2F00E61B8_OFFSET UNITYSDK_OFFSET(0xAD57A70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_17B570D89E92D975_OFFSET UNITYSDK_OFFSET(0xAD5CFE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xAD56CC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0xAD5A080)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAD56A90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET UNITYSDK_OFFSET(0xAD53C70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET UNITYSDK_OFFSET(0xAD508F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAD5B220)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xAD53060)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_31CEAEA85228E6A1_OFFSET UNITYSDK_OFFSET(0xAD56E70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAD5A480)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0xAD558A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xAD5B7F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_59F16ABC00CC1481_OFFSET UNITYSDK_OFFSET(0xAD57600)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET UNITYSDK_OFFSET(0xAD5C330)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xAD5AB70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_662507FF756230C4_OFFSET UNITYSDK_OFFSET(0xAD54940)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_1_OFFSET UNITYSDK_OFFSET(0xAD5A4D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_69EA537FF2142C99_OFFSET UNITYSDK_OFFSET(0xAD59240)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_70FCFB0CD184ECB9_OFFSET UNITYSDK_OFFSET(0xAD55060)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_73E6A16DFD2BF055_OFFSET UNITYSDK_OFFSET(0xAD53D80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7639D264A770ED5E_OFFSET UNITYSDK_OFFSET(0xAD5D3B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7AE92F99828462A7_OFFSET UNITYSDK_OFFSET(0xAD58380)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xAD5D0A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_82BBBFD923AE553D_OFFSET UNITYSDK_OFFSET(0xAD5BA80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0xAD5D430)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xAD5D290)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xAD5B4C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET UNITYSDK_OFFSET(0xAD53C20)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A1D868D08A5B8F47_1_OFFSET UNITYSDK_OFFSET(0xAD5D350)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0xAD5D2F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xAD50CE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xAD5A100)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_1_OFFSET UNITYSDK_OFFSET(0xAD5ACB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0xAD53E00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xAD57A00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0xAD566A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_1_OFFSET UNITYSDK_OFFSET(0xAD5BCA0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AF9D19DD7E16D925_OFFSET UNITYSDK_OFFSET(0xAD5C810)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAD54F80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_1_OFFSET UNITYSDK_OFFSET(0xAD53BB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B87CC65A270B9A62_OFFSET UNITYSDK_OFFSET(0xAD53B20)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET UNITYSDK_OFFSET(0xAD5B900)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC9E4C554813F750_OFFSET UNITYSDK_OFFSET(0xAD58150)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xAD55B10)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0xAD5D140)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xAD5D0F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAD54840)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAD550F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAD55010)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xAD54ED0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CC067AA22C8204A3_OFFSET UNITYSDK_OFFSET(0xAD5CF70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0xAD545D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xAD55390)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xAD55420)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD6F3773C471C755_OFFSET UNITYSDK_OFFSET(0xAD54540)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xAD5AC00)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_DEBE5B36ADFFDD79_OFFSET UNITYSDK_OFFSET(0xAD55140)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xAD50810)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0xAD5B280)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xAD55470)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET UNITYSDK_OFFSET(0xAD5C4A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xAD55510)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xAD54CB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET UNITYSDK_OFFSET(0xAD557D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_1_OFFSET UNITYSDK_OFFSET(0xAD59CD0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_FD7B1F9050F1F3E2_OFFSET UNITYSDK_OFFSET(0xAD58F40)
#define CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD5D1A0)
#define CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5D190)
#define CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD5D230)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex = 56633;

class Class_2_2F6354F2F5DDBF64 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex)->GetStaticField(0x266A0);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::Coroutine* Field_2_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C*>* Field_2_3; // 0x18
	::Class_1_64D890C466F37235* Field_2_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x28
	::RPG::GameCore::GameWorld* Field_2_6; // 0x30
	::RPG::Client::MapRotationInfo* Field_2_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7*>* Field_2_8; // 0x40
	::RPG::Client::MapDef* Field_2_9; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_10; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_11; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_12; // 0x60
	::Class_2_36C95D73718D07B1* Field_2_13; // 0x68
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState Field_2_14; // 0x70
	::System::Boolean Field_2_15; // 0x74
	::System::Boolean Field_2_16; // 0x75
	::System::Boolean Field_2_17; // 0x76
	::System::Boolean Field_2_18; // 0x77
	::System::Int32 Field_2_19; // 0x78
	::System::Int32 Field_2_20; // 0x7C
	::System::Boolean Field_2_21; // 0x80
	::System::Boolean Field_2_22; // 0x81
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState Field_2_23; // 0x84

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

	::System::Boolean Method_2_59F16ABC00CC1481(::RPG::Client::MapNpcDef* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_59F16ABC00CC1481_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_00E112308978DB48(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_00E112308978DB48_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET))(this);
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

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E3DE31A03057E055_OFFSET))(this);
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

	::System::Void Method_2_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E67FA6A042436B76_OFFSET))(this);
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

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_CC067AA22C8204A3(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CC067AA22C8204A3_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_7AE92F99828462A7(::RPG::Client::MapNpcType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7AE92F99828462A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_17B570D89E92D975(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_17B570D89E92D975_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A1D868D08A5B8F47_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D868D08A5B8F47_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A1D868D08A5B8F47_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7639D264A770ED5E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7639D264A770ED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}
};
