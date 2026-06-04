#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudiencePrefabSpecialTag; }
namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define RPG_CLIENT_AUDIENCEPREFABCONFIG_GET_HASSPECIALNPCTAGS_OFFSET UNITYSDK_OFFSET(0xB33D800)
#define RPG_CLIENT_AUDIENCEPREFABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB342330)

namespace RPG::Client
{
	inline static constexpr unsigned int AudiencePrefabConfig_TypeDefinitionIndex = 64649;

	class AudiencePrefabConfig : public ::System::Object
	{
	public:
		::System::String* AudienceMoodMapConfigPath; // 0x10
		::System::String* SpecialNPCConfigPath; // 0x18
		::Il2CppArray<::RPG::Client::AudiencePrefabSpecialTag*>* SpecialNPCTags; // 0x20
		::UnityEngine::ScriptableObject* SpecialNPCCollection; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasSpecialNPCTags()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABCONFIG_GET_HASSPECIALNPCTAGS_OFFSET))(this);
		}
	};
}
