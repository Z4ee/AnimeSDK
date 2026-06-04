#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_0439CF1F0074E6DD_OFFSET UNITYSDK_OFFSET(0x1954D4B0)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_4F3BE60817F166A0_OFFSET UNITYSDK_OFFSET(0x1954D700)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_7C205B2AB05A9391_OFFSET UNITYSDK_OFFSET(0x1954D780)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9C4725DF47580BB3_OFFSET UNITYSDK_OFFSET(0x1954D580)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED__CTOR_OFFSET UNITYSDK_OFFSET(0x1954D530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasCharacterRevived_TypeDefinitionIndex = 21805;

	class ByHasCharacterRevived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0439CF1F0074E6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_0439CF1F0074E6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C4725DF47580BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9C4725DF47580BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F3BE60817F166A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_4F3BE60817F166A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C205B2AB05A9391(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_7C205B2AB05A9391_OFFSET))(a1, a2);
		}
	};
}
