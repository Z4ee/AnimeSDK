#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x18094D80)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataError_TypeDefinitionIndex = 65300;

	class DevUIDebugReportDataError : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAERROR__CTOR_OFFSET))(this, a1);
		}
	};
}
