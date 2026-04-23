#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_DRAGMOVE_OFFSET UNITYSDK_OFFSET(0xADD8BA0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_SETSTALLAREADISABLED_OFFSET UNITYSDK_OFFSET(0xADD93E0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__CTOR_OFFSET UNITYSDK_OFFSET(0xADD9430)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__ISINSTALLDRAGAREA_OFFSET UNITYSDK_OFFSET(0xADD9240)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopTeamDragAreas_TypeDefinitionIndex = 71836;

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

		::System::Void DragMove(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Vector2& clampedScreenPoint, ::System::Boolean& isInStallDragArea)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_DRAGMOVE_OFFSET))(this, screenPoint, clampedScreenPoint, isInStallDragArea);
		}

		::System::Boolean _IsInStallDragArea(::UnityEngine::Vector2 screenPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS__ISINSTALLDRAGAREA_OFFSET))(this, screenPoint);
		}

		::System::Void SetStallAreaDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPTEAMDRAGAREAS_SETSTALLAREADISABLED_OFFSET))(this, disabled);
		}
	};
}
