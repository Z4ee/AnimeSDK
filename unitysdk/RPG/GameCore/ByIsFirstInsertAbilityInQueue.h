#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_03EA222221C52AA3_OFFSET UNITYSDK_OFFSET(0x1CDA1440)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_583175232A097890_OFFSET UNITYSDK_OFFSET(0x1CDA1400)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_64EE4929BB323379_OFFSET UNITYSDK_OFFSET(0x1CDA1580)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_68CBAE0069BCE8B0_OFFSET UNITYSDK_OFFSET(0x1CDA15B0)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA1430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstInsertAbilityInQueue_TypeDefinitionIndex = 23269;

	class ByIsFirstInsertAbilityInQueue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_583175232A097890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_583175232A097890_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03EA222221C52AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_03EA222221C52AA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64EE4929BB323379(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_64EE4929BB323379_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68CBAE0069BCE8B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_68CBAE0069BCE8B0_OFFSET))(a1, a2);
		}
	};
}
