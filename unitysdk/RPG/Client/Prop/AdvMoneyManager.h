#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_17A5886A757514FA;
class Class_1_C2E1FDEE094F4F72_2;
class FiveDimRenderingPanelRuntime;
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA003F50)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xA0058A0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA005EC0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_INITMANAGER_OFFSET UNITYSDK_OFFSET(0xA003A30)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_LOGICTICK_OFFSET UNITYSDK_OFFSET(0xA004E40)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_187B4790D46C8F21_OFFSET UNITYSDK_OFFSET(0xA0064F0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0xA0062E0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_998E02F9D6277E03_OFFSET UNITYSDK_OFFSET(0xA005B10)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xA006260)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xA005ED0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_SPAWNMONEY_OFFSET UNITYSDK_OFFSET(0xA004B30)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xA0062A0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA006770)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_TypeDefinitionIndex = 63642;

	class AdvMoneyManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MoneyPrefabPath; // 0x18
		::System::String* SpawnMoneyEffectPath; // 0x20
		::System::String* DisappearMoneyEffectPath; // 0x28
		::System::Single RotateYDegreesPerSecond; // 0x30
		::System::Single GetMoneyRadius; // 0x34
		::System::UInt32 GetMoneyNum; // 0x38
		::UnityEngine::Vector3 InitialOffset; // 0x3C
		::System::Single RenderDelayTime; // 0x48
		::FiveDimRenderingPanelRuntime* Field_5_8; // 0x50
		::RPG::GameCore::GameEntity* Field_5_9; // 0x58
		::RPG::Client::Stage* Field_5_10; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* Field_5_11; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_17A5886A757514FA*>*>* Field_5_12; // 0x70
		::System::Single Field_5_13; // 0x78
		::System::Collections::Generic::HashSet_1<::Class_1_17A5886A757514FA*>* Field_5_14; // 0x80
		::System::Collections::Generic::HashSet_1<::Class_1_17A5886A757514FA*>* Field_5_15; // 0x88
		::System::Collections::Generic::List_1<::Class_1_C2E1FDEE094F4F72_2*>* Field_5_16; // 0x90
		::System::Collections::Generic::List_1<::Class_1_C2E1FDEE094F4F72_2*>* Field_5_17; // 0x98
		::System::Boolean Field_5_18; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER__CTOR_OFFSET))(this);
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

		::System::Void Method_5_998E02F9D6277E03(::Class_1_17A5886A757514FA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_17A5886A757514FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_998E02F9D6277E03_OFFSET))(this, a1);
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

		::System::Void Method_5_74FE0F242303E029(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_74FE0F242303E029_OFFSET))(this, a1);
		}

		::System::Void Method_5_187B4790D46C8F21(::Class_0_16E4307DCC419505_375* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_METHOD_5_187B4790D46C8F21_OFFSET))(this, a1);
		}

		::RPG::Client::TriggerEffectParams* GetEffectParams(::Class_1_17A5886A757514FA* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::Class_1_17A5886A757514FA*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET))(this, a1, a2);
		}
	};
}
