#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookInteraction_IServerAgent; }
namespace RPG::GameCore { class TarotBookConditionParam; }
namespace RPG::GameCore { class TarotBookInteractionRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKINTERACTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19776210)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19775F80)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0x197760C0)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19776020)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_ID_OFFSET UNITYSDK_OFFSET(0x19775E90)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x19775FD0)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19775EE0)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_STARTCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19775F30)
#define RPG_CLIENT_TAROTBOOKINTERACTION_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x197761A0)
#define RPG_CLIENT_TAROTBOOKINTERACTION_MARKFINISHED_OFFSET UNITYSDK_OFFSET(0x19776290)
#define RPG_CLIENT_TAROTBOOKINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19776280)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookInteraction_TypeDefinitionIndex = 65049;

	class TarotBookInteraction : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookInteractionRow* _Meta; // 0x10
		::RPG::Client::TarotBookInteraction_IServerAgent* _ServerAgent; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookInteractionRow* a1, ::RPG::Client::TarotBookInteraction_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookInteractionRow*, ::RPG::Client::TarotBookInteraction_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_PRIORITY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* get_StartConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_STARTCONDITIONS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* get_FinishConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_HASFINISHED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_GET_TITLE_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookInteraction* Create(::RPG::GameCore::TarotBookInteractionRow* a1, ::RPG::Client::TarotBookInteraction_IServerAgent* a2)
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::RPG::GameCore::TarotBookInteractionRow*, ::RPG::Client::TarotBookInteraction_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_CREATE_OFFSET))(a1, a2);
		}

		::System::Void MarkFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKINTERACTION_MARKFINISHED_OFFSET))(this);
		}
	};
}
