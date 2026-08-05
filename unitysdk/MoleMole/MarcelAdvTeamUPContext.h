#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_MARCELADVTEAMUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13847D20)

namespace MoleMole
{
	inline static constexpr unsigned int MarcelAdvTeamUPContext_TypeDefinitionIndex = 79388;

	class MarcelAdvTeamUPContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::UI::RawImage* img; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MARCELADVTEAMUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
