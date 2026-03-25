#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xA10D390)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xA10D410)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_START_OFFSET UNITYSDK_OFFSET(0xA10D2E0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA10D490)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTrigger_TypeDefinitionIndex = 64192;

	class PadsPuzzleTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* onEnter; // 0x18
		::System::Action_1<::UnityEngine::GameObject*>* onLeave; // 0x20
		::UnityEngine::Collider* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_START_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
