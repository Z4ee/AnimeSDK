#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9676F1C43235E384;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftControlBinder; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_BTNEXIT_OFFSET UNITYSDK_OFFSET(0xD60F8C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD60D9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_FADEINPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0xD60F700)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD60D990)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD60FA50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONELOADING_OFFSET UNITYSDK_OFFSET(0xD60FD70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xD60FBE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_METHOD_5_3CE3888623737EB0_OFFSET UNITYSDK_OFFSET(0xD60DA50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD60FF00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD60D9F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xD60D9A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD610D00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftControl_TypeDefinitionIndex = 79904;

	class MechCraftCraftControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* _Owner_k__BackingField; // 0x18
		::Class_1_9676F1C43235E384* LFGMLJCCPCH; // 0x20
		::RPG::Client::MechCraft::View::MechCraftCraftControlBinder* _Binder; // 0x28
		::System::String* _AnimEventSettle; // 0x30
		::System::String* _AnimEventCloseTileVfx; // 0x38
		::RPG::Client::TextID TextIDConfirmExit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Owner()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_OWNER_OFFSET))(this, a1);
		}

		::Class_1_9676F1C43235E384* get_Content()
		{
			return ((::Class_1_9676F1C43235E384*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_9676F1C43235E384* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9676F1C43235E384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Single get_FadeInProtectSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_FADEINPROTECTSECONDS_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExit()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_BTNEXIT_OFFSET))(this);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_ZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_ZoneLoading()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONELOADING_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void Method_5_3CE3888623737EB0(::Class_1_9676F1C43235E384* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9676F1C43235E384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_METHOD_5_3CE3888623737EB0_OFFSET))(this, a1);
		}
	};
}
