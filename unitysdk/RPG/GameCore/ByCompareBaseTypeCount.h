#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_4EE2AC89DE266197_OFFSET UNITYSDK_OFFSET(0x19505C90)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_BB55495DC7BDBCA0_OFFSET UNITYSDK_OFFSET(0x19505C10)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F6B2E257D0EBDEEA_OFFSET UNITYSDK_OFFSET(0x195058C0)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F7669BE828D95386_OFFSET UNITYSDK_OFFSET(0x195059A0)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19505940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBaseTypeCount_TypeDefinitionIndex = 22301;

	class ByCompareBaseTypeCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F6B2E257D0EBDEEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F6B2E257D0EBDEEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7669BE828D95386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F7669BE828D95386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB55495DC7BDBCA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_BB55495DC7BDBCA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4EE2AC89DE266197(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_4EE2AC89DE266197_OFFSET))(a1, a2);
		}
	};
}
