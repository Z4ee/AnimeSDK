#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastItem.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET UNITYSDK_OFFSET(0xB7D9580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB7D9450)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7D9630)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7D8F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D9610)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarMarkDiceToastItem_TypeDefinitionIndex = 70781;

	class DiceCombatV2SideBarMarkDiceToastItem : public ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem
	{
	public:
		::UnityEngine::UI::Image* _DiceIcon; // 0x30
		::RPG::Client::LocalizedText* _HintTitle; // 0x38
		::RPG::Client::LocalizedText* _HintDetail; // 0x40
		::UnityEngine::Sprite* Field_6_3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_SETUPVIEW_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType>* GetSupportedMessageTypes()
		{
			return ((::Il2CppArray<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
