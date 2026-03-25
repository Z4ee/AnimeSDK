#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstance; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_GETSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xA05A410)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_PLAYMOTIONFROM_OFFSET UNITYSDK_OFFSET(0xA05BE80)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xA05BE10)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xA054B70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlot_TypeDefinitionIndex = 63808;

	class ChimeraDuelTeamMemberSlot : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstance* Instance; // 0x10
		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* _View; // 0x18

		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* view)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT__CTOR_OFFSET))(this, view);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_SETVISIBLE_OFFSET))(this, visible);
		}

		::System::Void PlayMotionFrom(::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* sourceSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_PLAYMOTIONFROM_OFFSET))(this, sourceSlot);
		}

		::UnityEngine::Vector2 GetScreenPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_GETSCREENPOINT_OFFSET))(this);
		}
	};
}
