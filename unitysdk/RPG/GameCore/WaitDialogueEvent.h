#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueEventInfo; }

#define RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_66C8BBEC5342F6FE_OFFSET UNITYSDK_OFFSET(0x190FAD30)
#define RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_A314D8C14DE0396F_OFFSET UNITYSDK_OFFSET(0x190FADB0)
#define RPG_GAMECORE_WAITDIALOGUEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190FAD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueEvent_TypeDefinitionIndex = 20102;

	class WaitDialogueEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DialogueEventInfo*>* DialogueEventList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66C8BBEC5342F6FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_66C8BBEC5342F6FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A314D8C14DE0396F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_A314D8C14DE0396F_OFFSET))(a1, a2);
		}
	};
}
