#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_METHOD_3_672D320D8F1FB10D_OFFSET UNITYSDK_OFFSET(0x199D0E30)
#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_METHOD_3_A741C8DBEFD7E7FA_OFFSET UNITYSDK_OFFSET(0x199D0EB0)
#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D0E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyVersusBarQuestChange_TypeDefinitionIndex = 21893;

	class NotifyVersusBarQuestChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::VersusBarQuestStatus NewStatus; // 0x18
		::RPG::Client::TextID QuestTipText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_672D320D8F1FB10D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyVersusBarQuestChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyVersusBarQuestChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_METHOD_3_672D320D8F1FB10D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A741C8DBEFD7E7FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyVersusBarQuestChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyVersusBarQuestChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_METHOD_3_A741C8DBEFD7E7FA_OFFSET))(a1, a2);
		}
	};
}
