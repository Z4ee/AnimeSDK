#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameCharacterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_METHOD_2_1B80257597606598_OFFSET UNITYSDK_OFFSET(0x18A04950)
#define RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameLoadCharacter_TypeDefinitionIndex = 15896;

	class HipplenMiniGameLoadCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenMiniGameCharacterType Type; // 0x10
		::System::String* UniqueName; // 0x18
		::System::String* StoryNPCID; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* InitAnchor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B80257597606598(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameLoadCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameLoadCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_METHOD_2_1B80257597606598_OFFSET))(a1, a2);
		}
	};
}
