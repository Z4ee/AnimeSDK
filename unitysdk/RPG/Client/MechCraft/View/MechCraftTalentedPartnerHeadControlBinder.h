#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD668D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_IMGICON_OFFSET UNITYSDK_OFFSET(0xD668E00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD668EB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6690D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentedPartnerHeadControlBinder_TypeDefinitionIndex = 79832;

	class MechCraftTalentedPartnerHeadControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgIcon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROLBINDER_GET_IMGICON_OFFSET))(this);
		}
	};
}
