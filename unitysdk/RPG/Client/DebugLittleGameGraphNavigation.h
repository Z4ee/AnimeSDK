#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB736E00)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugLittleGameGraphNavigation_TypeDefinitionIndex = 63925;

	class DebugLittleGameGraphNavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION__CTOR_OFFSET))(this);
		}
	};
}
