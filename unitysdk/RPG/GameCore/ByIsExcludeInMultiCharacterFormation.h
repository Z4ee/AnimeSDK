#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_0762C3FF68ECE466_OFFSET UNITYSDK_OFFSET(0x1CF3AA00)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_107E6176EA54CFDD_OFFSET UNITYSDK_OFFSET(0x1CF3ABC0)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_82CBA3C6851A5C47_OFFSET UNITYSDK_OFFSET(0x1CF3AA40)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_86CE47C150597AB3_OFFSET UNITYSDK_OFFSET(0x1CF3ABF0)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3AA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsExcludeInMultiCharacterFormation_TypeDefinitionIndex = 22392;

	class ByIsExcludeInMultiCharacterFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0762C3FF68ECE466(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_0762C3FF68ECE466_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82CBA3C6851A5C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_82CBA3C6851A5C47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_107E6176EA54CFDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_107E6176EA54CFDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86CE47C150597AB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_86CE47C150597AB3_OFFSET))(a1, a2);
		}
	};
}
