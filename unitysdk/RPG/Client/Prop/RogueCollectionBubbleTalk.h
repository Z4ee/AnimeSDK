#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_METHOD_5_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xC5F70E0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC5F7210)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_SETBELONGENTITY_OFFSET UNITYSDK_OFFSET(0xC5F7270)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_START_OFFSET UNITYSDK_OFFSET(0xC5F6F60)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_UPDATE_OFFSET UNITYSDK_OFFSET(0xC5F6FF0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F72C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionBubbleTalk_TypeDefinitionIndex = 73465;

	class RogueCollectionBubbleTalk : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::RPG::GameCore::PlayNPCBubbleTalk* PlayNPCBubbleTalk; // 0x18
		::System::String* TriggerBubbleStateName; // 0x20
		::System::Int32 TriggerBubbleStateLayer; // 0x28
		::UnityEngine::Animator* Field_5_4; // 0x30
		::RPG::GameCore::GameEntity* Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetBelongEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_SETBELONGENTITY_OFFSET))(this, a1);
		}

		::System::Void Method_5_755870B55A8B3AFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_METHOD_5_755870B55A8B3AFF_OFFSET))(this);
		}
	};
}
