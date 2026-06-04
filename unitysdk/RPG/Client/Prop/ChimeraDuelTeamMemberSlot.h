#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstance; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_GETSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xC51CD00)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_PLAYMOTIONFROM_OFFSET UNITYSDK_OFFSET(0xC51E7F0)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC51E780)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xC51E590)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlot_TypeDefinitionIndex = 72877;

	class ChimeraDuelTeamMemberSlot : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* _View; // 0x10
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstance* Instance; // 0x18

		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void PlayMotionFrom(::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_PLAYMOTIONFROM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetScreenPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOT_GETSCREENPOINT_OFFSET))(this);
		}
	};
}
