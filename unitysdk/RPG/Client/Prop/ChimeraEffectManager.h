#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class ChimeraFireEffect; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERAEFFECTMANAGER_PLAY_OFFSET UNITYSDK_OFFSET(0x18FF0A00)
#define RPG_CLIENT_PROP_CHIMERAEFFECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF0F00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEffectManager_TypeDefinitionIndex = 74474;

	class ChimeraEffectManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AttachPointMapping* Mapping; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEFFECTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Play(::RPG::GameCore::ChimeraFireEffect* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraFireEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEFFECTMANAGER_PLAY_OFFSET))(this, a1, a2);
		}
	};
}
