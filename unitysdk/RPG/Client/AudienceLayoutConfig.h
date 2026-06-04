#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_CrowdConfig.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_DensityLevel.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_IdentifierConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_AUDIENCELAYOUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB341C30)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceLayoutConfig_TypeDefinitionIndex = 64672;

	class AudienceLayoutConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Vector2 size; // 0x18
		::System::Int32 column; // 0x20
		::RPG::Client::AudienceLayoutConfig_DensityLevel densityLevel; // 0x28
		::Il2CppArray<::RPG::Client::AudienceLayoutConfig_CrowdConfig>* crowdConfigs; // 0x38
		::Il2CppArray<::RPG::Client::AudienceLayoutConfig_IdentifierConfig>* identifiers; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCELAYOUTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
