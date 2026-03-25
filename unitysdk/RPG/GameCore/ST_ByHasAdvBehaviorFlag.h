#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_405D78EB2B57D289_OFFSET UNITYSDK_OFFSET(0x17693720)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_9BD1A7406A538847_OFFSET UNITYSDK_OFFSET(0x17693650)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x176936D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAdvBehaviorFlag_TypeDefinitionIndex = 18361;

	class ST_ByHasAdvBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* Flags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BD1A7406A538847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_9BD1A7406A538847_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_405D78EB2B57D289(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_405D78EB2B57D289_OFFSET))(a1, a2);
		}
	};
}
