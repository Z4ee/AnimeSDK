#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_METHOD_3_11BB7B87F698D212_OFFSET UNITYSDK_OFFSET(0x1D566EA0)
#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_METHOD_3_F7136761A55A8627_OFFSET UNITYSDK_OFFSET(0x1D566EE0)
#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D566ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartDialogueEntityInteract_TypeDefinitionIndex = 20157;

	class StartDialogueEntityInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::System::Boolean UseOverrideData; // 0x28
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x30
		::RPG::GameCore::DialogueEntityInteractOverride* OverrideTasks; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11BB7B87F698D212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartDialogueEntityInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartDialogueEntityInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_METHOD_3_11BB7B87F698D212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7136761A55A8627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_METHOD_3_F7136761A55A8627_OFFSET))(a1, a2);
		}
	};
}
