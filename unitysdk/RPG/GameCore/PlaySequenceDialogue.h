#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_METHOD_3_2D064E5C9B1D9B4E_OFFSET UNITYSDK_OFFSET(0x174C68F0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_METHOD_3_65FBE162EA2A1D7F_OFFSET UNITYSDK_OFFSET(0x174C6970)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C6940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySequenceDialogue_TypeDefinitionIndex = 19427;

	class PlaySequenceDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Dialogues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D064E5C9B1D9B4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySequenceDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySequenceDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_METHOD_3_2D064E5C9B1D9B4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65FBE162EA2A1D7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySequenceDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySequenceDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_METHOD_3_65FBE162EA2A1D7F_OFFSET))(a1, a2);
		}
	};
}
