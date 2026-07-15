#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x17EC5720)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x17EC5710)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_GET_ISDETECTED_OFFSET UNITYSDK_OFFSET(0x17EC4DA0)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_METHOD_5_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x17EC4AC0)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17EC58F0)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x17EC5980)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x17EC5B40)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0x17EC57D0)
#define RPG_CLIENT_AIRSHIPCARDETECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC4EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarDetectTrigger_TypeDefinitionIndex = 57153;

	class AirshipCarDetectTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* collider; // 0x18
		::UnityEngine::LayerMask desiredLayers; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityType>* desiredEntityTypes; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_5_3; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::GameCore::GameEntity*>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDetected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_GET_ISDETECTED_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::GameCore::GameEntity*>* get_Entities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_GET_ENTITIES_OFFSET))(this);
		}

		::System::Void Method_5_907E24F785836BA0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_METHOD_5_907E24F785836BA0_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_RESET_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
