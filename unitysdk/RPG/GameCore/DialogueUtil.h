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

#define RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCAI_OFFSET UNITYSDK_OFFSET(0xFBD02B0)
#define RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCMONSTERAI_OFFSET UNITYSDK_OFFSET(0xFBD0000)
#define RPG_GAMECORE_DIALOGUEUTIL_GETFIRSTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xFBD0670)
#define RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_1_OFFSET UNITYSDK_OFFSET(0xFBCF210)
#define RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_OFFSET UNITYSDK_OFFSET(0xFBCEF20)
#define RPG_GAMECORE_DIALOGUEUTIL_GETTALKDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xFBD06C0)
#define RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUIVIEWSET_OFFSET UNITYSDK_OFFSET(0xFBCED00)
#define RPG_GAMECORE_DIALOGUEUTIL_GET_ISSHOWINGTALKDIALOGUI_OFFSET UNITYSDK_OFFSET(0xFBCEB10)
#define RPG_GAMECORE_DIALOGUEUTIL_ISCHINWAGDIALOGUE_OFFSET UNITYSDK_OFFSET(0xFBD0620)
#define RPG_GAMECORE_DIALOGUEUTIL_LOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0xFBD0330)
#define RPG_GAMECORE_DIALOGUEUTIL_RESETPLAYERSTATES_OFFSET UNITYSDK_OFFSET(0xFBD04C0)
#define RPG_GAMECORE_DIALOGUEUTIL_SETBILLBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0xFBD05C0)
#define RPG_GAMECORE_DIALOGUEUTIL_SHOWROGUETALKUI_OFFSET UNITYSDK_OFFSET(0xFBCF6C0)
#define RPG_GAMECORE_DIALOGUEUTIL_SHOWTALKUI_OFFSET UNITYSDK_OFFSET(0xFBCF2A0)
#define RPG_GAMECORE_DIALOGUEUTIL_UNLOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0xFBD03D0)
#define RPG_GAMECORE_DIALOGUEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBD0B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueUtil_TypeDefinitionIndex = 54517;

	class DialogueUtil : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_DialogueTriggerRuntimeIDKey()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(DialogueUtil_TypeDefinitionIndex)->GetStaticField(0xF700);
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

		static ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* GetOptionTalks(::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::RPG::GameCore::TalkTrigger_ShowTalkBtnParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* GetOptionTalks_1(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETOPTIONTALKS_1_OFFSET))(a1);
		}

		static ::System::Void ShowTalkUI(::System::Boolean a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SHOWTALKUI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShowRogueTalkUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SHOWROGUETALKUI_OFFSET))(a1);
		}

		static ::System::Void EnableNPCMonsterAI(::System::Boolean a1, ::RPG::GameCore::EntityManager* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCMONSTERAI_OFFSET))(a1, a2);
		}

		static ::System::Void EnableNPCAI(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ENABLENPCAI_OFFSET))(a1, a2);
		}

		static ::System::Void LockPlayerControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_LOCKPLAYERCONTROL_OFFSET))();
		}

		static ::System::Void UnlockPlayerControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_UNLOCKPLAYERCONTROL_OFFSET))();
		}

		static ::System::Void ResetPlayerStates(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_RESETPLAYERSTATES_OFFSET))(a1);
		}

		static ::System::Void SetBillboardVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_SETBILLBOARDVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean IsChinwagDialogue(::RPG::GameCore::DialogueUtil_DialogueTriggerReason a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DialogueUtil_DialogueTriggerReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_ISCHINWAGDIALOGUE_OFFSET))(a1);
		}

		static ::System::UInt32 GetFirstDialogueID(::RPG::GameCore::DialogueUtil_TalkSourceType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::DialogueUtil_TalkSourceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETFIRSTDIALOGUEID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetTalkDialogueID(::RPG::GameCore::DialogueUtil_TalkSourceType a1, ::System::UInt32 a2, ::RPG::GameCore::TalkChosenType a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::DialogueUtil_TalkSourceType, ::System::UInt32, ::RPG::GameCore::TalkChosenType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEUTIL_GETTALKDIALOGUEID_OFFSET))(a1, a2, a3, a4);
		}
	};
}
