#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }

#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_172A65EB113034BB_OFFSET UNITYSDK_OFFSET(0x1D192C20)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_7C0BD498F33831F0_OFFSET UNITYSDK_OFFSET(0x1D192C60)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D192C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameCreateCharacters_TypeDefinitionIndex = 21077;

	class HipplenMiniGameCreateCharacters : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* CharacterList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_172A65EB113034BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_172A65EB113034BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C0BD498F33831F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_7C0BD498F33831F0_OFFSET))(a1, a2);
		}
	};
}
