#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/RPG/Client/IPedestrianMemberExternalConfig.h"

namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_GET_SPECIALTAG_OFFSET UNITYSDK_OFFSET(0xDA4A5E0)
#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS__CTOR_OFFSET UNITYSDK_OFFSET(0xDA4A5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PedestrianMemberExternalConfig_MaterialShowParts_TypeDefinitionIndex = 69212;

	class PedestrianMemberExternalConfig_MaterialShowParts : public ::RPG::Client::IPedestrianMemberExternalConfig
	{
	public:
		::System::String* SpecialNPCConfigPath; // 0x10
		::UnityEngine::ScriptableObject* SpecialNPCCollection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS__CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianMemberSpecialTag get_SpecialTag()
		{
			return ((::RPG::Client::EPedestrianMemberSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_GET_SPECIALTAG_OFFSET))(this);
		}
	};
}
