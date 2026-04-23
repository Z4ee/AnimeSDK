#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONENTER_OFFSET UNITYSDK_OFFSET(0xA90C5D0)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA90C690)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xA90C510)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xA90C570)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA90C630)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA90C6F0)
#define RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA90C750)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimBodyTriggerSensor_TypeDefinitionIndex = 69783;

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

		::System::Void add_OnEnter(::System::Action_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONENTER_OFFSET))(this, value);
		}

		::System::Void remove_OnEnter(::System::Action_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONENTER_OFFSET))(this, value);
		}

		::System::Void add_OnExit(::System::Action_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_ADD_ONEXIT_OFFSET))(this, value);
		}

		::System::Void remove_OnExit(::System::Action_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYTRIGGERSENSOR_REMOVE_ONEXIT_OFFSET))(this, value);
		}
	};
}
