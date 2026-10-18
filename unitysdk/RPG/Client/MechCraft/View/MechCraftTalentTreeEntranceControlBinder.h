#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER_GET_BTNENTRANCE_OFFSET UNITYSDK_OFFSET(0xD670E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER_GET_NODEUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xD670EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD671100)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeEntranceControlBinder_TypeDefinitionIndex = 80010;

	class MechCraftTalentTreeEntranceControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnEntrance()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER_GET_BTNENTRANCE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeUnlockHint()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROLBINDER_GET_NODEUNLOCKHINT_OFFSET))(this);
		}
	};
}
