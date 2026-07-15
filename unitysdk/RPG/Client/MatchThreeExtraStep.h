#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MATCHTHREEEXTRASTEP_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A899380)
#define RPG_CLIENT_MATCHTHREEEXTRASTEP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A8993C0)
#define RPG_CLIENT_MATCHTHREEEXTRASTEP_PLAY_OFFSET UNITYSDK_OFFSET(0x1A8941A0)
#define RPG_CLIENT_MATCHTHREEEXTRASTEP_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1A899480)
#define RPG_CLIENT_MATCHTHREEEXTRASTEP_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A899340)
#define RPG_CLIENT_MATCHTHREEEXTRASTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A899500)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeExtraStep_TypeDefinitionIndex = 62994;

	class MatchThreeExtraStep : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::RPG::Client::MatchThreeBoard* Field_5_1; // 0x18
		::UnityEngine::Animation* Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEEXTRASTEP_PLAY_OFFSET))(this, a1, a2);
		}
	};
}
