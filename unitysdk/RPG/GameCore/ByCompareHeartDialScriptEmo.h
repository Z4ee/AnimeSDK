#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_20F7DB96FDD24DA9_OFFSET UNITYSDK_OFFSET(0x1CECBB80)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_76BEA9B6E7F4D30F_OFFSET UNITYSDK_OFFSET(0x1CECBDE0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_CA6AD7D4B8A0F7FC_OFFSET UNITYSDK_OFFSET(0x1CECBBC0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_FD4DD268F803EF68_OFFSET UNITYSDK_OFFSET(0x1CECBDB0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECBBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialScriptEmo_TypeDefinitionIndex = 21648;

	class ByCompareHeartDialScriptEmo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x20
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_20F7DB96FDD24DA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_20F7DB96FDD24DA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA6AD7D4B8A0F7FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_CA6AD7D4B8A0F7FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD4DD268F803EF68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_FD4DD268F803EF68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76BEA9B6E7F4D30F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_76BEA9B6E7F4D30F_OFFSET))(a1, a2);
		}
	};
}
