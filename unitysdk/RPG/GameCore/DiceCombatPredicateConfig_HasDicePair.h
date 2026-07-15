#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_68D9959B3F3132FB_OFFSET UNITYSDK_OFFSET(0x1C116570)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_C7990E7E12677755_OFFSET UNITYSDK_OFFSET(0x1C1144F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C114490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDicePair_TypeDefinitionIndex = 15486;

	class DiceCombatPredicateConfig_HasDicePair : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* PairCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_68D9959B3F3132FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_68D9959B3F3132FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7990E7E12677755(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_C7990E7E12677755_OFFSET))(a1, a2);
		}
	};
}
