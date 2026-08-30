#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_CellConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_AUDIENCESTANCECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xC793FC0)
#define RPG_CLIENT_AUDIENCESTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC793FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceStanceConfig_TypeDefinitionIndex = 69121;

	class AudienceStanceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_RANDOM_OFFSET()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(AudienceStanceConfig_TypeDefinitionIndex)->GetStaticField(0x14EE0);
		}
		::Il2CppArray<::RPG::Client::AudienceStanceConfig_CellConfig>* cellConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCESTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCESTANCECONFIG__CCTOR_OFFSET))();
		}
	};
}
