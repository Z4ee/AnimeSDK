#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class RPGFadeAnimation; }
namespace RPG::Client::MechCraft::View { class MechCraftCoinResBarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentDetailControl; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_BTNEXIT_OFFSET UNITYSDK_OFFSET(0xD66F590)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_DETAILCONTROL_OFFSET UNITYSDK_OFFSET(0xD66F640)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_FADEANIMATION_OFFSET UNITYSDK_OFFSET(0xD66F4D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_RESBARCONTROL_OFFSET UNITYSDK_OFFSET(0xD66F6F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_TREESCROLLRECT_OFFSET UNITYSDK_OFFSET(0xD6705D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD670890)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControlBinder_TypeDefinitionIndex = 80058;

	class MechCraftTalentTreeControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExit()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_BTNEXIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentDetailControl* get_DetailControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentDetailControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_DETAILCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCoinResBarControl* get_ResBarControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCoinResBarControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_RESBARCONTROL_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_TreeScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_TREESCROLLRECT_OFFSET))(this);
		}

		::RPG::Client::RPGFadeAnimation* get_FadeAnimation()
		{
			return ((::RPG::Client::RPGFadeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROLBINDER_GET_FADEANIMATION_OFFSET))(this);
		}
	};
}
