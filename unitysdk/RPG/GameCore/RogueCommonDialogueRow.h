#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D917770)
#define RPG_GAMECORE_ROGUECOMMONDIALOGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9178A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCommonDialogueRow_TypeDefinitionIndex = 14530;

	class RogueCommonDialogueRow : public ::System::Object
	{
	public:
		::System::String* DialoguePath; // 0x10
		::System::UInt32 DialogueID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONDIALOGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCommonDialogueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCommonDialogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
