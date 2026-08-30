#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x192E4D20)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataMask_TypeDefinitionIndex = 68317;

	class DevUIDebugReportDataMask : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::GameObject* iMask; // 0x18
		::System::Boolean mask; // 0x20
		::System::Boolean smooth; // 0x21

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAMASK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
