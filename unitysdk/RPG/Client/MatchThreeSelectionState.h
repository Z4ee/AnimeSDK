#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBF93B10)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xBF93920)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xBF93930)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBF93810)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBF939A0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBF93880)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xBF93B50)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xBF93940)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBF93820)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBF93AD0)
#define RPG_CLIENT_MATCHTHREESELECTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF93BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeSelectionState_TypeDefinitionIndex = 61663;

	class MatchThreeSelectionState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x21
		::RPG::Client::MatchThreeBoard* Field_5_3; // 0x28
		::UnityEngine::Transform* Field_5_4; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38

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
