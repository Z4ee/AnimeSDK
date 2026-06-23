#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class CustomEventAction_1; }
namespace MoleMole { class LevelTriggerShapParam; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_LEVELNODEEVENTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19131F30)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKENTERTRIGGER_OFFSET UNITYSDK_OFFSET(0x19134070)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKEXITTRIGGER_OFFSET UNITYSDK_OFFSET(0x19133FD0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_CONFIGCOLLIDER_OFFSET UNITYSDK_OFFSET(0x19133210)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_GET_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x19133080)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_C0FD77CCB1B53417_OFFSET UNITYSDK_OFFSET(0x19134160)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_F4209394A808B3B4_1_OFFSET UNITYSDK_OFFSET(0x19132A20)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_F4209394A808B3B4_OFFSET UNITYSDK_OFFSET(0x19132D50)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19132320)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191320E0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19133E00)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x19133EE0)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_SET_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x19133090)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19132570)
#define MOLEMOLE_LEVELNODEEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19134100)

namespace MoleMole
{
	inline static constexpr unsigned int LevelNodeEventTrigger_TypeDefinitionIndex = 58466;

	class LevelNodeEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::System::Boolean enableAvatar; // 0x30
		::System::Boolean enableMonster; // 0x31
		::System::Collections::Generic::List_1<::System::String*>* enableGameplayTags; // 0x38
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerEnterDelegate; // 0x40
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerStayDelegate; // 0x48
		::Foundation::CustomEventAction_1<::MoleMole::Battle::Entity*>* TriggerExitDelegate; // 0x50
		::System::Single stayTickInterval; // 0x58
		::System::Single Field_5_10; // 0x5C
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_5_11; // 0x60
		::System::Collections::Generic::Queue_1<::UnityEngine::Collider*>* Field_5_12; // 0x68
		::System::Collections::Generic::HashSet_1<::System::Int32>* Field_5_13; // 0x70
		::System::Collections::Generic::Queue_1<::UnityEngine::Collider*>* Field_5_14; // 0x78
		::System::Collections::Generic::HashSet_1<::System::Int32>* Field_5_15; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_EnableState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_GET_ENABLESTATE_OFFSET))(this);
		}

		::System::Void set_EnableState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_SET_ENABLESTATE_OFFSET))(this, a1);
		}

		::System::Void ConfigCollider(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::MoleMole::LevelTriggerShapParam* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::LevelTriggerShapParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CONFIGCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Boolean CheckExitTrigger(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKEXITTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean CheckEnterTrigger(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_CHECKENTERTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_C0FD77CCB1B53417(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_C0FD77CCB1B53417_OFFSET))(this, a1);
		}

		::System::Void Method_5_F4209394A808B3B4(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_F4209394A808B3B4_OFFSET))(this, a1);
		}

		::System::Void Method_5_F4209394A808B3B4_1(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELNODEEVENTTRIGGER_METHOD_5_F4209394A808B3B4_1_OFFSET))(this, a1);
		}
	};
}
