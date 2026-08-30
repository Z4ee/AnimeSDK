#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192E4CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportData_TypeDefinitionIndex = 68310;

	class DevUIDebugReportData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::Int32 quantity; // 0x18

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
