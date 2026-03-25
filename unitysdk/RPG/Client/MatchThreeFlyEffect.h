#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MATCHTHREEFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B36540)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_FLYFROMPOS_OFFSET UNITYSDK_OFFSET(0x9B36300)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_FLY_OFFSET UNITYSDK_OFFSET(0x9B36050)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B36580)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9B36460)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_SETSIZE_OFFSET UNITYSDK_OFFSET(0x9B363E0)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B36500)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B366F0)
#define RPG_CLIENT_MATCHTHREEFLYEFFECT__FLY_OFFSET UNITYSDK_OFFSET(0x9B36140)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeFlyEffect_TypeDefinitionIndex = 53556;

	class MatchThreeFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Fly(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_FLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FlyFromPos(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2Int a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2Int, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_FLYFROMPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void _Fly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEFLYEFFECT__FLY_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
