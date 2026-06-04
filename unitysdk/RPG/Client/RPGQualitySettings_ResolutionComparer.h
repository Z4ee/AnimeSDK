#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Resolution.h"

#define RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xC695A40)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC695AC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xC695990)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings_ResolutionComparer_TypeDefinitionIndex = 63544;

	class RPGQualitySettings_ResolutionComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Resolution a1, ::UnityEngine::Resolution a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Resolution, ::UnityEngine::Resolution))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Resolution a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Resolution))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESOLUTIONCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
