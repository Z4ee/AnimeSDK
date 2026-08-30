#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C98EBA0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1C98E950)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C98E990)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1C98E810)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C98EA30)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C98E8B0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x1C98EBE0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C98E9D0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1C98E850)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C98EB60)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C98EC60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeSelectionState_TypeDefinitionIndex = 66010;

	class MatchThreeSelectionState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int FNOMAKFJKFB; // 0x18
		::System::Boolean FHBNNGCEPFD; // 0x20
		::System::Boolean AKBPNMEFGAO; // 0x21
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x28
		::UnityEngine::Transform* HKPNOFJGOKM; // 0x30
		::UnityEngine::Transform* JPFFLKGCOAM; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_PosIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_SET_POSINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETSELECTED_OFFSET))(this, a1);
		}
	};
}
