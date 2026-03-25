#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGRPGDEMOGAMECORE__CTOR_OFFSET UNITYSDK_OFFSET(0x9448ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugRPGDemoGameCore_TypeDefinitionIndex = 48926;

	class DebugRPGDemoGameCore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGRPGDEMOGAMECORE__CTOR_OFFSET))(this);
		}
	};
}
