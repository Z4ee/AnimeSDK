#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MOLEMOLE_MONOENTITYIKUPDATELISTENER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16CD0550)
#define MOLEMOLE_MONOENTITYIKUPDATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD05A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityIKUpdateListener_TypeDefinitionIndex = 68349;

	class MonoEntityIKUpdateListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* afterIKUpdateCallBack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYIKUPDATELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYIKUPDATELISTENER_LATEUPDATE_OFFSET))(this);
		}
	};
}
