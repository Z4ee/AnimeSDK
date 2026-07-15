#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_1BB4B594E0BF66E7_OFFSET UNITYSDK_OFFSET(0x19CC02E0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_57C3E83317068639_OFFSET UNITYSDK_OFFSET(0x19CC0310)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_BBDAD8407F9A41AB_OFFSET UNITYSDK_OFFSET(0x19CC0110)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_E53B72343B8E0362_OFFSET UNITYSDK_OFFSET(0x19CC00D0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC0100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCharacterSomatoWidthType_TypeDefinitionIndex = 22853;

	class ByCharacterSomatoWidthType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CharacterSomatoWidthType SomatoWidthType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E53B72343B8E0362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_E53B72343B8E0362_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBDAD8407F9A41AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_BBDAD8407F9A41AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1BB4B594E0BF66E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_1BB4B594E0BF66E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57C3E83317068639(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_57C3E83317068639_OFFSET))(a1, a2);
		}
	};
}
