#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD655D80)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xD655B30)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD655B70)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD6559F0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD655C10)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD655A90)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xD655DC0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xD655BB0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD655A30)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD655D40)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD655E40)

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
