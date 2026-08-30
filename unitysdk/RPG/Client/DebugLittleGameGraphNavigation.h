#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION__CTOR_OFFSET UNITYSDK_OFFSET(0x192DF5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugLittleGameGraphNavigation_TypeDefinitionIndex = 68308;

	class DebugLittleGameGraphNavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION__CTOR_OFFSET))(this);
		}
	};
}
