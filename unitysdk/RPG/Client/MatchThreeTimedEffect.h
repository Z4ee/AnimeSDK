#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B51230)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9B517B0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9B516E0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B51630)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9B51520)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x9B513E0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x9B51310)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9B51270)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x9B51480)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B511F0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B51870)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeTimedEffect_TypeDefinitionIndex = 53587;

	class MatchThreeTimedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetPosition_1(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETVERTICAL_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_PLAY_OFFSET))(this, a1);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}
