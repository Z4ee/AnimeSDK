#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueEventInfo; }

#define RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_25AB9E92D62D0E86_OFFSET UNITYSDK_OFFSET(0x1B8A2810)
#define RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_FE161B172F1B1D5D_OFFSET UNITYSDK_OFFSET(0x1B8A27D0)
#define RPG_GAMECORE_WAITDIALOGUEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A2800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueEvent_TypeDefinitionIndex = 20331;

	class WaitDialogueEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DialogueEventInfo*>* DialogueEventList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE161B172F1B1D5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_FE161B172F1B1D5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25AB9E92D62D0E86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_METHOD_3_25AB9E92D62D0E86_OFFSET))(a1, a2);
		}
	};
}
