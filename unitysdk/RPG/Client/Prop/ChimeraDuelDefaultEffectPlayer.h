#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELDEFAULTEFFECTPLAYER_START_OFFSET UNITYSDK_OFFSET(0x16E1ED70)
#define RPG_CLIENT_PROP_CHIMERADUELDEFAULTEFFECTPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E1EEC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelDefaultEffectPlayer_TypeDefinitionIndex = 74374;

	class ChimeraDuelDefaultEffectPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* EffectPath; // 0x18
		::UnityEngine::Vector3 CustomScale; // 0x20
		::UnityEngine::Transform* Anchor; // 0x30
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* Field_5_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDEFAULTEFFECTPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDEFAULTEFFECTPLAYER_START_OFFSET))(this);
		}
	};
}
