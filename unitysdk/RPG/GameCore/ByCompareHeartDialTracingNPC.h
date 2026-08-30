#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_6F13D7BD8E6209CE_OFFSET UNITYSDK_OFFSET(0x1C323900)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_72685F474725500B_OFFSET UNITYSDK_OFFSET(0x1C323780)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET UNITYSDK_OFFSET(0x1C3237C0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_EF7FE9954EF54DA3_OFFSET UNITYSDK_OFFSET(0x1C323930)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3237B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialTracingNPC_TypeDefinitionIndex = 21650;

	class ByCompareHeartDialTracingNPC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_72685F474725500B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_72685F474725500B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0510934E8C4FBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F13D7BD8E6209CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_6F13D7BD8E6209CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF7FE9954EF54DA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_EF7FE9954EF54DA3_OFFSET))(a1, a2);
		}
	};
}
