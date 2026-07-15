#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_17A5886A757514FA;
class Class_1_C2E1FDEE094F4F72;
class FiveDimRenderingPanelRuntime;
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::Prop { class AdvMoneyManager_Class_1_0A4F3555A68FE558; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193AABB0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x193ACFC0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x193AD980)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x193AA360)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_INITMANAGER_OFFSET UNITYSDK_OFFSET(0x193AA430)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_LOGICTICK_OFFSET UNITYSDK_OFFSET(0x193AC470)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x193AD220)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_5F4BFCF72CD8DA61_OFFSET UNITYSDK_OFFSET(0x193ADE80)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_7E00AC2EC95107BF_OFFSET UNITYSDK_OFFSET(0x193AD4D0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0x193ADD40)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_F534E0360F42C704_OFFSET UNITYSDK_OFFSET(0x193AE130)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x193ADCC0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x193AD990)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_QUERYAPPEAREDMONEY_OFFSET UNITYSDK_OFFSET(0x193AD290)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_SPAWNMONEY_OFFSET UNITYSDK_OFFSET(0x193AC0F0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x193ADD00)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x193AE500)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_TypeDefinitionIndex = 74234;

	class AdvMoneyManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::Prop::AdvMoneyManager_Class_1_0A4F3555A68FE558** StaticGet_Field_5_0()
		{
			return (::RPG::Client::Prop::AdvMoneyManager_Class_1_0A4F3555A68FE558**)Il2CppClass::FromTypeDefinitionIndex(AdvMoneyManager_TypeDefinitionIndex)->GetStaticField(0x68D90);
		}
		::System::String* MoneyPrefabPath; // 0x18
		::System::String* SpawnMoneyEffectPath; // 0x20
		::System::String* DisappearMoneyEffectPath; // 0x28
		::System::Single RotateYDegreesPerSecond; // 0x30
		::System::Single GetMoneyRadius; // 0x34
		::System::UInt32 GetMoneyNum; // 0x38
		::UnityEngine::Vector3 InitialOffset; // 0x3C
		::System::Single RenderDelayTime; // 0x48
		::System::Boolean Field_5_9; // 0x4C
		::FiveDimRenderingPanelRuntime* Field_5_10; // 0x50
		::RPG::GameCore::GameEntity* Field_5_11; // 0x58
		::RPG::Client::Stage* Field_5_12; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* Field_5_13; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_17A5886A757514FA*>*>* Field_5_14; // 0x70
		::System::Single Field_5_15; // 0x78
		::System::Collections::Generic::HashSet_1<::Class_1_17A5886A757514FA*>* Field_5_16; // 0x80
		::System::Collections::Generic::HashSet_1<::Class_1_17A5886A757514FA*>* Field_5_17; // 0x88
		::System::Collections::Generic::List_1<::Class_1_C2E1FDEE094F4F72*>* Field_5_18; // 0x90
		::System::Collections::Generic::List_1<::Class_1_C2E1FDEE094F4F72*>* Field_5_19; // 0x98
		::System::Boolean Field_5_20; // 0xA0
		::System::Collections::Generic::Queue_1<::Class_1_17A5886A757514FA*>* Field_5_21; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Prop::AdvMoneyManager_Class_1_0A4F3555A68FE558* get_Services()
		{
			return ((::RPG::Client::Prop::AdvMoneyManager_Class_1_0A4F3555A68FE558*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_SERVICES_OFFSET))();
		}

		::System::Void InitManager(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_INITMANAGER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SpawnMoney(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_SPAWNMONEY_OFFSET))(this, a1, a2);
		}

		::System::Void LogicTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_LOGICTICK_OFFSET))(this, a1);
		}

		::System::Void QueryAppearedMoney(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_QUERYAPPEAREDMONEY_OFFSET))(this, a1);
		}

		::System::Void Method_5_7E00AC2EC95107BF(::Class_1_17A5886A757514FA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_17A5886A757514FA*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_7E00AC2EC95107BF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void Method_5_B560799CAB48EE76(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_B560799CAB48EE76_OFFSET))(this, a1);
		}

		::System::Void Method_5_5F4BFCF72CD8DA61(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_5F4BFCF72CD8DA61_OFFSET))(this, a1);
		}

		::RPG::Client::TriggerEffectParams* GetEffectParams(::Class_1_17A5886A757514FA* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::Class_1_17A5886A757514FA*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F534E0360F42C704(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_F534E0360F42C704_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}
	};
}
