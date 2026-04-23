#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastItem.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET UNITYSDK_OFFSET(0xA15A650)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA15A6E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA15A8C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_D3B6309C353F0E01_OFFSET UNITYSDK_OFFSET(0xA15A470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA15A250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA15A8B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarTacticsCardToastItem_TypeDefinitionIndex = 69970;

	class DiceCombatV2SideBarTacticsCardToastItem : public ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem
	{
	public:
		::RPG::Client::UIStateCtrl* _MonoUIStateCtrlRoot; // 0x30
		::UnityEngine::UI::Image* _TacticsCardIcon; // 0x38
		::RPG::Client::LocalizedText* _TacticsCardName; // 0x40
		::RPG::Client::LocalizedText* _ToastText; // 0x48
		::UnityEngine::Sprite* Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_SETUPVIEW_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType>* GetSupportedMessageTypes()
		{
			return ((::Il2CppArray<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_D3B6309C353F0E01(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_D3B6309C353F0E01_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
