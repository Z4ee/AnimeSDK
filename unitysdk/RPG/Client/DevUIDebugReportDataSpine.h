#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATASPINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18094E00)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataSpine_TypeDefinitionIndex = 65303;

	class DevUIDebugReportDataSpine : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::Boolean isPlaying; // 0x18
		::System::Int32 quantity; // 0x1C

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATASPINE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
