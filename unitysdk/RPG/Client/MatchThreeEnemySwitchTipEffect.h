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

#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBF74200)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBF74180)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_METHOD_5_C1062F26C50C07EE_OFFSET UNITYSDK_OFFSET(0xBF746F0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBF747B0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xBF74360)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBF74240)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBF740E0)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF74920)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnemySwitchTipEffect_TypeDefinitionIndex = 61629;

	class MatchThreeEnemySwitchTipEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		::RPG::Client::MatchThreeBoard* Field_5_4; // 0x18
		::UnityEngine::Animation* Field_5_5; // 0x20
		::UnityEngine::Transform* Field_5_6; // 0x28

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
