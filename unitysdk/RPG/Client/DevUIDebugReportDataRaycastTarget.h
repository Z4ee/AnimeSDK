#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATARAYCASTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F9A10)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataRaycastTarget_TypeDefinitionIndex = 63018;

	class DevUIDebugReportDataRaycastTarget : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::GameObject* iEventSystemHandle; // 0x18
		::System::Boolean isSet; // 0x20

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATARAYCASTTARGET__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
