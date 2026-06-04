#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSCEPTER_METHOD_4_2EB0E676C2A226F9_OFFSET UNITYSDK_OFFSET(0x1956D1F0)
#define RPG_GAMECORE_BYISSCEPTER_METHOD_4_48FB0D951DBBA72B_OFFSET UNITYSDK_OFFSET(0x1956CFF0)
#define RPG_GAMECORE_BYISSCEPTER_METHOD_4_7DF62F7B791FC495_OFFSET UNITYSDK_OFFSET(0x1956CF20)
#define RPG_GAMECORE_BYISSCEPTER_METHOD_4_832934BEEEB184A8_OFFSET UNITYSDK_OFFSET(0x1956D170)
#define RPG_GAMECORE_BYISSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsScepter_TypeDefinitionIndex = 21853;

	class ByIsScepter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DF62F7B791FC495(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_METHOD_4_7DF62F7B791FC495_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_48FB0D951DBBA72B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_METHOD_4_48FB0D951DBBA72B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_832934BEEEB184A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_METHOD_4_832934BEEEB184A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EB0E676C2A226F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_METHOD_4_2EB0E676C2A226F9_OFFSET))(a1, a2);
		}
	};
}
