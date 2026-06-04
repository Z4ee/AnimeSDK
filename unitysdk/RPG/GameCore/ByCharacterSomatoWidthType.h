#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_075D5319E752AF53_OFFSET UNITYSDK_OFFSET(0x194F7090)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_7301291718D81788_OFFSET UNITYSDK_OFFSET(0x194F7110)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_BBDAD8407F9A41AB_OFFSET UNITYSDK_OFFSET(0x194F6EC0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_E70767F80762DACF_OFFSET UNITYSDK_OFFSET(0x194F6DF0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F6E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCharacterSomatoWidthType_TypeDefinitionIndex = 22411;

	class ByCharacterSomatoWidthType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CharacterSomatoWidthType SomatoWidthType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E70767F80762DACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_E70767F80762DACF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBDAD8407F9A41AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_BBDAD8407F9A41AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_075D5319E752AF53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_075D5319E752AF53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7301291718D81788(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_METHOD_4_7301291718D81788_OFFSET))(a1, a2);
		}
	};
}
