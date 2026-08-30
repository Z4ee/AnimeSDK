#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_GET_STAYTIME_OFFSET UNITYSDK_OFFSET(0x1B8C0EF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B8C12B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B8C11B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B8C1100)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B8C1240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_SETFADEOUTANIMATIONENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8C11F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_START_OFFSET UNITYSDK_OFFSET(0x1B8C0F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C0770)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastItem_TypeDefinitionIndex = 75732;

	class DiceCombatV2SideBarToastItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* MLIGEPPKHNN; // 0x0
		::UnityEngine::Animation* _AnimationRoot; // 0x18
		::System::Single _StayTime; // 0x20
		::System::Action* GPFAFDHFEKP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_StayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_GET_STAYTIME_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void SetFadeOutAnimationEndCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_SETFADEOUTANIMATIONENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTITEM_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
