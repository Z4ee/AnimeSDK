#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AudienceIdentityData; }
namespace System { class String; }

#define RPG_CLIENT_AUDIENCEASSETCONFIG_METHOD_3_40AC1F4F55C8B8A0_OFFSET UNITYSDK_OFFSET(0x19B3ED60)
#define RPG_CLIENT_AUDIENCEASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3EE60)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceAssetConfig_TypeDefinitionIndex = 66046;

	class AudienceAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* DEFAULT_CONFIG_PATH; // 0x0
		::Il2CppArray<::RPG::Client::AudienceIdentityData*>* identityData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEASSETCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceIdentityData* Method_3_40AC1F4F55C8B8A0(::System::String* a1)
		{
			return ((::RPG::Client::AudienceIdentityData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEASSETCONFIG_METHOD_3_40AC1F4F55C8B8A0_OFFSET))(this, a1);
		}
	};
}
