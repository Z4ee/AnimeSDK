#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAPARTICLEPREWARM__CTOR_OFFSET UNITYSDK_OFFSET(0xB73AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataParticlePrewarm_TypeDefinitionIndex = 63931;

	class DevUIDebugReportDataParticlePrewarm : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::Single lifeTime; // 0x18
		::System::Single overTime; // 0x1C

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAPARTICLEPREWARM__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
