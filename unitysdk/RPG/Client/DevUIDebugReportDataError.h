#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAERROR__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F99A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataError_TypeDefinitionIndex = 63014;

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
