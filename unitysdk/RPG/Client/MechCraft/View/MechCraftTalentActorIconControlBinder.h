#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER_GET_IMGICON_OFFSET UNITYSDK_OFFSET(0xD667050)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD666FA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD667150)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentActorIconControlBinder_TypeDefinitionIndex = 80053;

	class MechCraftTalentActorIconControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgIcon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROLBINDER_GET_IMGICON_OFFSET))(this);
		}
	};
}
