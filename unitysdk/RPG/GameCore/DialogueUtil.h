#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_DialogueTriggerReason.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_TalkSourceType.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TalkTrigger_ShowTalkBtnParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCAI_OFFSET UNITYSDK_OFFSET(0xA8DD780)
#define RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCMONSTERAI_OFFSET UNITYSDK_OFFSET(0xA8DD510)
#define RPG_GAMECORE_DIALOGUEUTIL_GETFIRSTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xA8DDB40)
#define RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_1_OFFSET UNITYSDK_OFFSET(0xA8DC690)
#define RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_OFFSET UNITYSDK_OFFSET(0xA8DC410)
#define RPG_GAMECORE_DIALOGUEUTIL_GETTALKDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xA8DDB90)
#define RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUIVIEWSET_OFFSET UNITYSDK_OFFSET(0xA8DC2C0)
#define RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUI_OFFSET UNITYSDK_OFFSET(0xA8DC1A0)
#define RPG_GAMECORE_DIALOGUEUTIL_ISCHINWAGDIALOGUE_OFFSET UNITYSDK_OFFSET(0xA8DDAF0)
#define RPG_GAMECORE_DIALOGUEUTIL_LOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0xA8DD800)
#define RPG_GAMECORE_DIALOGUEUTIL_RESETPLAYERSTATES_OFFSET UNITYSDK_OFFSET(0xA8DD990)
#define RPG_GAMECORE_DIALOGUEUTIL_SETBILLBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0xA8DDA90)
#define RPG_GAMECORE_DIALOGUEUTIL_SHOWROGUETALKUI_OFFSET UNITYSDK_OFFSET(0xA8DCB40)
#define RPG_GAMECORE_DIALOGUEUTIL_SHOWTALKUI_OFFSET UNITYSDK_OFFSET(0xA8DC720)
#define RPG_GAMECORE_DIALOGUEUTIL_UNLOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0xA8DD8A0)
#define RPG_GAMECORE_DIALOGUEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8DE000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueUtil_TypeDefinitionIndex = 45941;

	class DialogueUtil : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_DialogueTriggerRuntimeIDKey()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(DialogueUtil_TypeDefinitionIndex)->GetStaticField(0x119B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsShowingTalkDialogUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUI_OFFSET))();
		}

		static ::System::Boolean get_IsShowingTalkDialogUIViewSet()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUIVIEWSET_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* GetOptionTalks(::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* param)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::RPG::GameCore::TalkTrigger_ShowTalkBtnParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_OFFSET))(param);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* GetOptionTalks_1(::Il2CppArray<::System::UInt32>* groupIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_1_OFFSET))(groupIDs);
		}

		static ::System::Void ShowTalkUI(::System::Boolean isShow, ::RPG::GameCore::ELevelPerformanceType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SHOWTALKUI_OFFSET))(isShow, type, id);
		}

		static ::System::Void ShowRogueTalkUI(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SHOWROGUETALKUI_OFFSET))(isShow);
		}

		static ::System::Void EnableNPCMonsterAI(::System::Boolean isEnable, ::RPG::GameCore::EntityManager* pEntityMgr)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCMONSTERAI_OFFSET))(isEnable, pEntityMgr);
		}

		static ::System::Void EnableNPCAI(::System::Boolean isEnable, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCAI_OFFSET))(isEnable, entity);
		}

		static ::System::Void LockPlayerControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_LOCKPLAYERCONTROL_OFFSET))();
		}

		static ::System::Void UnlockPlayerControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_UNLOCKPLAYERCONTROL_OFFSET))();
		}

		static ::System::Void ResetPlayerStates(::RPG::GameCore::GameEntity* dialogEntity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_RESETPLAYERSTATES_OFFSET))(dialogEntity);
		}

		static ::System::Void SetBillboardVisible(::System::Boolean isShown)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SETBILLBOARDVISIBLE_OFFSET))(isShown);
		}

		static ::System::Boolean IsChinwagDialogue(::RPG::GameCore::DialogueUtil_DialogueTriggerReason trigReason)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DialogueUtil_DialogueTriggerReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ISCHINWAGDIALOGUE_OFFSET))(trigReason);
		}

		static ::System::UInt32 GetFirstDialogueID(::RPG::GameCore::DialogueUtil_TalkSourceType srcType, ::System::UInt32 srcCfgId, ::System::UInt32 firstDialogueId)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::DialogueUtil_TalkSourceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETFIRSTDIALOGUEID_OFFSET))(srcType, srcCfgId, firstDialogueId);
		}

		static ::System::UInt32 GetTalkDialogueID(::RPG::GameCore::DialogueUtil_TalkSourceType srcType, ::System::UInt32 srcCfgID, ::RPG::GameCore::TalkChosenType talkChosenType, ::Il2CppArray<::System::UInt32>* talkDialogueGroupIDList)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::DialogueUtil_TalkSourceType, ::System::UInt32, ::RPG::GameCore::TalkChosenType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETTALKDIALOGUEID_OFFSET))(srcType, srcCfgID, talkChosenType, talkDialogueGroupIDList);
		}
	};
}
