#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_ANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD675930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNBACK_OFFSET UNITYSDK_OFFSET(0xD675A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0xD6759E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONTINUE_OFFSET UNITYSDK_OFFSET(0xD675B40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD675BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD676010)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopLevelUpControlBinder_TypeDefinitionIndex = 80078;

	class MechCraftWorkshopLevelUpControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnBack()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNBACK_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnContinue()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONTINUE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnConfirm()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONFIRM_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_AnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_ANIMTRIGGER_OFFSET))(this);
		}
	};
}
