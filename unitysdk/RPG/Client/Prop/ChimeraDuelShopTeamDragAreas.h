#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_DRAGMOVE_OFFSET UNITYSDK_OFFSET(0xC51CF80)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_SETSTALLAREADISABLED_OFFSET UNITYSDK_OFFSET(0xC51D680)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__CTOR_OFFSET UNITYSDK_OFFSET(0xC51D6D0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__ISINSTALLDRAGAREA_OFFSET UNITYSDK_OFFSET(0xC51D4E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopTeamDragAreas_TypeDefinitionIndex = 72858;

	class ChimeraDuelShopTeamDragAreas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _TeamDragArea; // 0x18
		::UnityEngine::RectTransform* _StallDragArea; // 0x20
		::System::Boolean _IsStallAreaDisabled; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__CTOR_OFFSET))(this);
		}

		::System::Void DragMove(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2& a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_DRAGMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsInStallDragArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__ISINSTALLDRAGAREA_OFFSET))(this, a1);
		}

		::System::Void SetStallAreaDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_SETSTALLAREADISABLED_OFFSET))(this, a1);
		}
	};
}
