#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }

#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_13BBC159E90E4433_OFFSET UNITYSDK_OFFSET(0x18A044E0)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_7C0BD498F33831F0_OFFSET UNITYSDK_OFFSET(0x18A04560)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameCreateCharacters_TypeDefinitionIndex = 20303;

	class HipplenMiniGameCreateCharacters : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* CharacterList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13BBC159E90E4433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_13BBC159E90E4433_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C0BD498F33831F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_METHOD_3_7C0BD498F33831F0_OFFSET))(a1, a2);
		}
	};
}
