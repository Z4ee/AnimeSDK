#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class BlushLockedTransformEntry; }
namespace RPG::Client { class CharacterCustomBlushBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERCUSTOMBLUSHMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC68E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCustomBlushMonoPlugin_TypeDefinitionIndex = 70227;

	class CharacterCustomBlushMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CharacterCustomBlushBehavior*>
	{
	public:
		::UnityEngine::GameObject* BodyMask; // 0x30
		::System::Int32 MaterialIndex; // 0x38
		::UnityEngine::Transform* Blush1; // 0x40
		::UnityEngine::Transform* Blush2; // 0x48
		::System::Single BlushClipMultiplier; // 0x50
		::Il2CppArray<::RPG::Client::BlushLockedTransformEntry*>* LockedTransforms; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
