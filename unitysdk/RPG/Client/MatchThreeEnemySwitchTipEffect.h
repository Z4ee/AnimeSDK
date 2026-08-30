#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD6352F0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD635270)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_C1062F26C50C07EE_OFFSET UNITYSDK_OFFSET(0xD635330)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD6353F0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xD62B7D0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD62B6B0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD6351D0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD635560)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnemySwitchTipEffect_TypeDefinitionIndex = 65976;

	class MatchThreeEnemySwitchTipEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* BDCLGLGCCIF; // 0x0
		// static const ::System::String* DNDKBBEACHG; // 0x0
		// static const ::System::String* IJEAHEBAMPH; // 0x0
		// static const ::System::String* ECINKALGKNN; // 0x0
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::UnityEngine::Animation* PMOJILOJEPE; // 0x20
		::UnityEngine::Transform* BILCCJLCGKN; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::String* Method_5_C1062F26C50C07EE(::UnityEngine::Vector2Int a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_C1062F26C50C07EE_OFFSET))(this, a1);
		}
	};
}
