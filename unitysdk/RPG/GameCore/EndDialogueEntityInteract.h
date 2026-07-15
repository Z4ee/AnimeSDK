#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }

#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_METHOD_3_5913A781866F7360_OFFSET UNITYSDK_OFFSET(0x1C04F830)
#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_METHOD_3_893583003D9DA623_OFFSET UNITYSDK_OFFSET(0x1C04F7F0)
#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04F820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndDialogueEntityInteract_TypeDefinitionIndex = 19612;

	class EndDialogueEntityInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DialogueEntityInteractOverride* OverrideTasks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_893583003D9DA623(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndDialogueEntityInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndDialogueEntityInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_METHOD_3_893583003D9DA623_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5913A781866F7360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_METHOD_3_5913A781866F7360_OFFSET))(a1, a2);
		}
	};
}
