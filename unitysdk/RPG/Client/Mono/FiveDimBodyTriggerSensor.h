#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONENTER_OFFSET UNITYSDK_OFFSET(0xC0565E0)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC0566A0)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xC056500)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xC056570)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONENTER_OFFSET UNITYSDK_OFFSET(0xC056640)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC056700)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC056760)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimBodyTriggerSensor_TypeDefinitionIndex = 70595;

	class FiveDimBodyTriggerSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collider*>* OnEnter; // 0x18
		::System::Action_1<::UnityEngine::Collider*>* OnExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnEnter(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONENTER_OFFSET))(this, a1);
		}

		::System::Void remove_OnEnter(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void add_OnExit(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnExit(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONEXIT_OFFSET))(this, a1);
		}
	};
}
