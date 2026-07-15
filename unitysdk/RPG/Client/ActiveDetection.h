#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_ACTIVEDETECTION_ADDACTIVELISTENER_OFFSET UNITYSDK_OFFSET(0x194A6910)
#define RPG_CLIENT_ACTIVEDETECTION_ADDDEACTIVELISTENER_OFFSET UNITYSDK_OFFSET(0x194A6970)
#define RPG_CLIENT_ACTIVEDETECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194A6A20)
#define RPG_CLIENT_ACTIVEDETECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x194A69D0)
#define RPG_CLIENT_ACTIVEDETECTION_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x194A6820)
#define RPG_CLIENT_ACTIVEDETECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x194A6A70)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveDetection_TypeDefinitionIndex = 69510;

	class ActiveDetection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Events::UnityEvent* _OnActive; // 0x18
		::UnityEngine::Events::UnityEvent* _OnDeactive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION__CTOR_OFFSET))(this);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Void AddActiveListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION_ADDACTIVELISTENER_OFFSET))(this, a1);
		}

		::System::Void AddDeactiveListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION_ADDDEACTIVELISTENER_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEDETECTION_ONDISABLE_OFFSET))(this);
		}
	};
}
