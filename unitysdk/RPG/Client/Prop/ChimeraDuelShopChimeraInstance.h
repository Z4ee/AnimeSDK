#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelChimeraModelView; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_INFOBILLBOARDANCHOR_OFFSET UNITYSDK_OFFSET(0xADD6DD0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_INFOPANELANCHOR_OFFSET UNITYSDK_OFFSET(0xADD6DF0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_MODELVIEW_OFFSET UNITYSDK_OFFSET(0xADD49F0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_TALKATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xADD6F80)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_PLAYLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0xADD7E90)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETDIMMED_OFFSET UNITYSDK_OFFSET(0xADD7A70)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xADD7D00)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xADD7960)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SWITCHTOHOLLOW_OFFSET UNITYSDK_OFFSET(0xADD76A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SWITCH_OFFSET UNITYSDK_OFFSET(0xADD7120)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xADD7110)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopChimeraInstance_TypeDefinitionIndex = 71837;

	class ChimeraDuelShopChimeraInstance : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* _View; // 0x10
		::System::Boolean _Highlighted; // 0x18

		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* view)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE__CTOR_OFFSET))(this, view);
		}

		::UnityEngine::Transform* get_InfoBillboardAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_INFOBILLBOARDANCHOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_InfoPanelAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_INFOPANELANCHOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TalkAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_TALKATTACHPOINT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelChimeraModelView* get_ModelView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelChimeraModelView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_GET_MODELVIEW_OFFSET))(this);
		}

		::System::Void Switch(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SWITCH_OFFSET))(this, chimeraID);
		}

		::System::Void SwitchToHollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SWITCHTOHOLLOW_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetDimmed(::System::Boolean dimmed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETDIMMED_OFFSET))(this, dimmed);
		}

		::System::Void SetHighlighted(::System::Boolean highlighted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_SETHIGHLIGHTED_OFFSET))(this, highlighted);
		}

		::System::Void PlayLevelUpEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCE_PLAYLEVELUPEFFECT_OFFSET))(this);
		}
	};
}
