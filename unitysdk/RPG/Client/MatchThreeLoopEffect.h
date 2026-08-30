#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }

#define RPG_CLIENT_MATCHTHREELOOPEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C279190)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1C278FC0)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C278FE0)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C25DAE0)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1C278FD0)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C279150)
#define RPG_CLIENT_MATCHTHREELOOPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2791D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeLoopEffect_TypeDefinitionIndex = 66000;

	class MatchThreeLoopEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int _PosIndex_k__BackingField; // 0x18
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_PosIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_SET_POSINDEX_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOOPEFFECT_DESPAWNED_OFFSET))(this);
		}
	};
}
