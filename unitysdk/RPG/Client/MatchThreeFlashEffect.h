#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A899890)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_METHOD_5_6C3DD9E920C4AD10_OFFSET UNITYSDK_OFFSET(0x1A899510)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A899D90)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A8998D0)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYFROMPOSITIONTOPOSITION_OFFSET UNITYSDK_OFFSET(0x1A88FF00)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1A88F9A0)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYTOPOSITION_OFFSET UNITYSDK_OFFSET(0x1A890530)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A88F3F0)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A899850)
#define RPG_CLIENT_MATCHTHREEFLASHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A899E80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeFlashEffect_TypeDefinitionIndex = 62995;

	class MatchThreeFlashEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayFromPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYFROMPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayToPosition(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYTOPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayFromPositionToPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_PLAYFROMPOSITIONTOPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_6C3DD9E920C4AD10(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLASHEFFECT_METHOD_5_6C3DD9E920C4AD10_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
