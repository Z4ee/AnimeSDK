#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_03EA222221C52AA3_OFFSET UNITYSDK_OFFSET(0x187531D0)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_16322D6633B179F9_OFFSET UNITYSDK_OFFSET(0x18753100)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18753180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstInsertAbilityInQueue_TypeDefinitionIndex = 22502;

	class ByIsFirstInsertAbilityInQueue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16322D6633B179F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_16322D6633B179F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03EA222221C52AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_METHOD_4_03EA222221C52AA3_OFFSET))(a1, a2);
		}
	};
}
