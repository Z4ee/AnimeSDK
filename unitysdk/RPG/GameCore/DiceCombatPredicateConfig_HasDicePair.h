#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_D1B9825CB2CC9110_OFFSET UNITYSDK_OFFSET(0x17167060)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_E3FC1BD266E78D76_OFFSET UNITYSDK_OFFSET(0x17164FC0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x17164F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDicePair_TypeDefinitionIndex = 14780;

	class DiceCombatPredicateConfig_HasDicePair : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* PairCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1B9825CB2CC9110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_D1B9825CB2CC9110_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3FC1BD266E78D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_E3FC1BD266E78D76_OFFSET))(a1, a2);
		}
	};
}
