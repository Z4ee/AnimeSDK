#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class SimpleText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C989350)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C989390)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1C989A20)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_PLAY_OFFSET UNITYSDK_OFFSET(0x1C9895C0)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1C989540)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C989310)
#define RPG_CLIENT_MATCHTHREEPOWERCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C989B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePowerCounter_TypeDefinitionIndex = 66007;

	class MatchThreePowerCounter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::RPG::Client::SimpleText* GEPFFDDHPAI; // 0x20
		::UnityEngine::Animation* PMOJILOJEPE; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector2 a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Single a6, ::System::String* a7, ::System::Action* a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Color, ::UnityEngine::Color, ::System::UInt32, ::System::Int32, ::System::Single, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_PLAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Play_1(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERCOUNTER_PLAY_1_OFFSET))(this, a1, a2);
		}
	};
}
